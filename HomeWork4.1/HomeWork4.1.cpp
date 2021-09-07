#include <iostream>
#include <string>
#include<algorithm>
#include <vector>

using namespace std;

bool Pred_Ab(int valueA,int valueB) //Предикат для сортировки от большего к меньшему
{
	return valueA > valueB;
}
bool Pred_aB(int valueA, int valueB) //Предикат для сортировки от меньшего к большему
{
	return valueB > valueA;
}

int main()
{
	vector<int> MyVector;	//Создание и заполнение вектора
	MyVector.reserve(10);   //Резервирование
	MyVector.push_back(3);
	MyVector.push_back(8);
	MyVector.push_back(1);
	cout << "=======================================================" << endl;
	cout << "My vector : ";
	for (int value : MyVector)	
	{
		cout << value << "  ";
	}

	cout << "\n=============================Add ' 2 ' and ' 4 '======="<<endl;

	MyVector.insert(MyVector.begin(), 2);	//Добавление элемента в начало вектора со значением = 2
	MyVector.insert(MyVector.end(), 4);		//Добавление элемента в конец вектора со значением = 4
	cout << "Mod vector : ";
	for (int value : MyVector)
	{
		cout << value << "  ";
	}

	cout << "\n============================Delete ' 2 ' and ' 4 '=====" << endl;
	
	MyVector.pop_back();					//Удалние элемента,находящегося в конце вектора
	auto iter = MyVector.begin();			//Установка итератора на начало вектора,с последующим удалением элемента
	MyVector.erase(iter);
	cout << "Mod vector : ";
	for (int value : MyVector)
	{
		cout << value << "  ";
	}

	cout << "\n==================================SORT=================" << endl;

	sort(MyVector.begin(), MyVector.end(), Pred_Ab);		//Сортировка от начала до конца вектора,при помощи предиката от *Большего к меньшему*
	cout << "Sort big to small : ";
	for (int value : MyVector)
	{
		cout << value << " ";
	}
	cout << endl;
	sort(MyVector.begin(), MyVector.end(), Pred_aB);		//Сортировка от начала до конца вектора,при помощи предиката от *Меньшего к большему*
	cout << "Sort small to big : ";
	for (int value : MyVector)
	{
		cout << value << " ";
	}
	
	cout << "\n==================================Clear================" << endl;	

	MyVector.clear();										//Вызов функции удаления значений элементов вектора

	for (int value : MyVector)
	{
		cout << value << endl;
	}

	return 0;
}