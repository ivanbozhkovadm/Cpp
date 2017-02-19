#ifndef __EXAMPLE_THIS_HPP__
#define __EXAMPLE_THIS_HPP__

class Timer
{
public:
	bool isTime(Timer& parameter);
};
bool Timer::isTime(Timer& parameter)
{
	if (&parameter==this)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void displayTimer()
{
	Timer timer;
	Timer* pTimer;
	pTimer = &timer;
	if (pTimer->isTime(timer))
	{
		cout << "Yes! address of &a is b\n";
	}
	else
	{
		cout << "No!address of &a is not b\n";
	}
}
#endif // !__EXAMPLE_THIS_HPP__