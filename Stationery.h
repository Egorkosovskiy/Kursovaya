#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "IStationery.h"
using namespace std;
class Stationery : public IStationery {
protected:
	int price;
	string brand;
	string name;
public:
	Stationery();
	
	Stationery(const Stationery& stat);
	
	void PrintAllInformation() override;
	
	int GetPrice() const override;
	
	string GetName() const override;
	
	string GetBrand() const override;
	
	void SetPrice(int Price) override;
	
	void SetName(string Name) override;
	
	void SetBrand(string Brand) override;
	
	Stationery& operator=(const Stationery& stat);
	
	void readFromFile(char*path) override;
	
	void writeToFile(string path) override;
	
	void enterFromKeyboard() override;

};