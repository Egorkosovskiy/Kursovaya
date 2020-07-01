#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
template<class T>
class Matrix {
public:
	Matrix(int size);
	Matrix(const Matrix<T>& other);
	void Push(T element, int i, int j);
	T& operator()(int n, int n2);
	void Clear();
	void ComparableSort(bool(*cmp)(const T& a, const T& b));
	template<class C>
	T* Search(C value, bool(*finder)(C value, const T& stat));
	template<class C>
	Matrix<T>* Search(C min, C max, bool(*finder)(C min, C max, const T& stat));
	template<class T>
	int Lenght(const T& stat) {
		return stat.size * stat.size;
	}
	friend ostream& operator<< (ostream& out, Matrix & m)
	{
		for (int i = 0; i < m.size; i++)
		{
			for (int j = 0; j < m.size; j++)
			{
				m(i, j)->PrintAllInformation();
			}
		}out << endl << endl;
		return out;
	}
	void Print() {
		if (size == 0)throw Exception("Нет объектов для вывода информации!");
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				Array[i][j]->PrintAllInformation();
			}
		}
	}
	int size;
private:

	T** Array;
};