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

    public:
        BinaryTree();
        node* CreateLeaf(int key);
        void AddLeaf(int key);
};

#endif // BINARY TREE_H
