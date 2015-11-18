#pragma once
#include "Person.h"
class StudentIN :
	public Person
{
public:

	/// <summary>
	/// Class Constructor initialize all class attributes.
	/// </summary>
	/// <param name="vorname"></param>
	/// <param name="nachename"></param>
	/// <param name="matrikelnummer"></param>
	StudentIN(string vorname, string nachename,string matrikelnummer);

	/// <summary>
	/// return a string of all class attributes (name, nachname, matrikelnummer)
	/// </summary>
	/// <returns></returns>
	string toString() override;

	/// <summary>
	/// Destructor
	/// </summary>
	virtual ~StudentIN();

	/// <summary>
	///  return the value of classattribute matrikelnummer
	/// </summary>
	/// <returns></returns>
	string getMatrikelnummer();
private:
	string matrikelnummer;
};

