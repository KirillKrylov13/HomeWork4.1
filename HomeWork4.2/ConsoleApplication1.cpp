#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> MyIntVector{ 2,8,4,1,4,9,5,8,5,5 };
    sort(MyIntVector.begin(), MyIntVector.end());       //Сортировка от наименьшего к большему . ИТОГ : 1 2 4 4 5 5 5 8 8 9
    vector<int> :: iterator iter = MyIntVector.begin(); //Объявление итератора и установка его на начальный элемент вектора
                            
    size_t m=1;                                         //Переменная счетчик,для подсчета различных чисел
        do
        {  
            if (*iter != *(iter + 1))
            {
                m++;            
            }
            iter++; 
        } while (iter != MyIntVector.end()-1);
    cout << "\nNumbers: "<<m;                           //Вывод кол-ва различных чисел,находящихся в векторе
    return 0;
}