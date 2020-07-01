#pragma once
#include "Stationery.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class Writting : public  Stationery
{
protected:
	string color;
public:
	Writting();
	
	Writting(const Writting& write);
	
	void PrintAllInformation() override;
	
	void SetColor(string Color);
	
	string GetColor() const;
	
	Writting& operator=(const Writting& write);
	
	void readFromFile(char*path) override;
	
	void writeToFile(string path) override;
	
	void enterFromKeyboard() override;
	
};