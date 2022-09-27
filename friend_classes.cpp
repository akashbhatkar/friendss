#include <iostream>

using namespace std;

class ABC
{
private: int a;
public: int b;
protected:int c;
    friend class XYZ;

};

class XYZ{
    ABC obj;
public:void setdata()
    {
        cout<<"Enter the values of a b and c"<<endl;
        cin>>obj.a;
        cin>>obj.b;
        cin>>obj.c;
    }
    void getdata()
    {
       cout<<obj.a<<endl<<obj.b<<endl<<obj.c<<endl;
    }
};

int main()
{
  ABC obj1;
  XYZ X;
  X.setdata();
  X.getdata();
}
