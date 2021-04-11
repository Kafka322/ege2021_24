#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main() {
	ifstream fin("24tm.txt");

	string mystr;
	string let;
	int min = 100000;
	while (fin) {
		
		fin >> let;
	
		int count = 0;
		for (int i = 0; i < let.length() ; i++) {
			if (let[i] == 'G') {
				count++;
				
			}
		} 		
		if (min > count) {
			min = count;
			mystr = let;
		}		
	}

	vector<int> data(26);
	
	for (int i = 0; i < mystr.length(); i++) {
		int index = static_cast<int>(mystr[i]) - 65;

		data[index]++;
	}
	
	int max = 0;
	int maxindex = 0;
	for (int i = 0; i < 26; i++) {
		if (data[i] >= max) {
			max = data[i];
			maxindex = i;
		}
	}

	cout << static_cast<char>(maxindex + 65);

	

}
