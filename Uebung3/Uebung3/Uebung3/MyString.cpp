#include "MyString.h"
#include <iostream>

#include <string.h>

using namespace std;


MyString::MyString()
{
	
	auto myString = strduplikate("MY Test String");
	cout << myString << endl;

}


char* MyString::strduplikate(const char* baseString)
{
	sLength = strlen(baseString);
	cpStr = new char[sLength + 1];
	strcpy(cpStr, baseString);
	return cpStr;
}



MyString::~MyString()
{
	delete cpStr;
}
