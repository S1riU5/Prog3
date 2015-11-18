#include "ProfessorIn.h"
#include <iostream>


ProfessorIn::ProfessorIn(string vorname, string nachname, string lehrgebiet)
{	
	setVorname(vorname);
	setNachname(nachname);
	this->lehrgebiet = lehrgebiet;
}



const string& ProfessorIn::getLehrgebiet()
{
	return lehrgebiet;
}




string ProfessorIn::toString()
{
	return string("Prof. ").append(Person::toString()).append(" Lehrgebiet: ").append(lehrgebiet);
}


ProfessorIn::~ProfessorIn()
{
}
