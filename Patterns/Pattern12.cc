#include <iostream>
using namespace std;
void pattern(int n)
{
    int i,j,st,en;
    for(i=0;i<n;i++)
    {
        st=1;
        en=i+1;
        for(j=0;j<2*n;j++)
        {
            if(j<i+1)
              cout<<st++;
            else if(j>=(2*n-1-i))
              cout <<en--;
            else
              cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
/* 1      1
   12    21
   123  321
   12344321  */
