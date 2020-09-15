//
// Created by amaru on 5/14/20.
//
#include "functions.h"

template<typename T>
void bubble_sort(vector<T> &vector){
    auto n = vector.size();
    bool swapped = true;
    T* val1;
    T* val2;
    auto x = -1;
    while(swapped){
        swapped = false;
        x += 1;
        for (int i = 1; i < n-x; ++i) {
            if (vector[i-1] > vector[i]){
                val1 = &vector[i-1];
                val2 = &vector[i];
                my_swap(val1, val2);
                swapped = true;
            }
        }
    }
}

template<typename T>
void shellSort(vector<T> &vector)
{
    for (int gap = (vector.size())/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i <  vector.size(); i += 1)
        {
            int temp = vector[i];
            int j;
            for (j = i; j >= gap && vector[j - gap] > temp; j -= gap)
                vector[j] = vector[j - gap];
            vector[j] = temp;
        }
    }
}


void print_vector(vector<int> vec){
    for(auto &item:vec){
        cout << item << ", ";
    }
    cout << "\b\b"<< endl;
}

template<typename T>
void my_swap(T*a, T*b){
    T* temp = new T;
    *temp = *a;
    *a = *b;
    *b = *temp;
}

template<typename T>
void random_vector(T& myVector, int size){ //2^size

    srand((unsigned)time(NULL));

    auto a = pow(10,size);

    for (int i =0; i < a; i++) {
        int b = rand() % int(pow(10,6)) + 1; //random number between 1 and 100
        myVector.push_back(b);
    }
}