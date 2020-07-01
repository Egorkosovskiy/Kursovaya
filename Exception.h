#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class Exception {
public:
	Exception() {
		Msg = new char[40];
		strcpy(Msg, "Произошло исключение неизвестного типа");
	}
	Exception(const char* msg) {
		Msg = new char[strlen(msg) + 1];
		strcpy(Msg, msg);
	}
	const char* GetError() const {
		return Msg;
	}
	~Exception() {
		delete[] Msg;
	}
private:
	char* Msg;
};