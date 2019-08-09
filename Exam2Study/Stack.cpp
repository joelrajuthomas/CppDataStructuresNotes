#include <iostream>
using namespace std;

struct node
{
    int value;
    node *next;
};

class stack
{
    private:
        node *top;
    public:
        stack()
        {
            top = NULL;
        }
        void push(int value)
        {
            node *temp = new node;
            temp->value = value;
            if(top == NULL)                                                        
            {
                top = temp;
                temp->next = NULL;
                return;
            }
            else
            {
                temp->next = top;
                top = temp;
                return;
            }
        }
        int pop()
        {
            int x;
            node *temp =  new node;
            temp = top;
            if(top == NULL)
            {
                cout << "there is nothing left in stack to pop" << endl;
                return 0;
            }
            else
            {
                x = top->value;
                top = temp->next;
                temp->next = NULL;
                delete temp;
                return x;
            }
        }
        bool isEmpty()
        {
            node *temp = new node;
            temp = top;
            if(temp == NULL)
            {
                return true;
            }
            else
            return false;
        }
        void printStack()
        {
            node *curr = new node;
            curr = top;
            while(curr != NULL)
            {
                cout << curr->value << endl;
                curr = curr->next;
            }
        }
};

int main()
{
    stack a;
    if(a.isEmpty() == true)
    {
        cout << "stack is empty" << endl;
    }

    a.push(1);
    a.printStack();
    cout << endl;
    a.push(2);
    a.printStack();
    cout << endl;
    a.push(3);
    a.printStack();
    cout << endl;
    a.push(4);
    a.printStack();
    cout << endl;
    a.pop();
    a.printStack();
    cout << endl;
    a.pop();
    a.printStack();
    cout << endl;
    a.pop();
    a.printStack();
    cout << endl;
    a.pop();
    a.printStack();
    cout << endl;
    



    if(a.isEmpty() == true)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
}