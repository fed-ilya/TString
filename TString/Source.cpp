#define _CRT_SECURE_NO_WARNINGS

#include "Header.h"
#include <String.h>
#include <iostream>

using namespace std;

TString::TString() {
	str = new char[1];
	len = 0;
	str[0] = '\0';
	count++;
}

TString::TString(const char* s) {
	len = strlen(s);
	str = new char[len + 1];
	str = strcpy(str, s);
	count++;
}

TString::TString(const TString& s) {
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
	count++;
}

TString:: ~TString() {
	delete[] str;
	count--;
}

TString& TString::operator =(const TString& s) {
	if (this != &s) {
		if (len != s.len) {
			delete[] str;
			len = s.len;
			str = new char[len + 1];
		}
		strcpy(str, s.str);
	}
	return *this;
}

TString& TString::operator =(const char* s) {
	if (len != strlen(s)) {
		delete[] str;
		len = strlen(s);
		str = new char[len + 1];
	}
	strcpy(str, s);
	return *this;
}

char& TString::operator [](const int i) {
	return str[i];
}

int TString::lenght(){
	int n = 0;
	char c = this->str[n];
	while (c != '\0') {
		n++;
		c = this->str[n];
	}
	return n;
}

int TString::symbol(const char a) {
	int n = this->lenght();
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (this->str[i] == a) {
			k++;
		}
	}
	return k;
}

void TString::print() {
	int n = this->len;
	for (int i = 0; i < n; i++) {
		cout << this->str[i];
	}
}
