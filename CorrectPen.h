#pragma once
#include "Correct.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class CorrectPen : public Correct
{
protected:
	string fluidsupply;
	string tipmaterial;
public:
	CorrectPen();
	
	CorrectPen(const CorrectPen& corp);
	
	void PrintAllInformation() override;
	
	void SetFluidsupply(string Fluidsupply);
	
	string GetFluidsupply() const;
	
	void SetTipmaterial(string Tipmaterial);
	
	string GeTtipmaterial() const;
	
	CorrectPen& operator=(const CorrectPen corp);
	
	void readFromFile(char*path) override;
	
	void writeToFile(string path) override;
		
	void enterFromKeyboard() override;
	
};