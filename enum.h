#pragma once
#ifndef _ENUM_
#define _ENUM_
enum var
{
	var_bin,
	var_oct,
	var_dec,
	var_hex,
	var_no_indef
};
var convert_to_enum(int var);
#endif // !_ENUM_
