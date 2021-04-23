#ifndef LINKED LIST_H
#define LINKED LIST_H

//Singly Linked List
class LinkedList{

     private:
        typedef struct node1{

            int data;
            node1* next;

        }*nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;

    public:
        LinkedList();
        void AddNode(int addData);
        void DeleteNode(int delData);
        void SearchNode(float searchData);
        void PrintList();

};

#endif // LINKED LIST_H
