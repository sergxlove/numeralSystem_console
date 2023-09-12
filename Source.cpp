#include <iostream>
#include <list>
#include "action.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	action_over_dec act;
	action_to_dec toact;
	for (auto el : toact.to_hex_string("FDA"))
	{
		cout << el;
	}
	return 0;
}