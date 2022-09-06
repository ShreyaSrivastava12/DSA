#include <iostream>
using namespace std;
int main()
{
   int k = 0;
   int i=1;
    while(i!=6)
    {
        for (int j = 1; j <= i; j++) 
        {
           cout<<"*";
        }
          i++;
          cout<<endl;
    }
       
    for(int k=1;k<=4;k++)
    {
        for(int m=4;m>=k;m--)
        {
          cout<<"*";
        }
        cout<<endl;
    }
}
/* *
   **
   ***
   ****
   *****
   ****
   ***
   **
   *    */
