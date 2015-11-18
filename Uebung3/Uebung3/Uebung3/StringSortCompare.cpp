#include "StringSortCompare.h"
#include <stack>
#include <iostream>


StringSortCompare::StringSortCompare()
{
	initArray();
	displayArray();
	qsort(sfeld, sfeldlength);
	displayArray();
	
	
}

StringSortCompare::~StringSortCompare()
{
}

void StringSortCompare::qsort(char* sfeld[], size_t length)
{
	for (int i = 0; i < length-1; ++i)
	{
		
		int tmp = scmp(*(sfeld + i), *(sfeld + i + 1));
		switch (tmp)
		//switch (strcmp(*(sfeld + i), *(sfeld + i + 1)))
			{
			case -1:
				break;
			case 0:
				break;
			case 1:
				
				changePositionOfString(&(*(sfeld+i)), &(*(sfeld + i + 1)));
				i = 0;
				break;	
		}
		
	}
}



int StringSortCompare::scmp( char* string1,  char* string2)
{
	int i = 0, flag = 0;

	if (strlen(string1)>strlen(string2))
	{
		return 1;
	}
	if (strlen(string1) < strlen(string2))
	{
		return -1;
	}

	while (*(string1+i) != '\0' && *(string2+i) != '\0'){
		if (*(string1+i) > *(string2+i)){
			return 1;
		}
		if (*(string1+i) < *(string2+i))
		{
			return -1;
		}
		i++;
	}

}

void StringSortCompare::displayArray()
{
	for (int i = 0; i < sfeldlength; ++i)
	{
		std::cout <<  *(sfeld+i)<< std::endl;
	}
}

void StringSortCompare::initArray()
{
	char* tmp = "eins";
	*(sfeld) = tmp;

	 tmp = "eins1";
	*(sfeld+1) = tmp;

	tmp = "eins2";
	*(sfeld+2) = tmp;

	tmp = "eins";
	*(sfeld+3) = tmp;

	tmp = "zwei";
	*(sfeld+4) = tmp;

	tmp = "drei";
	*(sfeld + 5) = tmp;

	tmp  = "vier";
	*(sfeld+6) = tmp;

	tmp = "fünf";
	*(sfeld+7) = tmp;

	tmp = "sechs";
	*(sfeld+8) = tmp;

	tmp = "sieben";
	*(sfeld+9) = tmp;

	tmp = "acht";
	*(sfeld + 10) = tmp;

	tmp = "neuen";
	*(sfeld + 11) = tmp;

	tmp = "zehn";
	*(sfeld + 12) = tmp; 

	//char* tmp = "zwei";
	//*(sfeld) = tmp;

	//*(sfeld + 1) = tmp;

	
}

void StringSortCompare::changePositionOfString(char** actualposition, char** nextPosition)
{
	char* tmp = *actualposition;;
	*actualposition = *nextPosition ;
	*nextPosition = tmp;
}