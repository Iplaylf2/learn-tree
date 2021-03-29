#include <iostream>

namespace LearnTree
{
    struct Node
    {
    public:
        static Node *create(int value)
        {
            auto x = new Node;
            x->less = NULL;
            x->value = value;
            x->greater = NULL;
            return x;
        }

        ~Node()
        {
            std::cout << "delete node";
        }

    private:
        Node *less;
        int value;
        Node *greater;
    };

}
