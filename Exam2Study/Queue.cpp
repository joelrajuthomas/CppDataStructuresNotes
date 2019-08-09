#include <iostream>

using namespace std;

struct node
{
    int value;
    node *next;
};

class queue
{
    private:
        node *front;
        node *back;
    public:
        queue()
        {
            front = back = NULL;
        }
        void Enqueue(int value);
        void Dequeue();
        void print();
        bool isEmpty();
};
bool queue::isEmpty()
{
    node *temp = new node;
    temp = front;
    if(temp==NULL)
    return true;
    else
    return false;
    
}
void queue::print()
{
    node *curr = new node;
	curr = front;
	
	while(curr!=NULL)
	{
		cout << curr->value << endl;
		curr = curr->next;
	}
    cout << endl;
}
void queue::Enqueue(int value)
{
    node *temp = new node;
    temp->value = value;
    temp->next = NULL;
    
    if(front == NULL)
    {
        front = temp;
        back = temp;
        temp->next = NULL;
        return;
    }
    else
    {
        back->next = temp;
        back = temp;
        temp->next = NULL;
        return;
    }
    
}
void queue::Dequeue()
{
    node *temp = new node;
    temp = front;
    if(front == NULL)
    {
        cout << "There is no item's in queue to Dequeue." << endl;
        return;
    }
    else 
    {
        front = temp->next;
        delete temp;
        return;
    }
}
int main()
{
    queue a;
    if(a.isEmpty() == 0)
    {
        cout << "list is not empty" << endl;
    }
    else
    {
        cout << "list is empty" << endl;
    }
    a.Enqueue(5);
    a.Enqueue(4);
    a.Enqueue(3);
    a.Enqueue(2);
    a.Enqueue(1);

    a.print();

    a.Dequeue();
    a.Dequeue();
    a.Dequeue();

    a.print();

    a.Dequeue();
    a.Dequeue();

    if(a.isEmpty() == 0)
    {
        cout << "list is not empty" << endl;
    }
    else
    {
        cout << "list is empty" << endl;
    }
}