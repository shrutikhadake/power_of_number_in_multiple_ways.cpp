#include<iostream>
using namespace std;
class myclass
{
    private:
    int num,power,ans=1;
    public:
    void get_num()
    {
    cout<<"Enter the num"<<endl;
    cin>>num;
    cout<<"Enter the  power of number"<<endl;
    cin>>power;
    }
 friend class frnd;    
};
class frnd
{
    public:
    void num_pow(myclass &m)
    {
      for(int i=0;i<m.power;i++)
    {
       m.ans=m.ans*m.num;
    }
    cout<<"Power is:"<<m.ans<<endl;
    }
   };
int main()
{
   myclass m;
   m.get_num();
   frnd f;
   f.num_pow(m);
    
}
