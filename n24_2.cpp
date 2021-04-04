#include<iostream>
#include<fstream>

/*Текстовый файл состоит не более чем из 106 символов X, Y и Z.
Определите длину самой длинной последовательности, состоящей из символов X. Хотя бы один символ X находится в последовательности.

Для выполнения этого задания следует написать программу.
Ниже приведён файл, который необходимо обработать с помощью данного алгоритма.*/

using namespace std;

int main() {
	string path = "24_demo.txt";

	string let;

	ifstream fin(path);

	fin >> let;

	if (!fin) {
		cout << "no file";
	}

	int count = 0;
	int max = 0;

	for (int i = 0; i < let.length(); i++) {
		
		if (let[i] == 'X') {
			count++;
			if (count > max) max = count;
		}
		else {
			count = 0;
		}
	}

	cout << max;

}
