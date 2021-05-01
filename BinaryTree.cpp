#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include "BinaryTree.h"
using namespace std;

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

//Print BST
void BinaryTree::PrintInOrderPrivate(node* Ptr){

    //checks if may laman ang BST
    if(root != nullptr){

        //checks if may laman ang left side
        if(Ptr->left != nullptr){

            //recursive function to print
            //once mag null na yung Ptr->left lalabas na sa if statement
            PrintInOrderPrivate(Ptr->left);
        }

        cout << Ptr->key << " ";

        //last chinecheck yung right side ng Ptr and then traverse ulit starting sa Ptr->right
        if(Ptr->right != nullptr){

            PrintInOrderPrivate(Ptr->right);
        }
    }else{

        cout << "Binary tree is emptry\n";
    }
}

//ReturnNode in public
BinaryTree::node* BinaryTree::ReturnNode(int key){

    return ReturnNodePrivate(key, root);
}

//similar to search function
BinaryTree::node* BinaryTree::ReturnNodePrivate(int key, node* Ptr){

    //checks if Ptr points to something
    if(Ptr != nullptr){

        if(key == Ptr->key){

            return Ptr;
        }else{
            //checks if key is less/greater than the key
            if(key < Ptr->key){

                //goes left for less than
                return ReturnNodePrivate(key, Ptr->left);
            }
            if(key > Ptr->key){

                //goes right for greater than
                return ReturnNodePrivate(key, Ptr->right);
            }
        }

    }else{

        //Ptr points to nothing
        return nullptr;
    }
}

