#include "StringCleaner.h"
#include <iostream>
#include <string>
using namespace std;

StringCleaner::StringCleaner()
{
	readLine();
	cleanUpLine(line, '_');
}



void StringCleaner::readLine()
{
	cout << "Please enter a String: ";
	getline(cin, line);
	

}


string StringCleaner::cleanUpLine(const string old, char symbol)
{

	int count = 1;
	string tmp;
	cleanedLine.reserve(old.length());
	for (int i = findFirstLetter(old); i < findLastLetter(old); i++)
	{
		if (!(old[i] == 32 && old[i + 1] == 32))
		{
			count++;
			tmp = old[i];
			cleanedLine.append(tmp);
		}	
	}
	displayResult(symbol);
	return cleanedLine;
}


void StringCleaner::displayResult(char symbol)
{
	for (int i = 0; i < cleanedLine.length(); ++i)
	{
		if (cleanedLine[i] != 32)
		{
			cout << cleanedLine[i];
		}
		else
		{
			cout << symbol;
		}
	}
	cout << endl;
	
		
	
}


size_t StringCleaner::findLastLetter(string line)
{
		size_t exit = line.length() - 1;
	 
		while (line[exit] == 32)
		{
			exit--;
		}

		return exit;

	

	
}



size_t StringCleaner::findFirstLetter(string line)
{

	size_t entry = 0;
	while (line[entry]==32)
	{
		entry++;
	}

	return entry;
}


StringCleaner::~StringCleaner()
{
	cleanedLine.clear();
}
