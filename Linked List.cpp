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

void LinkedList::AddNode(int addData){

    //allocates memory for new node and create n1 pointer
    nodePtr n1 = new node1;

    //access data and next using arrow pointer
    n1->data = addData;
    n1->next = NULL;

    //checks if LL is may laman or wala
    //if meron, curr is set to head, else yung n1 is set to head
    if(head != NULL){

        curr = head;

        //traverses thru LL hanggat makarating sa dulo ng LL
        while(curr->next != NULL){

            //sets new pointer and points it to next node;
            curr = curr->next;
        }

        //sets end node to the values of n1;
        curr->next = n1;

    }else{

        head = n1;
    }
}

void LinkedList::DeleteNode(int delData){

    //cretes a pointer named delPtr and sets it to null
    nodePtr delPtr = NULL;

    //initializes curr, temp pointers to head pointer
    temp=head;
    curr=head;

    //traverses thru the LL and checks if data to be
    //deleted is present in the LL
    while(curr->next != NULL && curr->data != delData){

        //moves pointer ahead
        temp = curr;
        curr=curr->next;
    }


    if(curr == NULL){

        //checks if curr pointer is null, means dulo na ng list
        cout << delData << " wala sa list\n";

    }else if(curr == head){

        //if yung idedelete is yung head, iuusog mo
        //pointer ng head sa next node
        head = head->next;

    }else{

        //if we need to delete a node in the middle of the LL
        // we need to patch things up
        //so the curr pointer is now pointed to curr->next
        //and the temp->next now points to the curr;
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
    }

    delete delPtr;
}

//search for data in LL
void LinkedList::SearchNode(float searchData){

    //initializes curr pointer to head of LL
    curr = head;

    //traverses thru LL while checking for the desired data
    while(curr != NULL && curr->data != searchData){

        //points curr to next node
        curr=curr->next;
    }

    //checks if curr is at the end of LL which points to NULL
    if(curr == NULL){

        cout << searchData << " wala sa list\n";
    }else{

        //element is within the LL and prints out its memory address
        cout << searchData << " is in node " << curr << endl;
    }
}


//Prints LL by traversing thru the list
void LinkedList::PrintList(){

    //initializes curr pointer to the head of LL
    curr = head;

    while(curr != NULL){

        cout << curr->data << " memory address " << curr << " \n";
        curr = curr->next; //moves pointer ahead of the next node
    }

    cout << endl;
}
