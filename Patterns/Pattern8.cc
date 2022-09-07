#include <iostream>
using namespace std;
void pattern(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<2*(n-i)-1;j++)
        {
            cout<<"*";
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
/*  *********
     *******
      *****
       ***
        *     */
