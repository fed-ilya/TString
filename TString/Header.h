#pragma once

#include <iostream>
using namespace std;

class TString {
private:
	char *str;
	int len; //символов без учета \0
	static int count;
	static const int LIM = 80;
public:
	TString();
	TString(const char* s);
	TString(const TString& s);
	~TString();
	TString& operator =(const TString& s);
	TString& operator =(const char* s);
	char& operator [](const int i);
	int lenght();
	int symbol(const char a);
	void print();
	friend ostream& operator <<(ostream& os, TString& s) {
		int n = s.lenght();
		for (int i = 0; i < n; i++) {
			os << s.str[i];
		}
		return os;
	}
};