#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

int main()
{
	
	srand(time(NULL));

	int secretnumber = rand() % 9+1;
	int num=0; 
	

	while (num != secretnumber)
	{
		cout << "Choose a number between 1 and 10 \n \n";
		cin >> num;
		if (num > secretnumber)
		{
			cout << "The secret number is lower \n";
		}

		else if (num < secretnumber)
		{
			cout << "The secret number is higher \n";
		}
		else if (num == secretnumber)
		{
			cout << "Its the same number... Bye \n";
		}
	}
	return 0;
}

