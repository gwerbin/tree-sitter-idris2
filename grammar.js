/*
 * https://github.com/idris-lang/Idris2/blob/03f23b0/src/Parser/Lexer/Common.idr
 * https://github.com/idris-lang/Idris2/blob/03f23b0/src/Parser/Lexer/Source.idr
 * https://github.com/idris-lang/Idris2/blob/03f23b0/src/Parser/Rule/Source.idr
 * https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr
 * https://github.com/idris-lang/Idris2/blob/03f23b0/libs/prelude/Prelude/Types.idr
 */

// https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr#L350-L354=
const asciiControlAbbrevs = [
  "NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL", "BS", "HT", "LF",
  "VT", "FF", "CR", "SO", "SI", "DLE", "DC1", "DC2", "DC3", "DC4", "NAK",
  "SYN", "ETB", "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US", "SP", "DEL"
]

module.exports = grammar({
  name: 'idris2',

  rules: {
    // module: $ => repeat(choice($._text, $._number)),
    module: $ => repeat($.statement),
    statement: $ => $.expression,
    expression: $ => choice($._text, $._number),

    // Identifiers

    // TODO: Unicode
    _identifierHeadLower: $ => /a-z/,
    _identifierHeadUpper: $ => /A-Z/,
    // _identifierHead: $ => choice('_', $._identifierHeadUpper, $._identifierHeadLower),
    // _identifierRest: $ => choice('-', '_', '\\', /[A-Za-z]/, /[^\x00-\x9F]/),
    // _identifierRest: $ => choice('-', '_', '\\', /[A-Za-z]/),
    _identifierRest: $ => choice('_', '\\', /[A-Za-z]/),
    _identifierUpper: $ => seq($._identifierHeadUpper, repeat($._identifierRest)),
    _identifierLower: $ => seq($._identifierHeadLower, repeat($._identifierRest)),
    identifier: $ => choice($._identifierUpper, $._identifierLower),
    identifierDotted: $ => seq($.identifier, repeat(seq('.', $.identifier))),

    // Numeric literals

    // https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr#L359-L397=
    _integerDecimal: $ => /[0-9]+(?:_[0-9]+)*/,
    _integerHexadecimal: $ => /0x[0-9A-Fa-f]+(?:_[0-9A-Fa-f]+)*/,
    _integerOctal: $ => /0o[0-7]+(?:_[0-7]+)*/,
    _integerBinary: $ => /0b[01]+(?:_[01]+)*/,
    integer: $ => choice(
      $._integerDecimal,
      $._integerHexadecimal,
      $._integerOctal,
      $._integerBinary
    ),

    // https://github.com/idris-lang/Idris2/blob/03f23b0/src/Parser/Lexer/Source.idr#L178-L181=
    double: $ => /[0-9]+\.[0-9]+(?:[eE][-+]?[0-9]+)/,

    _number: $ => choice($.integer, $.double),

    // Text literals

    // https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr#L337-L357=
    char: $ => seq(
      "'",
      choice(
        seq(
          '\\',
          choice(
            ...asciiControlAbbrevs,
            /o[0-7]+/,
            /x[0-9A-Fa-f]+/,
            /[0-9]+/,
            /./
          )
        ),
        /[^'\\]/
      ),
      "'"
    ),

    // https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr#L310-L335=
    // interpolation: $ => seq('\\{', $.expression, '}'),
    // interpolation: $ => seq('\\{', /[^\\}]+/, '}'),
    string: $ => seq(
      '"',
      repeat(choice(
        // $.interpolation,
        seq('\\{', /[^\}]+/, '}'),
        '\\\\',
        /\\./,
        /[^"\n\r]+/
      )),
      '"',
    ),

    _text: $ => choice($.char, $.string),

    // Function application

    // Comments
    // _lineCommentLeader: $ => '--',
    // lineComment: $ => prec(0, seq($._lineCommentLeader, /.*$/))
    // _lineCommentLeader: $ => '--',
    // lineComment: $ => prec(0, seq('--', /.*\n?/))
  }

});
