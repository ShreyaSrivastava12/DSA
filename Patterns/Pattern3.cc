#include <iostream>
using namespace std;
void pattern(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
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
/* 1
   12
   123
   1234
   12345 */
