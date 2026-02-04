#include<iostream>
using namespace std;

class Node
{
public :
    int data;
    Node* next;

    Node(int a)
    {
        data=a;
        next=NULL;

    }

};
class Queue
{
public :
    Node* head;
    Node*tail;
    Queue()
    {
        head=tail=NULL;
    }
    void push(int a)
    {
        Node* newNode= new Node(a);
        if(head==NULL)
        {
             head=tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"List is empty \n";
                return;
        }
        else
        {
            Node* temp= head;
            head=head->next;
            temp->next=NULL;
            delete temp;


        }



    }

    int top()
    {

        return head->data;
    }
    bool empty()
    {

        return head==NULL;
    }


};
int main()
{
    Queue l;
    l.push(10);
    l.push(50);
    l.push(30);

    while(!l.empty())
    {
        cout<<l.top();
        l.pop();

    }



}
