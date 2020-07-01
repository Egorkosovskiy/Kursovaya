#include "BallPen.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	BallPen::BallPen()
	{
		avto = "";
		length = 0;
	}
	BallPen::BallPen(const BallPen& bpen)
	{
		Pen(fpen);
		avto = bpen.avto;
		length = bpen.length;
	}
	void BallPen::PrintAllInformation()
	{
		Pen::PrintAllInformation();
		cout << "��������������: " << avto << endl;
		cout << "����� �����: " << length << endl;
	}
	void BallPen::SetAvto(string Avto)
	{
		avto = Avto;
	}
	string BallPen::GetAvto() const
	{
		return avto;
	}
	void BallPen::SetLength(int Length)
	{
		length = Length;
	}
	int BallPen::GetLength() const
	{
		return length;
	}
	BallPen& BallPen::operator=(const BallPen bpen)
	{
		Pen::operator=(bpen);
		avto = bpen.avto;
		length = bpen.length;
	}
	void BallPen::readFromFile(char*path)
	{
		Pen::enterFromKeyboard();
		ifstream file(path);
		string tmp;
		getline(file, tmp);
		avto = tmp;
		file >> length;
		file.close();
	}
	void BallPen::writeToFile(string path)
	{
		Pen::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "��������������: ";
		file << avto << endl;
		file << "����� �����: ";
		file << length << endl;
		file.close();
	}
	void BallPen::enterFromKeyboard()
	{
		Pen::enterFromKeyboard();
		cout << "��������������: ";
		cin >> avto;
		cout << "����� �����: ";
		cin >> length;
	}
