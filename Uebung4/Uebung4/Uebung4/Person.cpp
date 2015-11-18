#include "Person.h"
#include <iostream>


Person::Person(string vorname, string nachname)
{
	this->vorname = vorname;
	this->nachname = nachname;
}

Person::Person()
{
}



const string& Person::getNachname()
{
	return nachname;
}


const string& Person::getVorname()
{
	return vorname;
}



string Person::toString()
{
	return vorname.append(" ").append(nachname);
}


void Person::setVorname(string vorname)
{
	this->vorname = vorname;
}



void Person::setNachname(string nachname)
{
	this->nachname = nachname;
}


Person::~Person()
{
}
