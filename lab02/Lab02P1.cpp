#include<iostream>
using namespace std;



int main()
{



   int number1[12]={12,2,44,3,21,5,6,2,7,33,41,17};
    int number2[5]={23,6,9,12,10};
    cout<<"First array"<<endl;
    for(int i=0; i<12; i++)
    {
        cout<<number1[i]<<" ";
    }
    cout<<endl;
    cout<<"second array"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<number2[i]<<" ";
    }
    int n3,n1=12,n2=5;



   n3=n1+n2;
    cout<<endl;



   int newArray[n3]={};



   for(int j=0;j<n1;j++)
    {
        newArray[j]=number1[j];
    }
    for(int j=n1;j<n3;j++)
    {
      for(int i=0;i<n2;i++)
      {
          newArray[j++]=number2[i];
      }
    }
    cout<<"new array"<<endl;
    for(int i=0;i<n3;i++)
    {
        cout<<newArray[i]<<" ";
    }
    cout<<endl;
    cout<<"reverse array"<<endl;
     for(int i=n3-1;i>=0;i--)
    {
        cout<<newArray[i]<<" ";
    }




}
