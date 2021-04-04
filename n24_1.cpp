#include<iostream>
#include<fstream>

/*Текстовый файл состоит не более чем из 106 символов X, Y и Z. 
Определите максимальное количество идущих подряд символов, среди которых каждые два соседних различны.

Для выполнения этого задания следует написать программу. Ниже приведён файл, который необходимо обработать с помощью данного алгоритма.*/

using namespace std;

int main() {
	string path = "24_demo.txt";

	ifstream fin(path);

	string data;
	fin >> data;

	int count = 1;
	int max = 0;
	for (int i = 1; i < data.length(); i++) {
		if (data[i - 1] != data[i]) {
			count++;
			if (count > max) max = count;
		}
		else {
			count = 1;
		}
	}

	cout << max;
}
