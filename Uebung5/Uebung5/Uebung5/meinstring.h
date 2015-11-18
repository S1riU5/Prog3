/* cppbuch/k6/meinstringOpt/meinstring.h
   Beispiel zum Buch von U. Breymann: Der C++ Programmierer; 3. Aufl. Hanser 2014
   Diese Software ist freie Software. Website zum Buch: http://www.cppbuch.de/ 
*/
//  einfache String-Klasse. Zweite (optimierte), nicht vollständige
//  Version
#ifndef MEINSTRING_H
#define MEINSTRING_H
#include <cstddef> // {\tt size\_t}



#include <iostream> // {\tt ostream}



class MeinString
{
public:

	/**********************************************************************************************//**
	 * @fn	MeinString::MeinString(const char* str = "");
	 *
	 * @brief	default constructor.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @param	str	The string.
	 **************************************************************************************************/

	MeinString(const char* str = ""); // allg. Konstruktor

	/**********************************************************************************************//**
	 * @fn	MeinString::MeinString(const MeinString&);
	 *
	 * @brief	Copy Constructor.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @param	parameter1	The first parameter.
	 **************************************************************************************************/

	MeinString(const MeinString&); // Kopierkonstruktor

	/**********************************************************************************************//**
	 * @fn	MeinString::~MeinString();
	 *
	 * @brief	Default Desstructor.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 **************************************************************************************************/

	~MeinString(); // Destruktor

	/**********************************************************************************************//**
	 * @fn	MeinString& MeinString::assign(const MeinString&);
	 *
	 * @brief	Assign a given MeinString objetc to this object.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @param	parameter1	The first parameter.
	 *
	 * @return	A MeinString&amp;
	 **************************************************************************************************/

	MeinString& assign(const MeinString&); // Zuweisung eines {\tt MeinString}

	/**********************************************************************************************//**
	 * @fn	MeinString& MeinString::assign(const char*);
	 *
	 * @brief	Assaing a C-String to the MeinString Object.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @param	parameter1	The first parameter.
	 *
	 * @return	A MeinString&amp;
	 **************************************************************************************************/

	MeinString& assign(const char*); // Zuweisung eines {\tt char*}
	const char& at(size_t position) const; // Zeichen holen
	char& at(size_t position); // Zeichen holen,
	//  die Referenz erlaubt Ändern des Zeichens

	/**********************************************************************************************//**
	 * @fn	size_t MeinString::length() const
	 *
	 * @brief	returns the value of length.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @return	member variable len.
	 **************************************************************************************************/

	size_t length() const
	{
		return len;
	} // Stringlänge zurückgeben

	/**********************************************************************************************//**
	 * @fn	size_t MeinString::capacity() const
	 *
	 * @brief	returns the value of cap.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @return	member variable cap.
	 **************************************************************************************************/

	size_t capacity() const
	{
		return cap;
	} // Kapazität zurückgeben

	/**********************************************************************************************//**
	 * @fn	void MeinString::reserve(size_t bytes);
	 *
	 * @brief	allocates memory on the heap  for a MeinString object.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @param	bytes	The bytes.
	 **************************************************************************************************/
	
	void reserve(size_t bytes); // Platz reservieren mit Erhalt des Inhalts

	/**********************************************************************************************//**
	 * @fn	void MeinString::shrink_to_fit();
	 *
	 * @brief	shrinks the allocated memory to the size of start*.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 **************************************************************************************************/

	void shrink_to_fit(); // Platz minimieren

	/**********************************************************************************************//**
	 * @fn	MeinString MeinString::operator=(const MeinString& string);
	 *
	 * @brief	Defines the = operator for MeinString class.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @param	string	The string.
	 *
	 * @return	A shallow copy of this object.
	 **************************************************************************************************/

	MeinString operator=(const MeinString& string); // noch nicht behandelten Operator verbieten

	/**********************************************************************************************//**
	 * @fn	void MeinString::operator+=(const MeinString& string);
	 *
	 * @brief	Defines the += operator for MeinString objects.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @param	string	The string.
	 **************************************************************************************************/

	void operator+=(const MeinString& string); // to  add the parameter string to the caling stringobject

	/**********************************************************************************************//**
	 * @fn	MeinString MeinString::operator+(const MeinString& a);
	 *
	 * @brief	defines the + operator for MeinString objects.
	 *
	 * @author	Simon
	 * @date	01.07.2015
	 *
	 * @param	a	The const MeinString&amp; to process.
	 *
	 * @return	The result of the operation.
	 **************************************************************************************************/

	MeinString operator+(const MeinString& a); // function to concatinate 2 MeinString objects with the + operator
	const char* c_str() const
	{
		return start;
	} // C-String zurückgeben
private:
	size_t len; // Länge
	size_t cap; // Kapazität
	char* start;
	// Zeiger auf den Anfang
	void reserve_only(size_t bytes); // nur Platz reservieren
};

/**********************************************************************************************//**
 * @fn	void anzeigen(std::ostream& os, const MeinString& m);
 *
 * @brief	display a MeinString Object to the screen
 *
 * @author	Simon
 * @date	01.07.2015
 *
 * @param [in,out]	os	The operating system.
 * @param	m		  	The const MeinString&amp; to process.
 **************************************************************************************************/

void anzeigen(std::ostream& os, const MeinString& m); // Version 2

#endif
