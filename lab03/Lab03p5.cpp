#include<iostream>
using namespace std;

void multiply2DArray(int **mat1,int **mat2,int **mat3,int row,int col)
{

    for(int r=0;r<row;r++)
    {
    for(int c=0;c<col;c++)
        {
        int sum=0;
        for(int i=0;i<3;i++)
            {
            sum=sum+mat1[r][i]*mat2[i][c];
            }
        mat3[r][c]=sum;
        }
    }

}

void init2DArray(int **mat,int row,int col,int v)
{

    for(int r=0;r<row;r++)
    {
        mat[r]=new int[col];
    }
    for(int r=0;r<row;r++)
    {
        for(int c=0;c<col;c++)
        {
            mat[r][c]=v;
        }
    }
}
void print2DArray(int **mat,int row,int col)
{
    for(int r=0;r<row;r++)
    {
        for(int c=0;c<col;c++)
        {
            cout<<mat[r][c]<<"\t";
        }
            cout<<endl;
    }
}
void takeInput2DArray(int **mat,int row,int col)
{
    for(int r=0;r<row;r++)
    {
        for(int c=0;c<col;c++)
        {
            cin>>mat[r][c];
        }

    }
}

int main()
{
    int row,col;
    row=3;
    col=3;
    int **matD=new int *[row];
    int **matD1=new int *[row];
    int **matD2=new int *[row];

    init2DArray(matD,row,col,0);
    cout<<"input first array values"<<endl;
    takeInput2DArray(matD,row,col);
    cout<<"your first array :"<<endl;
    print2DArray(matD,row,col);
    init2DArray(matD1,row,col,1);
    cout<<"input second array values"<<endl;
    takeInput2DArray(matD1,row,col);
    cout<<"your second array :"<<endl;
    print2DArray(matD1,row,col);
    init2DArray(matD2,row,col,2);
    multiply2DArray(matD,matD1,matD2,row,col);
    cout<<"multiplicationed array:"<<endl;
    print2DArray(matD2,row,col);

}


