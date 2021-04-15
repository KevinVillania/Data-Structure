//TODO- fix random numbers, refactor driving code to become more intuitive

#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include "Linked List.h"
using namespace std;

class Vector{

    private:
        vector<int> intVector;
    public:
        void inputVector(int number); //
        void printVector(); //
        void searchVector(int num);
        void insertVector(int place, int num);
        void deleteVector(int num);
};

void Vector::inputVector(int number){

    for(int i=1; i<=number; i++){

        intVector.push_back(i*5);
    }
}

void Vector::printVector(){

    vector<int>::iterator it = intVector.begin();

    for(it; it != intVector.end(); it++){

        cout << *it << " ";
    }

    cout << endl;
}

void Vector::searchVector(int num){

    vector<int>::iterator it = intVector.begin();

    it = find(intVector.begin(), intVector.end(), num);

        if(it != intVector.end()){

            cout << num << " is on index " << it-intVector.begin();
            //this code works because vector are stored contiguous in memory
        }else{

            cout << num << " is not on the set of numbers\n";
        }
}

void Vector::insertVector(int place,int num){

    intVector.insert(intVector.begin()+place, num);
}

void Vector::deleteVector(int position){

    vector<int>::iterator it = intVector.begin();
    intVector.erase(intVector.begin()+position);
}


int main(){

    //instance of class Vector
    Vector v1;
    LinkedList LL;

    v1.inputVector(25);
    v1.printVector();

    v1.insertVector(2, 69);
    v1.printVector();

    v1.deleteVector(2);
    v1.printVector();

    v1.searchVector(45);
}
