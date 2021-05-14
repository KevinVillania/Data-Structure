#include "BSTPractice.h"
#include <iostream>
using namespace std;

BSTPractice::BSTPractice():root(nullptr)
{
    //ctor
}

BSTPractice::node* BSTPractice::CreateLeaf(int key){

    node* n1 = new node;

    n1->key = key;
    n1->left = nullptr;
    n1->right = nullptr;

    return n1;
}

void BSTPractice::AddLeaf(int key){

    AddLeafPrivate(key,root);
}

void BSTPractice::AddLeafPrivate(int key, node* Ptr){

    //if walang laman ang tree, ise-set natin yung root into first leaf
    if(root == nullptr){

        root = CreateLeaf(key);

    }else if(key > Ptr->key){

        //checks if key is greater than the parent key,
        //goes to the right if greater than
        if(Ptr->right != nullptr){

            //may kasunod pa yung leaf
            AddLeafPrivate(key, Ptr->right);
        }else{

            //sets Ptr->right to the returned pointer
            Ptr->right = CreateLeaf(key);
        }
    }else if(key < Ptr->key){

        //checks if key is less than the parent key,
        //goes to the left if less than
        if(Ptr->left != nullptr){

            //may kasunod pa yung leaf
            AddLeafPrivate(key, Ptr->left);
        }else{

            //sets Ptr->right to the returned pointer
            Ptr->left = CreateLeaf(key);
        }
    }else{

        cout << key << " is already in the list\n";
    }
}


//In Order Print function
void BSTPractice::PrintInOrder(){

    PrintInOrderPrivate(root);
}


void BSTPractice::PrintInOrderPrivate(node* Ptr){

    if(root != nullptr){

        if(Ptr->left != nullptr){

            PrintInOrderPrivate(Ptr->left);
        }

        cout << Ptr->key << " ";

        //papasok lang sa loop na ito once ubos na yung nasa left side
        if(Ptr->right != nullptr){

            PrintInOrderPrivate(Ptr->right);
        }


    }else{

        cout << "Tree is empty\n";
    }
}

//Returns node location
BSTPractice::node* BSTPractice::ReturnNode(int key){

    return ReturnNodePrivate(key,root);
}

BSTPractice::node* BSTPractice::ReturnNodePrivate(int key, node* Ptr){

    if(Ptr != nullptr){

        if(key == Ptr->key){

            return Ptr;
        }else{

            if(key > Ptr->key){

                return ReturnNodePrivate(key, Ptr->right);
            }
             if(key < Ptr->key){

                return ReturnNodePrivate(key, Ptr->left);
            }
        }

    }else{

        return nullptr;
    }
}



