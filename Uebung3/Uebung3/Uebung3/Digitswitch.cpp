#include "DigitSwitch.h"
#include <iostream>
using namespace std;


Digitswitch::Digitswitch()
{
	initDigit();
	outputArray();
	switchDigits();
	outputArray();
	

}


void Digitswitch::changeNubers(int *(arr), int position)
{
	int tmp;
	tmp = *(arr+position);
	*(arr + position) = *(arr + position+1);
	*(arr + position + 1) = tmp;

}

void Digitswitch::outputArray()
{
	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
		cout << *(digits +i)<< ", ";
	}
	cout << endl;

}

void Digitswitch::initDigit()
{

	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
	
		*(digits + i) = i;
	}
}

void Digitswitch::switchDigits()
{
	
	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
		if (i % 2 == 0)
		{
			changeNubers(digits,i);
		}
	}
}

Digitswitch::~Digitswitch()
{
}
