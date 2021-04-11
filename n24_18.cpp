#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>


/* 18 Текстовый файл содержит только заглавные буквы латинского алфавита (ABC…Z).
Определите символ, который чаще всего встречается в файле сразу после буквы A.

Например, в тексте ABCAABADDD после буквы A два раза стоит B, по одному разу — A и D. Для этого текста ответом будет B.

Для выполнения этого задания следует написать программу. Ниже приведён файл, который необходимо обработать с помощью данного алгоритма..
*/

using namespace std;

int main() {
    ifstream fin("24.txt");

    string let;

    fin >> let;

    vector<int> data(26);

    for (int i = 1; i < let.length(); i++) {
        if (let[i - 1] == 'A') {
            int index = static_cast<int>(let[i]) - 65;
            data[index]++;
       }
    }


    int max = 0;
    int index = 0;
    for (int i = 0; i < 26; i++) {
        if (data[i] > max) {
            max = data[i];
            index = i;
        }
   }

    cout << static_cast<char>(index + 65);
     
}
