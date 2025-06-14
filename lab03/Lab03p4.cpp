
#include<iostream>
using namespace std;

void sumEdge(int **mat,int row,int col)
{
    int sum=0;
    for(int r=0;r<row;r++)
    {
    for(int c=0;c<col;c++)
        {
        if(r==0||c==0||r==row-1||c==col-1)
            {
            sum=sum+mat[r][c];
            }
        }
    }
    cout<<"Sum of the edged elements :"<<sum<<endl;

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
    cout<<"enter the values of array"<<endl;
    for(int r=0;r<row;r++)
    {
    for(int c=0;c<col;c++)
        {
        cin>>mat[r][c];
        }
    }
}
void print2DArray(int **mat,int row,int col)
{
    cout<<" your array :"<<endl;
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

    init2DArray(matD,row,col,0);
    takeInput2DArray(matD,row,col);
    print2DArray(matD,row,col);
    sumEdge(matD,row,col);

}
