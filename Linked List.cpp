
#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include "Linked List.h"
using namespace std;

LinkedList::LinkedList(): head(NULL), curr(NULL), temp(NULL)
{
    //initializes head, curr, temp pointers to NULL
}

void LinkedList::addNode(int addData){

    nodePtr n1 = new node;

    n1->data = addData;
    n1->next = NULL;

    if(head != NULL){
        //may laman ang LL
        curr = head;

        while(curr != NULL){

            curr = curr->next;
        }
        curr = n1;
    }else{

        head = n1;
    }
}

void LinkedList::deleteNode(int delData){

    nodePtr delPtr = NULL;

    temp=head;
    curr=head;

    while(curr->next != NULL && curr->data != delData){

        temp = curr;
        curr=curr->next;
    }

    if(curr == NULL){

        cout << delData << " wala sa list\n";
    }else if(curr == head){

        head = head->next;
    }else{

        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
    }

    delete delPtr;
}

void LinkedList::printList(){

    curr = head;

    while(curr != NULL){

        cout << curr->next << " ";
        curr = curr->next;
    }
}
