#include<iostream>
using namespace std;


int main()
{

int array1[10]={13,43,24,3,55,33,21,11,43,24};
int array2[8]={43,3,55,32,34,21,19,10};

int array3[8];

    int count=0;
    for(int i=0;i<10;i++)
    {
    for(int j=0;j<8;j++)
        {
        if(array1[i]==array2[j])
            {
            bool check =false;
                for(int k=0;k<=count;k++)
                {
                if(array3[k]==array1[i])
                   {
                    check=true;
                       break;
                   }
                   if(check==false)
                   {
                    array3[count]=array1[i];
                       count++;
                       break;
                   }
                }
            }
        }
    }

    if(count==0)
    {
        cout<<"No common"<<endl;
    }
    else
    {
        cout<<"new array with common "<<endl;
        for(int i=0;i<count;i++)
        {
            cout<<array3[i]<<" ";
        }
    }
}


