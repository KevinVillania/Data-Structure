#include <iostream>
using namespace std;

class Tree{

    private:

        struct node{

            int data;
            node* left;
            node* right;

        };

        node* root;
        void AddLeafPrivate(int data, node* Ptr);
        void PrintInOrderPrivate(node* Ptr);
        node* ReturnNodePrivate(int data, node* Ptr);

    public:
        node* CreateLeaf(int data);
        void AddLeaf(int data);
        void PrintInOrder();
        node* ReturnNode(int data);

};

Tree::Tree():root(nullptr){

    //ctor
}


Tree::node* Tree::CreateLeaf(int data){

    node* n1 = new node; //memory allocation and creation of pointer n1

    n1->data = data;   // arrow operator is used to access inside a struct using n1 pointer
    n1->left = nullptr;
    n1->right = nullptr;

    return n1; 
}

void Tree::AddLeaf(int data){

    AddLeafPrivate(data, root);
}

void Tree::AddLeaf(int data, node* Ptr){

    if(root == nullptr){

        root = CreateLeaf(data);

    }else if(data > Ptr->data){

        if(Ptr->right != nullptr){

            AddLeafPrivate(data, Ptr->right); //recursively calls function to traverse down the tree up to the leaf
        }else{

            Ptr->right = CreateLeaf(data); //once end is reached we set node Ptr->right to the value of 'data'
        }
    }else if(data < Ptr->data){

        if(Ptr->left != nullptr){

            AddLeafPrivate(data, Ptr->left); //recursively calls function to traverse down the tree up to the leaf
        }else{

            Ptr->left = CreateLeaf(data); //once end is reached we set node Ptr->right to the value of 'data'
        }
    }else{

        cout << "Data is already in tree\n";
    }

}

void Tree::PrintInOrder(){

    PrintInOrderPrivate(root);
}

void Tree::PrintInOrderPrivate(node* Ptr){

    if(root != nullptr){

        //main code here
        if(Ptr->left != nullptr){

            PrintInOrderPrivate(Ptr->left);
        }

        cout << Ptr->data << " ";

        if(Ptr->right != nullptr){

            PrintInOrderPrivate(Ptr->right); //recursively calls function but starting in Ptr->right
        }

    }else{

        cout << "Tree is empty\n";
    }
}

Tree::node* Tree::ReturnNode(int data){

    return ReturnNodePrivate(data, root);
}


Tree::node* Tree::ReturnNodePrivate(int data, node* Ptr){


    if(Ptr != nullptr){

        //main code
        if(data == Ptr->data){

            return Ptr; //returns address of data
        }
        else{
            
            if(data > Ptr->data){

                ReturnNodePrivate(data, Ptr->right);
            }
            if(data < Ptr->data){

                ReturnNodePrivate(data, Ptr->left);
            }
        }
    }else{

        return nullptr;
    }
}


int main(){


    cout << "Kevin";

}