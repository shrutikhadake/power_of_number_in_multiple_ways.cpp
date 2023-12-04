#include<iostream>
using namespace std;
class base
{
    public:
    int num,power,ans=1;
    public:
    void pow_num()
    {
    cout<<"Enter the num"<<endl;
    cin>>num;
    cout<<"Enter the  power of number"<<endl;
    cin>>power;
    for(int i=0;i<power;i++)
    {
        ans=ans*num;
    }
    cout<<"Power is:"<<ans<<endl;
    }
};
class derived:public base
{
public:
void display()
{
  cout<<"This is derived class"<<endl;   
}
};
int main()
{
    base b;
    b.pow_num();
    derived d;
    d.display();
    d.pow_num();
}
