#include<iostream>
#include<fstream>

/*Текстовый файл состоит не более чем из 106 символов A, B и C.
Определите максимальное количество идущих подряд символов, среди которых каждые два соседних различны.

Для выполнения этого задания следует написать программу. 
Ниже приведён файл, который необходимо обработать с помощью данного алгоритма.*/

using namespace std;

int main() {
	ifstream fin("zadanie24_1.txt");

	string let;

	fin >> let;

	int count = 1;
	int max = 0;
	for (int i = 1; i < let.length(); i++) {
		if (let[i] != let[i - 1]) {
			count++; 
			if (count > max) max = count;
		}
		else {
			count = 1;
		}
	}

	cout << max;
}
