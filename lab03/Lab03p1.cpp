#include<iostream>
using namespace std;
void sum2DArray(int **matA,int **matB,int **matC,int row,int col)
{
  int sum=0;



 for(int r=0;r<row;r++)
  {
      for(int c=0;c<col;c++)
      {
          matC[r] [c] =matA[r][c]+matB [r][c];
      }
  }



}
void init2DArray(int **matD,int row,int col,int v)
{
  for(int r=0;r<row;r++)
  {
      matD[r]= new int [col];
  }
  for(int r=0;r<row;r++)
  {
      for(int c=0;c<col;c++)
      {
          matD[r] [c] =v;
      }
  }



}
void print2DArray(int **mat,int row,int col)
{
   for(int r=0;r<row;r++)
   {
       for(int c=0;c<col;c++)
       {
           cout<<mat [r] [c]<<'\t';
       }
        cout<<endl<<endl;
   }
}



void takeInput2DArray(int **mat,int row,int col)
{
   for(int r=0;r<row;r++)
   {
       for(int c=0;c<col;c++)
       {
           cin>>mat [r] [c];
       }
       cout<<endl;
   }
}
int main()
{
   int row,col;
   row=4;
   col=4;
   int **matX = new int*[row];
   int **matY = new int*[row];
   int **matZ = new int*[row];




   init2DArray(matX,row,col,0);


 cout<<"enter elements of first array :"<<endl;
  takeInput2DArray(matX,row,col);


  cout<<"this is first array:"<<endl;
  print2DArray (matX,row,col);




   init2DArray(matY,row,col,1);


 cout<<"enter elements of second array :"<<endl;

  takeInput2DArray(matY,row,col);


  cout<<"this is second array:"<<endl;
  print2DArray (matY,row,col);




   init2DArray(matZ,row,col,2);



  sum2DArray(matX,matY,matZ,row,col);



  cout<<"sum array:"<<endl;



  print2DArray (matZ,row,col);



  return 0;



}
