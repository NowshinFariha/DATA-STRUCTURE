#include<iostream>
using namespace std;

void sumDiagonal(int **mat,int row,int col)
{
    int n1=0;
    int n2=0;
    int sum=0;
    for(int r=0;r<row;r++)
    {
        int c=r;
        n1=n1+mat[r][c];
    }
    int c=col-1;
    for(int r=0;r<row;r++)
    {

        n2=n2+mat[r][c];
        --c;

    }
    sum=n1+n2;

    cout<<endl<<"Diagonal sum value:"<<sum<<endl;

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
void takeInput2DArray(int **mat,int row,int col)
{
    cout<<" enter the values of array"<<endl;
    for(int r=0;r<row;r++)
    {
        for(int c=0;c<col;c++)
        {
            cin>>mat[r][c];
        }
        cout<<endl;
    }
}
void print2DArray(int **mat,int row,int col)
{
    cout<<"showing your array :"<<endl;
    for(int r=0;r<row;r++)
    {
        for(int c=0;c<col;c++)
        {
            cout<<mat[r][c]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int row,col;
    row=5;
    col=5;
    int **matD=new int *[row];

    init2DArray(matD,row,col,4);
    takeInput2DArray(matD,row,col);
    print2DArray(matD,row,col);
    sumDiagonal(matD,row,col);

}

