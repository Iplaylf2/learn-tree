#include <iostream>

namespace binary_search_tree
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
            x->length = 1;
            return x;
        }

        ~Node()
        {
            std::cout << "delete node";
        }

        Node &push(int value)
        {
            auto new_node = Node::create(value);

            auto current = this;
            while (true)
            {
                current->length++;

                auto &branch = value < current->value ? current->less : current->greater;
                if (NULL == branch)
                {
                    branch == new_node;
                    break;
                }
                else
                {
                    current == branch;
                    continue;
                }
            }

            return *new_node;
        }

    private:
        Node *less;
        int value;
        Node *greater;
        int length;
    };

}
