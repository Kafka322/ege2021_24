#include<iostream>
#include<fstream>

/*Текстовый файл состоит не более чем из 106 символов L, D и R. 
Определите максимальную длину цепочки вида LDRLDRLDR... (составленной из фрагментов LDR, последний фрагмент может быть неполным).

Для выполнения этого задания следует написать программу. Ниже приведён файл, который необходимо обработать с помощью данного алгоритма.
*/

/*begin
  var s: string;
  egin
  var s: string;
  var i, count, maxCount: integer;
  assign(input, '24.txt');
  readln(s);
  count:=0;
  maxCount:=0;
  for i:=1 to Length(s) do
    if ((s[i]='A') and (count mod 2=0)) or 
       ((s[i]='B') and (count mod 2=1)) then  begin  
      count := count+1;
      if count > maxCount then
        maxCount := count;
    end
    else if s[i]='A' then count:=1 else count:=0;
    writeln(maxCount);
end.
 */

using namespace std;

int main() {
    ifstream fin("zadanie24_2.txt");

    string let;

    fin >> let;

    int count = 0;
    int max = 0;
    for (int i = 0; i < let.length(); i++) {
        if ((let[i] == 'L' and count % 3 == 0) or
            (let[i] == 'D' and count % 3 == 1) or
            (let[i] == 'R' and count % 3 == 2)) {
            count++;
            if (count > max) max = count;
        }
        else if (let[i] == 'L') count = 1; else count = 0;
    }
    cout << max;
}
