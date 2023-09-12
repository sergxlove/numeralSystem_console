#include <iostream>
#include <list>
#include "action.h"
#include "enum.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	action_over_dec act;
	action_to_dec toact;
	menu m;
	int var_switch = 0;
	m.print_line();
	m.starting_text();
	m.print_line();
	m.sys_numeral();
	cin >> var_switch;
	var_switch = convert_to_enum(var_switch);
	switch (var_switch)
	{
	case var::var_bin:
		cout << endl;
		break;
	case var::var_oct:
		break;
	case var::var_dec:
		break;
	case var::var_hex:
		break;
	default:
		break;
	}
	return 0;
}