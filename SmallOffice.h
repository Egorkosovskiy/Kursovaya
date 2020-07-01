#pragma once
#include "Office.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class SmallOffice : public Office
{
protected:
	string cover;
	string shapee;
public:
	SmallOffice();
	
	SmallOffice(const SmallOffice& sof);
	
	void PrintAllInformation() override;
	
	void SetCover(string Cover);
	
	string GetCover() const;
	
	void SetShapee(string Shapee);
	
	string GetShapee() const;
	
	SmallOffice& operator=(const SmallOffice sof);
	
	void readFromFile(char*path) override;
	
	void writeToFile(string path) override;
	
	void enterFromKeyboard() override;
	
};