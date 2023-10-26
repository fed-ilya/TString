#include "Header.h"
#include <iostream>

using namespace std;

int TString::count = 0;

int main() {
	setlocale(LC_ALL, "Russian");
	TString s("Hello");
	TString s1;
	s1 = s;
	s1 = "Hello";
	cout << s1.lenght() << "\n";
	cout << s1.symbol('l') << "\n";
	s1.print();
	cout << s1;
}