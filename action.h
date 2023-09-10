#pragma once
#ifndef _ACTION_H_
#define _ACTION_H_
class action
{
public:
	virtual int to_bin() = 0;
	virtual int to_oct() = 0;
	virtual int to_hex() = 0;
private:
};
class action_over_dec : public action
{
	int to_bin() override;
	int to_oct() override;
	int to_hex() override;
};
class action_to_dec : public action
{
	int to_bin() override;
	int to_oct() override;
	int to_hex() override;
};
#endif

