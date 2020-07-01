#include "Matrix.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
template<class T>
Matrix<T>::Matrix(int Size) {
	size = Size;
	Array = new T *[size];
	for (int i = 0; i < size; i++)
	{
		Array[i] = new T[size];
	}
}
template<class T>
Matrix<T>::Matrix(const Matrix<T>& other) {
	size = other.size;
	Array = new T *[size];
	for (int i = 0; i < size; i++)
	{
		Array[i] = new T[size];
	}
}
template<class T>
void Matrix<T>::Push(T element, int i, int j)
{
	Array[i][j] = element;
	cout << endl;
}
template<class T>
T& Matrix<T>::operator()(int n, int n2) {
	if (n < 0 || n > size - 1 || n2 < 0 || n2 > size - 1) throw Exception("Произошёл выход за пределы массива!");
	return Array[n][n2];
}
template<class T>
void Matrix<T>::Clear() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			Array[i][j] = 0;
		}
	}
}
template<class T>
void Matrix<T>::ComparableSort(bool(*cmp)(const T& a, const T& b)) {
	if (size == 0) throw Exception("Нечего сортировать!");
	T temp;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				for (int g = 0; g < size; g++)
				{
					if (SortByPrice(Array[i][j], Array[k][g]))
					{
						temp = Array[i][j];
						Array[i][j] = Array[k][g];
						Array[k][g] = temp;
					}
				}
			}
		}
	}
	cout << "Сортировка завершена!" << endl;
}
template <class T> template<class C>
T* Matrix<T>::Search(C value, bool(*finder)(C value, const T& stat)) {
	if (size == 0)throw Exception("Нечего искать!");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (FindByName(value, Array[i][j])) return &Array[i][j];
		}
	}
	return nullptr;
}
template <class T> template<class C>
Matrix<T>* Matrix<T>::Search(C min, C max, bool(*finder)(C min, C max, const T& stat)) {
	if (size == 0)throw Exception("Нечего искать!");
	Matrix<T>* temporary = new Matrix<T>(size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (FinderAllByPrice(min, max, Array[i][j])) temporary->Push((Array[i][j]), i, j);
		}
	}
	if (temporary->size == 0) return nullptr;
	return temporary;
}