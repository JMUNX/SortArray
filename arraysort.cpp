#include "arraysort.h"
#include <iostream>


//sorts the array
void arraySort::sort(int array[ARRAYSIZE]){
	for (int i = 0; i < ARRAYSIZE - 1; i++) {
		//for every element. If the element is greater than swap that number.
		for (int j = i+1; j <= ARRAYSIZE - 1; j++) {
			if (array[i] > array[j]) {
				int temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
}

//Prints array
void arraySort::printArray(int array[ARRAYSIZE]) {
	for (int i = 0; i <= ARRAYSIZE - 1; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}