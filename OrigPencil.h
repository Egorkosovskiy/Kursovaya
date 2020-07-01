#pragma once
#include "Pencil.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class OrigPencil : public Pencil
{
protected:
	string shape;
	string material;
public:
	OrigPencil();
		
		OrigPencil(const OrigPencil& openc);

		void PrintAllInformation() override;

		void SetShape(string Shape);

		void SetMaterial(string Material);

		string GetShape() const;

		string GetMaterial() const;

		OrigPencil& operator=(const OrigPencil openc);

		void readFromFile(char*path) override;

		void writeToFile(string path) override;

		void enterFromKeyboard() override;
	
};