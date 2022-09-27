#include <iostream>

using namespace std;
class ABC
{
    private: int a,b;
   public: ABC()
    {
        cout<<"Enter the values"<<endl;
        cin>>a>>b;
    }
    friend void display(ABC &);
};
void display (ABC &B)
    {
        cout<<B.a<<endl;;
        cout<<B.b<<endl;;
    }

int main()
{
   ABC a1,a2;
   display(a1);
   display(a2);
}
