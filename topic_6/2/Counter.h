#pragma once

class Counter
{
private:
	int count;

public:
	Counter(int count);

	Counter();

	void add();

	void subtract();

	void show();
};