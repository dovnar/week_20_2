#include "function.h"

using Char = char;
//а) функцию для заполнения массива случайными значениями ; 
Type* randomWillArray(Type * arr, int const size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		if (typeid(Type).name() == typeid(Char).name())
		{
			arr[i] = rand() % 48 + 208;
		}
		else
		{
			arr[i] = rand() % -100000 + 200000;
		}
	}
	return arr;
}

//б) функцию для вывода значений массива на консоль;
void printArray(Type * arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}

//в) функцию для поиска минимального элемента; 
Type skanMaxInArray(Type * arr, int const size)
{
	Type max = -1000000;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

//г) функцию для поиска максимального элемента;
Type skanMinInArray(Type * arr, int const size)
{
	Type min = 1000000;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

//д) функцию для сортировки;
Type* sortArray(Type * arr, int const size)
{
	int sort;
	std:: cout << "choose sorting type :\non increase = 0\non decrease = 1\nenter: ";
	std::cin >> sort;
	for (int i = 0; i <= size/2; i++)
	{
		for (int j = 0; j < size - i-1; j++)
		{
			if (arr[j] > arr[j + 1] && sort == 0 ||
				arr[j] < arr[j + 1] && sort == 1)
			{
				Type temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

//е) функцию для редактирования значения массива. 
Type * editArray(Type * arr, int const size)
{
	int edit;
	for (int i = 0; i < size; i++)
	{
		std::cout << "to edit this value: " << arr[i] << std::endl << "Yes = 1\nNo = 2\nexit from editing = 0\nenter: ";
		std::cin >> edit;
		if (edit == 1)
		{
			std::cout << arr[i] << "to replace on : ";
			std::cin >> arr[i];
		}
		else if (edit == 0)
		{
			return arr;
		}
	}
	return arr;
}




/*2. в файле function.cpp необходимо написать следующие функции для работы с массивом данных: 
Данные функции необходимо написать для работы с массивом целых, 
действительных и символьных значений. (Для каждого типа написать отдельную функцию)*/