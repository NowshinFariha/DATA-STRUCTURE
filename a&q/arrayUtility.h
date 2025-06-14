#include<iostream>
using namespace std;

void print1DArray(int *array, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}
void reversePrint1DArray(int *array, int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
}
void input1DArray(int *array, int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
}
void searchIn1DArray(int *array, int size, int searchKey)
{
    bool flag=false;
    for(int i=0;i<size;i++)
    {
        if(array[i]==searchKey)
        {
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<searchKey<<" is not found"<<endl;
    }
    else cout<<searchKey<<" is found"<<endl;
}
void findMax1DArray(int *array, int size)
{
    int max=array[0];
    for(int i=0;i<size;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    cout<<"max is :"<<max<<endl;
}
void findMin1DArray(int *array, int size)
{
    int min=array[0];
    for(int i=0;i<size;i++)
    {
        if( min>array[i])
        {
            min=array[i];
        }
    }
    cout<<"min is :"<<min<<endl;
}
void copy1DArray(int *sourceArray,int *destinationArray, int size)
    {
        for(int i=0;i<size;i++)
        {
            destinationArray[i]=sourceArray[i];
        }
        cout<<"copied array"<<endl;
    }

void sort1DArray(int *array, int size)
{

    for(int i=0;i<size-1;i++)
    {
        int temp;
        if(array[i]>array[i+1])
        {
            temp=array[i+1];
            array[i+1]=array[i];
            array[i]=temp;
        }
    }
    cout<<"array sorted"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<"  ";
    }
}
void print2DArray(int **array, int size)
{
    for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            cout<<array[r][c]<<" ";
        }
        cout<<endl;
    }
}
 void reversePrint2DArray(int **array, int size)
 {
     for(int r=size-1;r>=0;r--)
     {
         for(int c=size-1;c>=0;c--)
         {
             cout<<array[r][c]<<" ";

         }
         cout<<endl;
     }
 }

void input2DArray(int **array, int size)
{
    for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            cin>>array[r][c];
        }
    }
}
void searchIn2DArray(int **array, int size, int searchKey)
{
    bool flag=false;
    for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            if(array[r][c]==searchKey)
            {
                flag=true;
                break;
            }
        }
    }
    if(flag=false)
    {
        cout<<searchKey<<" is not found "<<endl;
    }
    else cout<<searchKey<<" is found"<<endl;
}


void findMax2DArray(int **array, int size)
{
    int max=array[0][0];
    for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            if(max<array[r][c])
            {
                max=array[r][c];
            }
        }
    }
    cout<<"max is :"<<max<<endl;

}
void findMin2DArray(int **array, int size)
{
    int min=array[0][0];
    for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            if(min>array[r][c])
            {
                min=array[r][c];
            }
        }
    }
    cout<<"min is :"<<min<<endl;
}
void copy2DArray(int **sourceArray, int **destinationArray, int size)
{
    for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            destinationArray[r][c]=sourceArray[r][c];
        }
    }
    cout<<"array copied"<<endl;
}
void init2DArray(int **array,int size,int n)
{

    for(int r=0;r<size;r++)
    {
        array[r]=new int[size];
    }
    for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            array[r][c]=n;
        }
    }
}













