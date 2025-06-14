#include<iostream>
using namespace std;
int main()
{
    int number1[10]={12,24,34,5,67,22,4,5,6,10};

    int searchNumber;
    cout<<"Input a number to search :";
    cin>>searchNumber;
    cout<<endl;

    int counter=0;
    for(int i=0;i<10;i++)
    {
       if(number1[i]==searchNumber)
       {
           counter++;
       }
    }
    cout<<"The number "<<searchNumber<<" occurs "<<counter<<" times"<<endl;
}
