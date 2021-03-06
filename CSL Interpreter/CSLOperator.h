#ifndef COEUS_CSL_INTERPRETER_CSL_OPERATOR_H
#define COEUS_CSL_INTERPRETER_CSL_OPERATOR_H

enum CSLOperator
{
	INVALID_OPERATOR = -1,

	OPERATOR_PLUS,
	OPERATOR_PLUS_EQUALS,
	OPERATOR_PLUS_PLUS,

	OPERATOR_MINUS,
	OPERATOR_MINUS_EQUALS,
	OPERATOR_MINUS_MINUS,

	OPERATOR_MULT,
	OPERATOR_MULT_EQUALS,

	OPERATOR_DIV,
	OPERATOR_DIV_EQUALS,

	OPERATOR_MOD,
	OPERATOR_MOD_EQUALS,

	OPERATOR_AND,
	OPERATOR_OR,
	OPERATOR_NOT,

	OPERATOR_EQUALS,
	OPERATOR_EQUAL_TO,
	OPERATOR_NOT_EQUAL_TO,

	OPERATOR_LESS_THAN,
	OPERATOR_LESS_THAN_OR_EQUAL_TO,

	OPERATOR_GREATER_THAN,
	OPERATOR_GREATER_THAN_OR_EQUAL_TO,

	NUM_OPERATORS
};

const string CSL_OPERATORS[NUM_OPERATORS] = 
{
	"+",
	"+=",
	"++",

	"-",
	"-=",
	"--",

	"*",
	"*=",

	"/",
	"/=",

	"%",
	"%=",

	"&&",
	"||",
	"!",

	"=",
	"==",
	"!=",

	"<",
	"<=",

	">",
	">="
};

#endif // COEUS_CSL_INTERPRETER_CSL_OPERATOR_H