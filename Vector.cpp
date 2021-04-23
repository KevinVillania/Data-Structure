#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include "Vector.h"
using namespace std;

//fill vector field w/ random number
void Vector::InputVector(int number){

    srand(time(NULL)); //initializes seed random number
    for(int i=1; i<=number; i++){

        intVector.push_back(rand() % 1000);
    }

    //sort(intVector.begin(),intVector.end());
}


//print
void Vector::PrintVector(){

    vector<int>::iterator it = intVector.begin();

    for(it; it != intVector.end(); it++){

        cout << *it << " ";
    }

    cout << endl;
}


//Search a number using find();
void Vector::SearchVector(int num){

    vector<int>::iterator it = intVector.begin();

    it = find(intVector.begin(), intVector.end(), num);

        if(it != intVector.end()){

            cout << num << " is on index " << it-intVector.begin() << endl;
            //this code works because vector are stored contiguous in memory
        }else{

            cout << num << " is not on the set of numbers\n";
        }
}


//Insert number using insert();
void Vector::InsertVector(int index,int num){

    intVector.insert(intVector.begin()+index, num);
}


//Delete a number using erasse();
void Vector::DeleteVector(int position){

    vector<int>::iterator it = intVector.begin();
    intVector.erase(it+position);
}

