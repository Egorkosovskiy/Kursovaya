#pragma once
#include "Writting.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;
class Pen : public Writting
{
protected:
	double thickness;
public:
	Pen();
	
	Pen(const Pen& pen);
	
	void PrintAllInformation() override;
	
	void SetThickness(double Thickness);
	
	double GetThickness() const;
	
	Pen& operator=(const Pen pen);
	
	void readFromFile(char*path) override;
	
	void writeToFile(string path) override;
	
	void enterFromKeyboard() override;
	
};