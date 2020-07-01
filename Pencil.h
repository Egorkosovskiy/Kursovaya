#pragma once
#include "Writting.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;
class Pencil : public Writting
{
protected:
	string erase;
	string softness;
public:
	Pencil();
	
	Pencil(const Pencil& penc);
	
	void PrintAllInformation() override;
	
	void SetErase(string Erase);
	
	string GetErase() const;
	
	void SetSoftness(string Softness);
	
	string GetSoftness() const;
	
	Pencil& operator=(const Pencil penc);
	
	void readFromFile(char*path) override;
	
	void writeToFile(string path) override;
	
	void enterFromKeyboard() override;
	
};