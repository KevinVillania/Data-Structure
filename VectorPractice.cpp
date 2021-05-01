#include "VectorPractice.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
using namespace std;

VectorPractice::VectorPractice(int number)
{
    InputNumber(number);
}

//fill vector with numbers ranging 1-100
void VectorPractice::InputNumber(int number){

    srand(time(nullptr));
    for(int i=0; i<number; i++){

        numVector.push_back(rand() % 100);
    }
}

//print function
void VectorPractice::PrintNumber(){

    /*
    //using size() and index method
    for(int i=0; i<numVector.size(); i++){

        cout << numVector[i] << " ";
    }*/

    //using iterator
    vector<int>::iterator it = numVector.begin();

    for(it; it != numVector.end(); it++){

        cout << *it << " ";
    }
}

//search number using find()
void VectorPractice::SearchNumber(int number){

    vector<int>::iterator it = numVector.begin();

    it = find(numVector.begin(), numVector.end(), number);

    if(it == numVector.end()){

        cout << "number not on the list\n";

    }
    else{

        cout << "number found at " << it-numVector.begin();
    }
}

//search number using index
int VectorPractice::SearchNumber2(int number){

    for(int i=0; i<numVector.size(); i++){

        if(numVector[i] == number){

            return i;
            break;
        }
    }

    return -1;
}

//Number search on array
int VectorPractice::SearchNumber3(int arr[], int numElements, int number){

    //loops through until the end of array comparing each number
    for(int i=0; i < numElements; i++){

        if(number == arr[i]){

            return i;
            break;
        }
    }

    return -1;
}
