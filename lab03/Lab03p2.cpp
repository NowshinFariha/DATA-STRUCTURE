
#include<iostream>
using namespace std;

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

void transpose(int **mat1,int **mat2,int row,int col)
{
    for(int r=0;r<row;r++)
    {
        for(int c=0;c<col;c++)
        {
            mat2[r][c]=mat1[c][r];
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
        cout<<endl<<endl;
    }
}
int main()
{
    int row,col;
    row=4;
    col=4;
    int **matD=new int *[row];
    int **matA=new int *[row];

    init2DArray(matD,row,col,0);
    cout<<"input the values"<<endl;
    takeInput2DArray(matD,row,col);
    cout<<"array is"<<endl;
    print2DArray(matD,row,col);

    init2DArray(matA,row,col,1);
    transpose(matD,matA,row,col);
    cout<<"Transpose matrix:"<<endl;
    print2DArray(matA,row,col);



}
