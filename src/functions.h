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
void selection_sort(vector<T>&);

///////////////////////

template <typename T>
void insertion_sort(vector<T>&);

///////////////////////

template <typename T>
vector<T> merge_sort(vector<T>&);

template<typename T>
vector<T> merge(vector<T>&left , vector<T>&right, vector<T>&merged);

///////////////////////

template <typename T>
void quick_sort(vector<T>& Vector, int begin, int end);

template <typename T>
int partition(vector<T>&, int, int);

///////////////////////
//Auxiliary functions
template<typename T>
void random_vector(T&, int size);

template <typename T>
void print_vector(vector<T> vec);
void swap(int&, int&);

#endif //TAREA4_SORTING_FUNCTIONS_H
