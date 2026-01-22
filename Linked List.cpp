#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int a)
    {

        data = a;
        next = NULL;
    }
};
class list
{
    Node *head;
    Node *tail;

public:
    list()
    {
        head = tail = NULL;
    }
    void push_front(int a)
    {
        Node *newNode = new Node(a);
        if (head == NULL)
        {
            head = tail = newNode;
        }

        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int a)
    {
        Node *newNode = new Node(a);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {

            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {

            cout << "LL is empty\n";
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        Node *temp = head;
        if (head == NULL)
        {
        }

        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void printll()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }


    void insert(int a,int pos)
    {

        if(pos<0)

        {
            cout<<"Invalid Position \n";
            return;
        }
        else if(pos == 0)
        {
            push_front(a);
        }


            Node* temp=head;
            for(int i=0; i<pos-1; i++)
            {
                temp=temp->next;

            }
            Node* newNode = new Node(a);
            newNode->next=temp->next;
            temp->next=newNode;





    }


};

int main()
{
    list ll;
    ll.push_front(1);


    ll.push_back(2);

    ll.insert(10,1);
    ll.printll();
}
