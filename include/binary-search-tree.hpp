namespace bst
{
    struct BinarySearchTree;
    void push(BinarySearchTree &t, int x);
    int pop(BinarySearchTree &t);
    int find(BinarySearchTree &t, int x);
    int get(BinarySearchTree &t, int i);
    void insert(BinarySearchTree &t, int i, int x);
    int del(BinarySearchTree &t, int i);
    int min(BinarySearchTree &t);
    int max(BinarySearchTree &t);
    int length(BinarySearchTree &t);
};