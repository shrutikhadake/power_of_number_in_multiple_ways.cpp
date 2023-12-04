#include<iostream>
using namespace std;
class myclass
{
    public:
    int num,power,ans=1;
    public:
    void pow_num()
    {
    cout<<"Enter the num"<<endl;
    cin>>num;
    try{
            if(num<=0)
            {
             throw num;
            }
        }
        catch(int no)
        {
            cout<<no<<" is less than 0"<<endl;
        }
    cout<<"Enter the  power of number"<<endl;
    cin>>power;
    for(int i=0;i<power;i++)
    {
        ans=ans*num;
    }
    cout<<"Power is:"<<ans<<endl;
    }
};
int main()
{
   myclass obj;
   obj.pow_num();
}
