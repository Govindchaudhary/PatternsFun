#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n,k,l=-1,r;
    cout<<"enter the value of rows:\n";
    cin>>n;

    cout<<"inverted triangle is:\n";
    
    for(int i=1;i<=n;i++)
    {
        for(int space = 1;space<=i-1;space++) {
            cout<<"  ";
        }

        for(int j=1;j<=2*(n-i)+1;j++)
        {

            cout<<"* ";
        }
        cout<<"\n";

   }
}