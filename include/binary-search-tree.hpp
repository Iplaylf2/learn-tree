namespace binary_search_tree
{
    struct BinarySearchTree
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
        struct BinarySearchTreeImpl &impl;
    };

}