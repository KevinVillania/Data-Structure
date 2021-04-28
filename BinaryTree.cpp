#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include "BinaryTree.h"

BinaryTree::BinaryTree(): root(nullptr)
{
    //ctor
}

BinaryTree::node* BinaryTree::CreateLeaf(int key){

    node* n1 = new node; //allocate memory using new node struct
    n1->key = key;
    n1->left = nullptr;
    n1->right = nullptr;

    return n1;
}

//function accessible at main.cpp. Only cares about the key value and not the root address
void BinaryTree::AddLeaf(int key){

    AddLeafPrivate(key, root);
}

//Recursive function that checks each node if it greater/less than the int key
void BinaryTree::AddLeafPrivate(int key, node* Ptr){

    //checks if root node is empty
    if(root == nullptr){

        //assigns root pointer to created leaf, root is a pointer
        root = CreateLeaf(key);
    }
    //checks if key goes to left side of the tree
    //Ptr->key is the parent node
    else if(key < Ptr->key){

        //checks if pointer to the left is empty or has another node
        if(Ptr->left != nullptr){

            //recursive function called to perform check again
            AddLeafPrivate(key, Ptr->left);
        }else{

            //once null is reached CreateLeaf function is called
            Ptr->left = CreateLeaf(key);
        }
    }
    //checks if key goes to right side of the tree
    //Ptr->key is the parent node
    else if(key > Ptr->key){

        //checks if pointer to the right is empty or has another node
        if(Ptr->right != nullptr){

            //recursive function called to perform check again
            AddLeafPrivate(key, Ptr->right);
        }else{

            Ptr->right = CreateLeaf(key);
        }
    }else{
        //if key is equal to Ptr->key
        std::cout << key << " key already exists\n";
    }
}

void BSTpractice::PrintInOrderPrivate(node* Ptr){

    if(root != nullptr){

        if(Ptr->left != nullptr){

            PrintInOrderPrivate(Ptr->left);
        }

        cout << Ptr->key << " ";

        if(Ptr->right != nullptr){

            PrintInOrderPrivate(Ptr->right);
        }
    }else{

        cout << "Binary tree is emptry\n";
    }
}
