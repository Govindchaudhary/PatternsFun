#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n,k,l=-1,r;
    cout<<"enter the value of rows:\n";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int space = 1;space<=n-i;space++) {
            cout<<"  ";
        }

        for(int j=1;j<=2*i-1;j++)
        {

            cout<<"* ";
        }
        cout<<"\n";

   }

    cout<<"inverted triangle is:\n";
    cout<<"\n";
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

   cout<<"floyd triangle is:\n";
   for(int i=1;i<=n;i++)
   {
       for(int k =1;k<=i;k++)
       {
           cout<<k<<" ";
       }
       cout<<"\n";

   }


   cout<<"diamond is:\n";
   for(int i=1;i<=n;i++)
   {

       for(int space=1;space<=abs((n+1)/2-i);space++){
        cout <<"  ";
       }
       if(i<=(n+1)/2)
            l=l+2;
         else
            l=l-2;
       for(int j=1;j<=l;j++) {

         cout<<"* ";
       }
       cout<<"\n";
   }

    cout<<" hollow diamond is:\n";
    l=-1;
   for(int i=1;i<=n;i++)
   {

       for(int space=1;space<=abs((n+1)/2-i);space++){
        cout <<"  ";
       }
       if(i<=(n+1)/2)
            l=l+2;
         else
            l=l-2;
       for(int j=1;j<=l;j++) {
        if(j==1 || j==l)
           cout<<"* ";
         else
            cout<<"  ";
       }
       cout<<"\n";
   }

   cout<<"ajeeb pattern is:\n";
   r=(n+1)/2+1;
   l=-2;

   for(int i=1;i<=n;i++)
   {
       if(i<=(n+1)/2) {
            l=l+2;
            r=r-1; }
         else {
            l=l-2;
            r=r+1; }
       for(int j=1;j<=r;j++){
        cout<<"* ";
       }
       for(int j=1;j<=l;j++){
        cout<<"  ";
       }
       for(int j=1;j<=r;j++){
        cout<<"* ";
       }
       cout<<"\n";
   }
}
