#ifndef LINKEDLISTPRACTICE_H
#define LINKEDLISTPRACTICE_H


class LinkedListPractice
{
    private:
        typedef struct node{

            int data;
            node* next;

        }*nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;

    public:
        LinkedListPractice();
        void AddNode(int addData);
        void DeleteNode(int deleteNode);
        void SearchNode(int searchNode);
        void PrintList();


};

#endif // LINKEDLISTPRACTICE_H
