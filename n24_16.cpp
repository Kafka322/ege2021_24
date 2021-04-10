#include<iostream>
#include<fstream>

/* 16 Текстовый файл содержит строки различной длины. Общий объём файла не превышает 1 Мбайт. 
Строки содержат только заглавные буквы латинского алфавита (ABC…Z).
Определите количество строк, в которых буква E встречается чаще, чем буква A.

Для выполнения этого задания следует написать программу. Ниже приведён файл, который необходимо обработать с помощью данного алгоритма.
*/

using namespace std;

int main() {
    ifstream fin("inf_22_10_20_24.txt");

    string let;
   

    int countE = 0;
    int countA = 0;

    int countstr = 0;
    while (fin) {
        fin >> let;

        for (int i = 0; i < let.length(); i++) {
            if (let[i] == 'E') {
                countE++;
            }
            else if (let[i] == 'A') {
                countA++;
            }
        }
        if (countE > countA) countstr++;

        countE = 0;
        countA = 0;
    }

    cout << countstr;
    
}
