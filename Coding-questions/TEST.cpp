#include <iostream>
using namespace std;

Struct Node
{
    int data;
    Node *next;
}

bool hasLoop(Node *head)
{

    if (head == nullptr || head->next == nullptr)
    {
        return false;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != nullptr && fast->next == nullptr)
    {
        if (slow == fast)
        {
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}

int main()
{

    return 0;
}
