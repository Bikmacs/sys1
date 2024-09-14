
#include <iostream>

int main()
{
	setlocale(0, "rus");

	int a[30] = {};

	for (int i = 0; i < 30; i++)
	{
		a[i] = rand(); 
		std::cout << a[i] << std::endl;
	}
	
	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 29; j++)
		{
			if (a[j] > a[j + 1])
			{
				int b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}

	std::cout << " Массив: ";

	for (int i = 0; i < 29; i++)
	{
		std::cout << a[i] << " ";
	}

	std::cout << " Медианна массива: ";

	if (29 % 2 == 1)
	{
		std::cout << a[29 / 2] << std::endl;
	}
	else {
		std::cout << (a[29 / 2 - 1] + a[29 / 2]) / 2 << std::endl;
	}


	
}




