#include<iostream>
#include<vector>
using namespace std;


class Stack{

public :
    vector<int> v;
    void push(int a)
    {
        v.push_back(a);
        }
    int top()
    {
        return v[v.size()-1];

    }
    void pop()
    {

       v.pop_back();
    }
    bool empty()
    {
        return v.size()==0;

    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(160);
    s.push(40);
    s.push(30);

    while(!s.empty())
    {
        cout<<s.top();
        s.pop();



    }

}
