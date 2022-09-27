#include<iostream>
using namespace std;
class ABC;
class XYZ
{
    public: void getdata(ABC obj);

};

class ABC
{
private: int a,b;
   public: ABC()
    {
        cout<<"Enter the values of a and b"<<endl;
        cin>>a>>b;
    }
  void friend XYZ::getdata(ABC);

   void fun(XYZ &s);

};






void XYZ:: getdata(ABC obj)
{
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;

}
int main()
{
    ABC obj1;
    XYZ obj2;
    obj2.getdata(obj1);
 }
