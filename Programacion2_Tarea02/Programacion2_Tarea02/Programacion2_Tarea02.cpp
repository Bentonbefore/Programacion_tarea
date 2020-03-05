#include <iostream>

using std::cout;
using std::cin;

int main()

{
	int num = 0;
	cout << "Dame un numero entre 1 a 5000 \n";


	while (num < 5000)
	{
		cin >> num;
		for (int i = num; i > 0; i--) {

			if (num % i == 0)
			{
				cout << i << "\n";
			}

		}
	}
	return 0;
}