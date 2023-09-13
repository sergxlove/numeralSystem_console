#include "action.h"

void menu::starting_text()
{
	std::cout << "����� ���������� � ������������ ��� ��������� ������ ���������!" << std::endl;
	std::cout << "���� ����������� ������� ��� � ��������� ��������������� ����� ����� �������� ����������� ��������� ���������, ������ ��� ��������, ������������, ���������� � �����������������." << std::endl;
	std::cout << "��������� ��� �� ������� ����� ������ � �������� ������ ������ �������, � ����� �������� ������� ��������������." << std::endl;
	std::cout << "����, �������� ������� ���������, ������� ����� � ������� ���� �������� �����������!" << std::endl;
}

void menu::print_line()
{
	for (int i = 0;i < 100;i++)
	{
		std::cout << "-";
	}
	std::cout << std::endl;
}

void menu::sys_numeral()
{
	std::cout << "1 - ��������" << std::endl;
	std::cout << "2 - ������������" << std::endl;
	std::cout << "3 - ����������" << std::endl;
	std::cout << "4 - �����������������" << std::endl;
	std::cout << "��� ����� : " << std::endl;
}

bool menu::check_correct_value(int value, int numeral_sys)
{
	bool result = true;
	int var_del = 0;
	while(value)
	{
		var_del = value % 10;
		if (var_del >= numeral_sys)
		{
			return false;
		}
		value /= 10;
	}
	return true;
}

bool menu::check_correct_value(std::string value, int numeral_sys)
{
	return false;
}

