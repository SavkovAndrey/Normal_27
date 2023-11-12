#include <iostream>

using namespace std;

//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));


	int x;

	cout << "Enter a number:  ";
	cin >> x;

	if (x % 2 == 0 || x % 3 == 0)
	{
		cout << "The number " << x << " - composite\n";
	}
	else
	{
		cout << "The number " << x << " - not composite\n";
	}




	system("pause");
	return 0;
}