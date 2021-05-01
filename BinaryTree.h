#ifndef BINARYTREE_H
#define BINARYTREE_H


class BinaryTree
{
    private:
        struct node{

            int key;
            node* left;
            node* right;
        };

        node* root;

        void AddLeafPrivate(int key, node* Ptr);
        void PrintInOrderPrivate(node* Ptr);
        node* ReturnNodePrivate(int key, node* Ptr);

    public:
        BinaryTree();
        void AddLeaf(int key);
        void PrintInOrder();
        node* CreateLeaf(int key);
        node* ReturnNode(int key);
};

#endif // BINARY TREE_H
