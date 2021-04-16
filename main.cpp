//TODO-refactor driving code to become more intuitive
//Add comments to become descriptive
//Put vector data structure to separate class
//implement linked list and vector
#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include "Linked List.h"
#include "Vector.h"
using namespace std;

//driving code
int main(){

    Vector v1;
    LinkedList LL;

    v1.InputVector(25);
    v1.PrintVector();

    cout << "search number: ";
    int num;
    cin >> num;

    v1.SearchVector(num);
}
