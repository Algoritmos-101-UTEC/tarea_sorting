//
// Created by amaru on 5/14/20.
//
#include "functions.h"

template<typename T>
void bubble_sort(vector<T> &vector){
    auto n = vector.size();
    bool swapped = true;

    auto x = -1;
    while(swapped){
        swapped = false;
        x += 1;
        for (int i = 1; i < n-x; ++i) {
            if (vector[i-1] > vector[i]){
                swap(vector[i-1], vector[i]);
                swapped = true;
            }
        }
    }
}

template<typename T>
void selection_sort(vector<T> &vector) {

    for (auto i = 0; i < vector.size(); ++i) {
        auto minimum = i;

        for (auto j = i+1; j < vector.size(); ++j) {
            if (vector[j] < vector[minimum]){
                minimum = j;
            }
        }

        swap(vector[minimum],vector[i]);
    }
}

template<typename T>
void insertion_sort(vector<T> &vector) {

    for (int i = 0; i < vector.size(); ++i) {
        auto cursor = vector[i];
        auto pos = i;

        while( (pos > 0) && (vector[pos-1]> cursor)){
            vector[pos] = vector[pos-1];
            pos = pos - 1;
        }

        vector[pos] = cursor;
    }

}

template<typename T>
vector<T> merge_sort(vector<T> &Vector) {
    if(Vector.size() <= 1){
        return Vector;
    }

    auto mid = Vector.size()/2;

    vector<T> left_side(Vector.begin(), Vector.begin() + Vector.size()/2);// change to mid
    vector<T> right_side(Vector.begin() + Vector.size()/2, Vector.end());
    //Merge sort in both halves
    auto left_sorted = merge_sort(left_side);
    auto right_sorted = merge_sort(right_side);
    auto copy = Vector;

    return merge(left_sorted, right_sorted, copy);
}

template<typename T>
vector<T> merge(vector<T>&left , vector<T>&right, vector<T>&merged){

    int left_cursor = 0;
    int right_cursor = 0;

    while((left_cursor < left.size())&&(right_cursor < right.size())){

        if (left[left_cursor] <= right[right_cursor]){
            merged[left_cursor+right_cursor] = left[left_cursor];
            left_cursor += 1;
        } else{
            merged[left_cursor + right_cursor] = right[right_cursor];
            right_cursor += 1;
        }
    }
//Fixed Bug
    for (int i = left_cursor; i < left.size(); ++i) {
        merged[i + right_cursor] = left[i];
    }

    for (int i = right_cursor; i < right.size(); ++i) {
        merged[left_cursor + i] = right[i];
    }

    return merged;
}


void print_vector(vector<int> vec){
    for(auto &item:vec){
        cout << item << ", ";
    }
    cout << "\b\b"<< endl;
}

void swap(int &a, int&b){
    auto temp = a;
    a = b;
    b = temp;
}

template<typename T>
void random_vector(T& myVector, int size){ //2^size

    srand((unsigned)time(NULL));

    auto a = pow(2,size);

    for (int i =0; i < a; i++) {
        int b = rand() % int(pow(2,20)) + 1; //random number between 1 and 100
        myVector.push_back(b);
    }
}

template<typename T>
int partition(vector<T> & Vector, int begin, int end) {

    int pivot = Vector[begin];
    int i = begin;

    for (int j = begin+1; j < end; ++j) {
        if(Vector[j] <= pivot){
            i++;
            swap(Vector[i],Vector[j]);
        }
    }
    swap(Vector[i],Vector[begin]);
    return i;
}

template<typename T>
void quick_sort(vector<T> &vec, int begin, int end) {
    int pivot_idx;
    if (begin < end){
        pivot_idx = partition(vec, begin, end);
        quick_sort(vec, begin, pivot_idx);
        quick_sort(vec, pivot_idx+1, end);
    }
}





