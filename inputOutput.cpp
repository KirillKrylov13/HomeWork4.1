#include <iostream>
using namespace std;

int GetIntNumb()
{
	while (true)
	{
		cout << "Enter an integer value: ";
		int num;
		//cin >> num;

		if (!(cin>>num))
		{

			cout << "Error. Please enter an integer number!" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
		}

		else
		{
			return num;
		}
	}
}


int main()
{
	cout << "Your int number: " << GetIntNumb() << endl;
	return 0;
}

