#include<iostream>
using namespace std;
class base
{
    public:
    int num,power,ans=1;
    public:
    virtual void get_num()
    {
    cout<<"Enter the num"<<endl;
    cin>>num;
    cout<<"Enter the  power of number"<<endl;
    cin>>power;
    {
      for(int i=0;i<power;i++)
    {
       ans=ans*num;
    }
    cout<<"This is base class"<<endl;
    cout<<"Power is:"<<ans<<endl;
    }
    }
};
class derived:public base
{
    public:
    void get_num()
    {
    cout<<"Enter the num"<<endl;
    cin>>num;
    cout<<"Enter the  power of number"<<endl;
    cin>>power;
    {
      for(int i=0;i<power;i++)
    {
       ans=ans*num;
    }
    cout<<"This is derived class"<<endl;
    cout<<"Power is:"<<ans<<endl;
    }
    }
 };
int main()
{
   base b;
   b.get_num();
   derived d;
   d.get_num();
}
