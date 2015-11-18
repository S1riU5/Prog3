#pragma once

class MyString
{
public:

	/// <summary>
	/// Create a instance of MyString
	/// </summary>
	MyString();


	/// <summary>
	/// copy a string given to the function
	/// </summary>
	/// <param name="baseString"></param>
	/// <returns> char* cpStr </returns>
	char* strduplikate(const char* baseString);

	/// <summary>
	/// Destructor free the memory used in this class from the heap
	/// </summary>
	~MyString();


private:
	size_t sLength;
	char* cpStr;
};

