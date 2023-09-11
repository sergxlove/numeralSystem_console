#pragma once
#ifndef _ACTION_H_
#define _ACTION_H_
#include <list>
#include <string>
class action
{
public:
	virtual std::list<int> to_bin(int value) = 0;
	virtual std::list<int> to_oct(int value) = 0;
	virtual std::list<std::string> to_hex(int value) = 0;
private:
};
class action_over_dec : public action
{
public:
	action_over_dec();
	~action_over_dec();
	std::list<int> to_bin(int value) override;
	std::list<int> to_oct(int value) override;
	std::list<std::string> to_hex(int value) override;
private:
	std::list<int> result;
	std::list<std::string> result_hex;
};
class action_to_dec : public action
{
public:
	action_to_dec();
	~action_to_dec();
	std::list<int> to_bin(int value) override;
	std::list<int> to_oct(int value) override;
	std::list<std::string> to_hex(int value) override;
private:
	std::list<int> result;
	std::list<std::string> result_hex;
};
#endif

