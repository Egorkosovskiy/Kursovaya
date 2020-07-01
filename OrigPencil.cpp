#include "OrigPencil.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	OrigPencil::OrigPencil()
	{
		shape = "";
		material = "";
	}
	OrigPencil::OrigPencil(const OrigPencil& openc)
	{
		Pencil(penc);
		shape = openc.shape;
		material = openc.material;
	}
	void OrigPencil::PrintAllInformation() 
	{
		Pencil::PrintAllInformation();
		cout << "Форма: " << shape << endl;
		cout << "Материал корпуса: " << material << endl;
	}
	void OrigPencil::SetShape(string Shape)
	{
		shape = Shape;
	}
	void OrigPencil::SetMaterial(string Material)
	{
		material = Material;
	}
	string OrigPencil::GetShape() const
	{
		return shape;
	}
	string OrigPencil::GetMaterial() const
	{
		return material;
	}
	OrigPencil& OrigPencil::operator=(const OrigPencil openc)
	{
		Pencil::operator=(openc);
		shape = openc.shape;
		material = openc.material;
	}
	void OrigPencil::readFromFile(char*path)
	{
		Pencil::readFromFile(path);
		ifstream file(path);
		string tmp;
		getline(file, tmp);
		shape = tmp;
		getline(file, tmp);
		material = tmp;
		file.close();
	}
	void OrigPencil::writeToFile(string path)
	{
		Pencil::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Форма: ";
		file << shape << endl;
		file << "Материал корпуса: ";
		file << material << endl;
		file.close();
	}
	void OrigPencil::enterFromKeyboard()
	{
		Pencil::enterFromKeyboard();
		cout << "Форма: ";
		cin >> shape;
		cout << "Материал корпуса: ";
		cin >> material;
	}
