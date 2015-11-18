#pragma once
class StringSortCompare
{
public:
	/// <summary>
	/// Create a instance of StringSortCompare
	/// </summary>
	StringSortCompare();

	/// <summary>
	/// free all memory allocated from this ínstance
	/// </summary>
	virtual ~StringSortCompare();

	/// <summary>
	/// Sort a Array of char strings 
	/// </summary>
	/// <param name="sfeld"> Array of char strings</param>
	/// <param name="length"> length of the array</param>
	void qsort(char* sfeld[], size_t length);
private:
	static const size_t sfeldlength = 13;
	char * sfeld[sfeldlength];

	/// <summary>
	/// Compares the ascii value of 2 strings
	/// </summary>
	/// <param name="string1">First string to compare </param>
	/// <param name="string2">Second String to compare</param>
	/// <returns>Return 0 if the strings are equal, -1 if string 1 is less the string 2 and 1 if string 1 is grater than string 2</returns>
	int scmp( char* string1,  char* string2);

	/// <summary>
	/// Initialize the classmember sfeld[]
	/// </summary>
	void initArray();

	/// <summary>
	/// display sfeld[] to the console
	/// </summary>
	void displayArray();

	/// <summary>
	/// swap the content of 2 char pointer
	/// </summary>
	/// <param name="actualposition"></param>
	/// <param name="nextPosition"></param>
	void changePositionOfString(char** actualposition, char** nextPosition);

};

