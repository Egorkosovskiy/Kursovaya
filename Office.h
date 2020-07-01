#pragma once
#include "Stationery.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class Office : public Stationery
{
protected:
	int quantity;
public:
	Office();
	
	Office(const Office& quan);
	
	void PrintAllInformation() override;
	
	void SetQuantity(int Quantity);
	
	int GetQuantity() const;

	Office& operator=(const Office& quan);
	
	void readFromFile(char*path) override;
	
	void writeToFile(string path) override;
		
	void enterFromKeyboard() override;
	
};