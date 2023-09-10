#pragma once
#ifndef _ACTION_H_
#define _ACTION_H_
#include <list>
class action
{
public:
	virtual std::list<int> to_bin() = 0;
	virtual std::list<int> to_oct() = 0;
	virtual std::list<int> to_hex() = 0;
private:
};
class action_over_dec : public action
{
public:
	action_over_dec();
	~action_over_dec();
	std::list<int> to_bin() override;
	std::list<int> to_oct() override;
	std::list<int> to_hex() override;
private:
	std::list<int> result;
	int value = 0;
};
class action_to_dec : public action
{
public:
	action_to_dec();
	~action_to_dec();
	std::list<int> to_bin() override;
	std::list<int> to_oct() override;
	std::list<int> to_hex() override;
private:
	std::list<int> result;
	int value = 0;
};
#endif

