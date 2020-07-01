#pragma once
#include "Correct.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class CorrectTape : public Correct
{
protected:
	int width;
public:
	CorrectTape();

		CorrectTape(const CorrectTape& cort);

		void PrintAllInformation() override;

		void SetWidth(int Width);

		int GetWidth() const;

		CorrectTape& operator=(const CorrectTape& cort);

		void readFromFile(char*path) override;

		void writeToFile(string path) override;

		void enterFromKeyboard() override;
	
};