#include "arraysort.h"
#include <iostream>




//prints out unsorted array then runs algorithm and prints sorted array
int main() {
    int arrayWeAreWorkingWith[ARRAYSIZE] = {2,3,5,4,1,6,8,10,9,7};
    arraySort::printArray(arrayWeAreWorkingWith);
    arraySort::sort(arrayWeAreWorkingWith);
    arraySort::printArray(arrayWeAreWorkingWith);
    return 0;
}