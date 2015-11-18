/* cppbuch/k6/meinstringOpt/main.cpp
   Beispiel zum Buch von U. Breymann: Der C++ Programmierer; 3. Aufl. Hanser 2014
   Diese Software ist freie Software. Website zum Buch: http://www.cppbuch.de/ 
*/
#include "meinstring.h"
#include <iostream>
using namespace std;

int main()
{
	MeinString einString("Hallo");
	anzeigen(cout, einString);
	// Zuweisen
	MeinString zweiterString;
	zweiterString.reserve(20);
	MeinString test;

	zweiterString.assign(
		einString); // dank reserve() kein new erforderlich
	cout << "\n zugewiesener String: ";
	anzeigen(cout, zweiterString);
	cout << endl;
	cout << "zweiterString.length() : " << zweiterString.length() << endl;
	cout << "zweiterString.capacity() : " << zweiterString.capacity()
		<< endl;
	cout << "nach shrink_to_fit(): " << endl;
	zweiterString.shrink_to_fit();
	cout << "zweiterString.length() : " << zweiterString.length() << endl;
	cout << "zweiterString.capacity() : " << zweiterString.capacity()
		<< endl;
	zweiterString += einString;
	MeinString dritterString("test");
	MeinString vierterString(" ");

	dritterString += zweiterString;
	anzeigen(std::cout, dritterString);
	dritterString = zweiterString = einString;
	anzeigen(std::cout, dritterString);
	anzeigen(std::cout, zweiterString);
	anzeigen(std::cout, einString);


	MeinString result = MeinString("string ") + MeinString("concated!");
	anzeigen(std::cout, result);
}
