#include<iostream>
#include<fstream>
#include<vector>

/*Текстовый файл состоит не более чем из 106 символов X, Y и Z. 
Определите максимальную длину цепочки вида XYZXYZXYZ... (составленной из фрагментов XYZ, последний фрагмент может быть неполным).

Для выполнения этого задания следует написать программу. Ниже приведён файл, который необходимо обработать с помощью данного алгоритма.*/

using namespace std;

int main() {

	string path = "24_demoW.txt";
	ifstream fin(path);

	string let;
	fin >> let;
	
	vector<char> data(let.length() + 2);
	
	for (int i = 0; i < let.length(); i++) {
		data[i] = let[i];
	}

	int count = 0;
	int max = 0;
	for (int i = 0; i <= let.length() + 1; i++) {

		if (data[i] == 'X') {
			if (data[i + 1] == NULL) {
				count++;
				if (count > max) max = count;
				break;
			}
			if ((data[i + 1] == 'Y' and (data[i + 2] == 'Z' or data[i + 2] == NULL))) {
				count++;
				i += 2;
				if (count > max) max = count;
				
			}
		}
		else {
			
			count = 0;
		}
	}

	cout << max;
}
