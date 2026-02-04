#include<iostream>
#include<list>
using namespace std;

class List{
public :
    list<int> v;

    void push(int a)
    {
        v.push_front(a);
    }
    void pop()
    {

        v.pop_front();
    }
    int top()
    {

        return v.front();
    }

    bool empty()
    {
        return v.size()==0;
    }

    };

int main()
{
    List l;
    l.push(10);
   // l.push(9890);
    l.push(17);
    l.push(540);
    l.push(20);

while(!l.empty())
{

    cout<<l.top()<<" ";
        l.pop();
}




}
