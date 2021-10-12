#include <iostream>
#include <fstream>
using namespace std;

fstream plik,plik1;
int main() {
	plik.open("hasla.txt",ios::in);
	plik.open("passwords.txt",ios::out);
	string haslo;
	for(int i=haslo.length();i>7;i++){
		plik1<<haslo;
	}
	
	return 0;
}
