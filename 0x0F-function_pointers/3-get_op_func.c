#include "cal.h"

int (*get_op_func(char *s))(int, int)
{
	get_op_func("+") = op_add;
	get_op_func("-") = op_sub;
	get_op_func("*") = op_mul;
	get_op_func("/") = op_div;
	get_op_func("%") = op_mod;
	get_op_func(NULL) = NULL;
	
