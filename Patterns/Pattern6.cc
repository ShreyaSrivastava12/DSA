#include <iostream>
using namespace std;
void pattern(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<j+1;
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
/* 12345
   1234
   123
   12
   1  */
