#pragma once
#include <string>
using namespace std;

// Abstract Class all member functions are virtual
class Person
{
public:
	/// <summary>
	/// Default Constructor
	/// </summary>
	Person();


	/// <summary>
	/// Destructor
	/// </summary>
	virtual ~Person();


	/// <summary>
	/// Constructor initialize the class atributes
	/// </summary>
	/// <param name="vorname"></param>
	/// <param name="nachname"></param>
	Person(string vorname, string nachname);

	/// <summary>
	///  Set the value given to the parameter list as the attribute vorname
	/// </summary>
	/// <param name="vorname"></param>
	virtual void setVorname(string vorname);

	/// <summary>
	/// set the value  given in the parameterlist as the attribute nachname
	/// </summary>
	virtual void setNachname(string nachname);

	/// <summary>
	/// return the nachname attributte
	/// </summary>
	/// <returns></returns>
	virtual const string& getNachname();

	/// <summary>
	/// return the  vorname attribute
	/// </summary>
	/// <returns></returns>
	virtual const string& getVorname();
	
	
	/// <summary>
	/// return a string of all class attributes (name, nachname)
	/// </summary>
	/// <returns></returns>
	// Member function = 0 child class can override this function
	virtual string toString() = 0;
private:
	string nachname;
	string vorname;
};

