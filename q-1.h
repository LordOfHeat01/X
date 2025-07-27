// random_array.h
#ifndef RANDOM_ARRAY_H
#define RANDOM_ARRAY_H

#include <iostream>
#include <cstdlib>
#include <ctime>

int* generateRandomArray(int n) {
    int* arr = new int[n];
    srand(static_cast<unsigned int>(time(0)));  // seed the random number generator

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // generate a random number between 0 and 99
    }

    return arr;
}

#endif  // RANDOM_ARRAY_H
