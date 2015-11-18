#pragma once
#include <iostream>
using namespace std;

class StringCleaner
{
public:

	/// <summary>
	/// read aString from inputstream and save it into string line
	/// </summary>
	void readLine();

	/// <summary>
	/// create a instance of string cleaner
	/// </summary>
	StringCleaner();

	/// <summary>
	/// Delete the Reserved string cleanedLine
	/// </summary>
	virtual ~StringCleaner();
private:


	/// <summary>
	/// Display the new cleand string to the console
	/// </summary>
	/// <param name="symbol">symbol for " "</param>
	void displayResult(char symbol);

	/// <summary>
	/// Remove all parts of the string which do not belog to it.
	/// </summary>
	/// <param name="old"></param>
	/// <param name="symbol"></param>
	/// <returns></returns>
	string cleanUpLine(const string old, char symbol);

	/// <summary>
	/// Find the First letter of the string and return it.
	/// </summary>
	/// <param name="line"></param>
	/// <returns> size_t entry</returns>
	size_t findFirstLetter(string line);

	/// <summary>
	/// Finde the Last letter of the string and return it.
	/// </summary>
	/// <param name="line"></param>
	/// <returns>size_t exit</returns>
	size_t findLastLetter(string line);
	
	string cleanedLine;
	string line;

};

