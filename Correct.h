#pragma once
#include "Office.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class Correct : public Office
{
protected:
	string colorbody;
public:
	Correct();

		Correct(const Correct& cor);

		void PrintAllInformation() override;

		void SetColorbody(string Colorbody);

		string GetColorbody() const;

		Correct& operator=(const Correct& cor);

		void readFromFile(char*path) override;

		void writeToFile(string path) override;

		void enterFromKeyboard() override;
	
};