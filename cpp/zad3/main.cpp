#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream plik("wynik.txt");

	if(!plik.is_open()) {
	  cout << "kij";
	return 1;
}
	string imie;
	string nazwisko;
	cout<<"Podaj imie\n";
	cin>> imie;
	cout<<"Podaj nazwisko\n";
	cin>> nazwisko;

	plik <<imie+"\n" ;
	plik <<nazwisko ;
	plik.close();
	return 0;
}
