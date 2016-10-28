#include "function.h"
#include <time.h>

enum Menu
{
	Exit = 0,
	RandomWillArray,
	PrintArray,
	SkanMaxInArray,
	SkanMinInArray,
	SortArray,
	EditArray
};

void main()
{
	Menu printMenu;
	int menu = 0;
	int const sizeArray = 10;
	Type* arr = new Type[sizeArray];
	arr = randomWillArray(arr, sizeArray);

	do
	{
		std::cout << "Random will array = 1\nPrint array = 2\nSkan max in array = 3\nSkan min in array = 4\n" 
			"Sort array = 5\nEdit array = 6\nexit = 0" << std::endl << "enter: " << std::endl;
		std::cin >> menu;
		switch (menu)
		{
		case Exit: break; 
		case RandomWillArray: arr = randomWillArray(arr, sizeArray);
			break;
		case PrintArray: printArray(arr, sizeArray);
			break;
		case SkanMaxInArray: std::cout << "max in array = " << skanMaxInArray(arr, sizeArray) << std::endl;
			break;
		case SkanMinInArray: std::cout << "min in array = " << skanMinInArray(arr, sizeArray) << std::endl;
			break;
		case SortArray: arr = sortArray(arr, sizeArray);
			break;
		case EditArray: arr = editArray(arr, sizeArray);
			break;
		default: menu = 0;
			break;
		}
	} while (true);
}



/*4. в файле prog.cpp нужно : 
а) в функции main вызвать все функции через переозначеные( обобщенные ) имена из файла function.h ( show ( )) 
 */

/*б) определить константу, которая указывает какой тип данных будет использоваться.
Например INTEGER - целые данные, CHAR - символьные DOUBLE - настоящие. (# define INTEGER)
Имя функциям нужно давать так, чтобы они отвечали своей сути .
Например функция для вывода значений массива целых чисел на консоль - ShowArrayInt().
А, когда переопределяем функцию с помощью # define то нужно давать общее имя.
Например # define ShowArray ShowArrayInt

в б внес изменения чтоб автаматически получать тип с которым мы работаем, изменен на Type 
Type получает значение типа данных через "using" находится в "functuon.h" 
*/
