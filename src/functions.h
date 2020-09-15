//
// Created by amaru on 5/14/20.
//

#ifndef TAREA4_SORTING_FUNCTIONS_H
#define TAREA4_SORTING_FUNCTIONS_H

#include "lib.h"

//Sorting algorithms
template <typename T>
void bubble_sort(vector<T>&);

///////////////////////

template <typename T>
void shellSort(vector<T> &vector);

//////////////////////
//Auxiliary functions
template<typename T>
void random_vector(T&, int size);

template <typename T>
void print_vector(vector<T> vec);

template<typename T>
void my_swap(T*, T*);

#endif //TAREA4_SORTING_FUNCTIONS_H
