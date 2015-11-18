#include "StudentIN.h"


StudentIN::StudentIN(string vorname, string nachename, string matrikelnummer):Person(vorname,nachename)
{
	//Person(vorname, nachename)
	//setVorname(vorname);
	//setNachname(nachename);
	this->matrikelnummer = matrikelnummer;
}


string StudentIN::toString()
{
	return string("Sudent: ").append(Person::toString()).append(" Matrikelnummer: ").append(matrikelnummer);

}


string StudentIN::getMatrikelnummer()
{
	return matrikelnummer;
}


StudentIN::~StudentIN()
{
}

