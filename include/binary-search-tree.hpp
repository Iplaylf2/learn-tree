namespace bst
{
#ifndef LEARN_TREE_BST
#define LEARN_TREE_BST
    class BinarySearchTree
    {
    public:
        BinarySearchTree();
        ~BinarySearchTree();
        void push(int x);
        int pop();
        int find(int x);
        int get(int i);
        void insert(int i, int x);
        int del(int i);
        int min();
        int max();
        const int length;

    private:
        class Node *root;
    };
#endif
}