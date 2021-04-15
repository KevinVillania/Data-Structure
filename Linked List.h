#ifndef LINKED LIST_H
#define LINKED LIST_H

class LinkedList{
     private:

        struct node{

            int data;
            node* next;
        };

        typedef struct node* nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;

    public:
        LinkedList();
        void addNode(int addData);
        void deleteNode(int delData);
        void printList();


};

#endif // LINKED LIST_H
