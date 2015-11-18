#pragma once
#include "Person.h"
class ProfessorIn :
	public Person
{


public:
	ProfessorIn(string vorname, string nachname, string lehrgebiet);

	/// <summary>
	///  Destructor
	/// </summary>
	virtual ~ProfessorIn();

	/// <summary>
	/// Class Constructor to initialize all attributes
	/// </summary>
	/// <param name="vorname"></param>
	/// <param name="nachname"></param>
	/// <param name="lehrgebiet"></param>
	ProfessorIn();

	/// <summary>
	/// return a string of all class attributes (name, nachname,lehrgebiet)
	/// </summary>
	string toString() override;

	/// <summary>
	/// Return the value of the attribute lehrgebiet
	/// </summary>
	const string& getLehrgebiet();
private:
	string lehrgebiet;
};

