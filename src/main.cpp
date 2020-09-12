//
// Created by amaru on 5/14/20.
//

#include "lib.h"
#include "functions.h"
#include "functions.cpp"

int main() {
//
//    ofstream myfile;
//    myfile.open ("../vectors.txt");
//    myfile << "Writing this to a file.\n";
//    myfile.close();
    cout << "\t Vectors from 2^1 to 2^20" << endl;
    auto n = 20;
    vector<vector<int>> vectors;

    for (int i = 1; i <= n; ++i) {
        vector<int> myvector;
        random_vector(myvector, i);
        vectors.push_back(myvector);
    }

    auto i = 1;

    cout << "\t=============== Quick Sort ===============" << endl;
    i = 1;
    for (auto &item:vectors) {
        //Create a new vector to preserve the disorder for next uses
        auto temp_vec = item;
        auto start = chrono::high_resolution_clock::now();
        quick_sort(temp_vec, 0, temp_vec.size()-1);
        // print_vector(temp_vec);
        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Vector size 2^" << i << " sort duration is " << duration.count() << " microseconds" << endl;
        ++i;
    }


    cout << "\t=============== Merge Sort ===============" << endl;
    i = 1;
    for (auto &item:vectors) {
        //Create a new vector to preserve the disorder for next uses
        auto temp_vec = item;
        auto start = chrono::high_resolution_clock::now();
        auto res = merge_sort(temp_vec);
      //  print_vector(res);
        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Vector size 2^" << i << " sort duration is " << duration.count() << " microseconds" << endl;
        ++i;
    }

    cout << "\t=============== Selection Sort ===============" << endl;
    i = 1;
    for (auto &item:vectors) {
        //Create a new vector to preserve the disorder for next uses
        auto temp_vec = item;
        auto start = chrono::high_resolution_clock::now();
        selection_sort(temp_vec);
        //print_vector(temp_vec);
        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Vector size 2^" << i << " sort duration is " << duration.count() << " microseconds" << endl;
        ++i;
    }

    cout << "\t=============== Insertion Sort ===============" << endl;
    i = 1;
    for (auto &item:vectors) {
        //Create a new vector to preserve the disorder for next uses
        auto temp_vec = item;
        auto start = chrono::high_resolution_clock::now();
        insertion_sort(temp_vec);
        //   print_vector(temp_vec);
        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Vector size 2^" << i << " sort duration is " << duration.count() << " microseconds" << endl;
        ++i;
    }

    i = 1;
    cout << "\t=============== Bubble Sort ===============" << endl;
    for (auto &item:vectors) {
        //Create a new vector to preserve the disorder for next uses
        auto temp_vec = item;
        auto start = chrono::high_resolution_clock::now();
        bubble_sort(temp_vec);
        // print_vector(temp_vec);
        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Vector size 2^" << i << " sort duration is " << duration.count() << " microseconds" << endl;
        ++i;
    }

    return 0;
}