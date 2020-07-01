#pragma once
#include "Pen.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class FountainPen : public Pen
{
protected:
	string grip;
	int consumables;
public:
	FountainPen();
	
	FountainPen(const FountainPen& fpen);
	
	void PrintAllInformation() override;
	
	void SetGrip(string Grip);

	string GetGrip() const;
	
	void SetConsumables(int Consumables);
	
	int GetMaterial() const;
	
	FountainPen& operator=(const FountainPen fpen);
	
	void readFromFile(char*path) override;
	
	void writeToFile(string path) override;
	
	void enterFromKeyboard() override;
	
};