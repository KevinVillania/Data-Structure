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
#include "LinkedListPractice.h"
using namespace std;

//driving code
int main(){

    LinkedListPractice LL;

    for(int i=0; i<=25; i++){

        LL.AddNode(i);
    }

    LL.PrintList();


}
