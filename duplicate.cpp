#include<iostream>
using namespace std;
int duplicate(int a[],int n,int k)
{int i,count=0;
  for(i=0;i<n;i++)
   {
    if(a[i]==k)
    {
        count++;

    }
    
   }
   return count;

}
int main()
{
    int i,n,k,a[10],d;
    cout<<"enter range"<<endl;
    cin>>n;
    cout<<"enter sorted elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key"<<endl;
    cin>>k;
    d=duplicate(a,n,k);

    if (d==-1)
    {
           cout<<"elements not found"<<endl;
    }
    else{
     
        cout<<" no of duplicate elements are "<<d;
    }

}