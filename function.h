#pragma once

#include <iostream>
#include <time.h>
//#define INTEGER			
#define CHAR	
//#define DOUBLE		

#ifdef DOUBLE
using Type = double;			//DOUBLE - настоящие
#else
#	ifdef CHAR
using Type = char;		//CHAR - символьные
#	else
using Type = int;			//INTEGER - целые данные
#	endif
#endif

Type* randomWillArray(Type* arr, int const size);
void printArray(Type * arr, int const size);
Type skanMaxInArray(Type* arr, int const size);
Type skanMinInArray(Type * arr, int const size);
Type* sortArray(Type * arr, int const size);
Type* editArray(Type * arr, int const size);