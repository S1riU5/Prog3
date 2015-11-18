#include "Person.h"
#include <vector>
#include "StudentIN.h"
#include "ProfessorIn.h"
#include <iostream>

/// <summary>
/// Run the man programm
/// </summary>
void main()
{
	vector<Person*> diePersonen;

	diePersonen.push_back(new StudentIN("Risse", "Felicitas", "635374"));
	diePersonen.push_back(new ProfessorIn("Philippsen", "Nele", "Datenbanken"));
	diePersonen.push_back(new StudentIN("Spillner", "Julian", "123429"));


	for (int i = 0; i < diePersonen.size(); ++i)
	{
		cout << diePersonen[i]->getVorname()<< endl;
	}
		


	
	for (int i = 0; i < diePersonen.size(); ++i)
	{
		std::cout << diePersonen[i]->toString()<< endl;
	}


	for (auto person : diePersonen)
	{
		delete person;
	}


}