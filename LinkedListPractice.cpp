#include "LinkedListPractice.h"
#include <iostream>
using namespace std;

LinkedListPractice::LinkedListPractice():head(nullptr), curr(nullptr), temp(nullptr)
{
    //initializes pointer head,curr, and temp to null
}

void LinkedListPractice::AddNode(int addData){

    //memory allocation
    nodePtr n1 = new node;

    //sets data and next thru an arrow pointer
    n1->data = addData;
    n1->next = nullptr;

    if(head != nullptr){

        //may laman ang list
        //set pointer curr to head;
        curr = head;

        //traverse thru the LL until to the end that points to null
        while(curr->next != nullptr){

            //moves curr pointer to the next node
            curr = curr->next;
        }

        //once end is reached
        curr->next = n1;

    }else{

        //sets head to n1 pointer
        head = n1;
    }
}


void LinkedListPractice::DeleteNode(int deleteNode){

    if(head != nullptr){

        //make a delete pointer that will hold the node
        nodePtr delPtr = nullptr;

        //initialize curr and temp pointer to head
        curr = head;
        temp = head;

        //traverse thru LL until end and nullptr is reached
        //or deleteNode is searched already.

        while(curr->next != nullptr && curr->data != deleteNode){

            //moves pointer one step ahead
            temp = curr;
            curr = curr->next;
        }

        if(curr == nullptr){

            cout << deleteNode << " is not in the list\n";

        }else if(curr == head){

            //if deleteNode is on the head
            head = head->next;

        }else{

            delPtr = curr;
            curr = curr->next;
            temp->next = curr;
        }

        //memory de-allocation
        delete delPtr;

    }else{

        cout << "Linked List is empty\n";
    }


}

void LinkedListPractice::SearchNode(int searchNode){

    if(head != nullptr){

        curr = head;

        while(curr->next != nullptr && curr->data != searchNode){

            curr = curr->next;
        }

            if(curr == nullptr){

                cout << searchNode << " is not on the list\n";
            }else{

                cout << searchNode << " is at " << curr;
            }

    }else{

        cout << "List is empty!\n";
    }
}

void LinkedListPractice::PrintList(){

     if(head != nullptr){

        curr = head;

        cout << "Data" << "\t" << "Memory address\n";

        while(curr != nullptr){

            cout << curr->data<< "\t" << curr << endl;
            curr = curr->next;
        }

    }else{

        cout << "List is empty!\n";
    }
}
