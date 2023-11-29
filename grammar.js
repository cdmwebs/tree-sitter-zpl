function commaSep1(rule) {
	return seq(rule, repeat(seq(',', rule)))
}

const commands = [
	"BC",
	"BD",
	"BQ",
	"BY",
	"CF",
	"CI",
	"CT",
	"CV",
	"FB",
	"FC",
	"FD",
	"FO",
	"FS",
	"FV",
	"FW",
	"FX",
	"GB",
	"GF",
	"LL",
	"LH",
	"LS",
	"PQ",
	"PO",
	"PW",
	"XA",
	"XZ",
	"A",
];

module.exports = grammar({
	name: 'zpl',

	rules: {
		source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.function_definition,
		),

		symbol: $ => "^",

		function_definition: $ => seq(
			$.symbol,
			$.command,
			optional($.parameter_list),
		),

		parameter_list: $ => seq(
			commaSep1($.parameter),
		),

		parameter: $ => /[^\^]+/,
		command: $ => choice(...commands),
	}
});
