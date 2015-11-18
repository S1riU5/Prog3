/* cppbuch/k6/meinstringOpt/meinstring.cpp
   Beispiel zum Buch von U. Breymann: Der C++ Programmierer; 3. Aufl. Hanser 2014
   Diese Software ist freie Software. Website zum Buch: http://www.cppbuch.de/ 
*/
#include "meinstring.h"
#include <cassert>
#include <cstring>

// Der allgemeine Konstruktor erzeugt aus einem klassischen C-String ein
// {\tt MeinString}-Objekt.
MeinString::MeinString(const char* s) // allg. Konstruktor
	: len{std::strlen(s)},
	  cap{len},
	  start{new char[cap + 1]}
{
	std::strcpy(start, s);
}

// Der Kopierkonstruktor arbeitet ähnlich, nur dass er die Länge des
// Objekts, mit dem initialisiert wird, direkt übernehmen kann:
MeinString::MeinString(const MeinString& m) // Kopierkonstruktor
	: len{m.len},
	  cap{len},
	  start{new char[cap + 1]}
{
	std::strcpy(start, m.start);
}

MeinString::~MeinString()
{ // Destruktor
	delete[] start;
}

void MeinString::reserve(size_t groesse)
{
	if (groesse > cap)
	{
		char* temp{new char[groesse + 1]}; // neuen Platz beschaffen
		std::strcpy(temp, start); // umkopieren
		delete[] start; // alten Platz freigeben
		start = temp; // Verwaltungsinformation aktualisieren
		cap = groesse; // Verwaltungsinformation aktualisieren
	}
}

void MeinString::reserve_only(size_t groesse)
{
	if (groesse > cap)
	{
		char* temp{new char[groesse + 1]}; // neuen Platz beschaffen
		delete[] start; // alten Platz freigeben
		start = temp; // Verwaltungsinformation aktualisieren
		cap = groesse; // Verwaltungsinformation aktualisieren
	}
}

void MeinString::shrink_to_fit()
{
	if (cap > len)
	{
		char* temp{new char[len + 1]}; // neuen Platz beschaffen
		std::strcpy(temp, start); // umkopieren
		delete[] start; // alten Platz freigeben
		start = temp; // Verwaltungsinformation aktualisieren
		cap = len; // Verwaltungsinformation aktualisieren
	}
}

MeinString& MeinString::assign(
	const MeinString& m)
{ // Zuweisung eines {\tt MeinString}
	reserve_only(m.len);
	std::strcpy(start, m.start);
	len = m.len;
	return *this;
}

MeinString&
MeinString::assign(const char* s)
{ // Zuweisung eines {\tt char*}
	size_t temp{std::strlen(s)};
	reserve_only(temp);
	std::strcpy(start, s);
	len = temp;
	return *this;
}

char& MeinString::at(size_t position)
{ // Zeichen per Referenz holen
	assert(position < len); // Nullbyte lesen ist nicht erlaubt
	return start[position];
}

const char& MeinString::at(size_t position) const
{ // Zeichen holen
	assert(position < len); // Nullbyte lesen ist nicht erlaubt
	return start[position];
}

void anzeigen(std::ostream& os, const MeinString& m)
{ // Version 2
	os << m.c_str() << std::endl;
}


MeinString MeinString::operator=(const MeinString& string)
{
	return this->assign(string);
}


void MeinString::operator+=(const MeinString& string)
{
	len += string.len + 1;
	reserve(len);
	strcat(start, string.start);
}


MeinString MeinString::operator+(const MeinString& a)
{
	MeinString tmp(*this);
	tmp += a;
	return tmp;
}
