//TODO-refactor driving code to become more intuitive
//Continue Binary tree lesson
#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include "Linked List.h"
#include "Vector.h"
#include "BinaryTree.h"
#include "VectorPractice.h"
using namespace std;

//driving code
int main(){


    VectorPractice v1(100);
    /*
    v1.PrintNumber();

    int number = 0;

    cout << "Search number: ";
    cin >> number;

    //v1.SearchNumber(number);
    */
    int arr1[30] = {};

    //fills array with random numbers
    for(int i=0; i < 30; i++){

        arr1[i] = rand() % 100;
    }

    int numElements = sizeof(arr1) / sizeof(arr1[0]);

    sort(arr1, arr1+numElements);

    //print array
    for(auto a: arr1){

        cout << a << " ";
    }


    //using a function that returns integer
    int position = v1.SearchNumber3(arr1,numElements,5);

        if(position == -1){

            cout << "number does not exist\n";
        }else{

            cout << "Number found at index " << position;
        }
}
