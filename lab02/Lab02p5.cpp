#include<iostream>
using namespace std;

int main()
{
    int array[15]={12,2,3,44,1,5,3,2,7,1,12,10,5,4,2};

    int temp[15];
    for(int i=0;i<15;i++)
    {
    if(temp[i] != 0)
        {
        int counter=1;
            for(int j=i+1;j<15;j++)
            {
            if(array[i]==array[j])
                   {
                    counter++;
                       temp[j]=0;
                   }
            }
        cout<<array[i]<<" occurs =  "<<counter<<" times"<<endl;
        }
    }







}

