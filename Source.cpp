#include <iostream>
#include <list>
#include "action.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	action_over_dec act;
	for (auto el : act.to_hex(1426446))
	{
		cout << el;
	}
	return 0;
}