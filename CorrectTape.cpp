#include "CorrectTape.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	CorrectTape::CorrectTape()
	{
		width = 0;
	}
	CorrectTape::CorrectTape(const CorrectTape& cort)
	{
		Correct(cor);
		width = cort.width;
	}
	void CorrectTape::PrintAllInformation()
	{
		Correct::PrintAllInformation();
		cout << "Ўирина ленты: " << width << endl;
	}
	void CorrectTape::SetWidth(int Width)
	{
		width = Width;
	}
	int CorrectTape::GetWidth() const
	{
		return width;
	}
	CorrectTape& CorrectTape::operator=(const CorrectTape& cort)
	{
		Correct::operator=(cort);
		width = cort.width;
	}
	void CorrectTape::readFromFile(char*path)
	{
		Correct::readFromFile(path);
		ifstream file(path);
		file >> width;
		file.close();
	}
	void CorrectTape::writeToFile(string path)
	{
		Correct::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Ўирина ленты: ";
		file << width << endl;
		file.close();
	}
	void CorrectTape::enterFromKeyboard()
	{
		Correct::enterFromKeyboard();
		cout << "Ўирина ленты: ";
		cin >> width;
	}
