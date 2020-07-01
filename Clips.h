#pragma once
#include "SmallOffice.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class Clips : public SmallOffice
{
protected:
	int lengthh;
public:
	Clips();
	
	Clips(const Clips& clip);
	
	void PrintAllInformation() override;
	
	void SetLengthh(int Lengthh);
	
	int GetLengthh() const;
	
	Clips& operator=(const Clips& clip);
	
	void readFromFile(char*path) override;
	
	void writeToFile(string path) override;
	
	void enterFromKeyboard() override;
	
};