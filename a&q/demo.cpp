#include "arrayUtility.h"
int main()
{
    int *array1=new int[10];
    cout<<"input values:"<<endl;
    input1DArray(array1,10);
    cout<<"your array :"<<endl;
    print1DArray(array1,10);
    cout<<endl;
    cout<<"reverse array :"<<endl;
    reversePrint1DArray(array1,10);
    cout<<endl;
    findMax1DArray(array1,10);
    findMin1DArray(array1,10);
    cout<<"enter number to search :"<<endl;
    int n;
    cin>>n;
    searchIn1DArray(array1,10,n);
        int *array2=new int[10];
    copy1DArray(array1,array2,10);
    sort1DArray(array1,10);
    cout<<endl;
    int size2=3;
    int **array3=new int *[size2];
    init2DArray(array3,size2,1);
    cout<<"input values"<<endl;
    input2DArray(array3,size2);
    cout<<"print array :"<<endl;
    print2DArray(array3,size2);
    cout<<"reverse print "<<endl;
    reversePrint2DArray(array3,size2);
    cout<<"enter number to search"<<endl;
    int n2;
    cin>>n2;
    searchIn2DArray(array3,size2,n2);
    findMax2DArray(array3,size2);
    findMin2DArray(array3,size2);
    int **array4=new int *[size2];
    init2DArray(array4,size2,2);
    copy2DArray(array3,array4,size2);





}
