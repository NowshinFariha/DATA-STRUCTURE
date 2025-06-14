#include "mySTL.h"


int main()
{

     MyLinkedList<int>List1;
    List1.createNode(10);
    cout<<"single linked list"<<endl;
    cout<<"-------------------"<<endl<<endl;
    cout<<"inserting 22 at the last :"<<endl;
    List1.insertAtLast(22);
    List1.display();
    cout<<"Inserting 11 at the first:"<<endl;
    List1.insertAtFirst(11);
    List1.display();
    cout<<"inserting 5 int. elements "<<endl;
    List1.insertNelements(5);
    List1.display();
    cout<<"Inserting 33 at the first:"<<endl;
    List1.insertAtFirst(33);
    List1.display();
    cout<<"inserting 55 at the last :"<<endl;
    List1.insertAtLast(55);
    List1.display();
    cout<<"Inserting 44 before 22:"<<endl;
    List1.insertBefore(44,22);
    List1.display();
    cout<<"Inserting 55 after 11:"<<endl;
    List1.insertAfter(55,11);
    List1.display();
    cout<<"deleting first element:"<<endl;
    List1.deleteFirst();
    List1.display();
    cout<<"deleting last element :"<<endl;
    List1.deleteLast();
    List1.display();
    int x;
    cout<<"enter int. element to delete from the list:";
    cin>>x;
    List1.deleteData(x);
    List1.display();
    List1.displayRecur();
    cout<<endl<<endl;



    cout<<"double linked list"<<endl;
    cout<<"-------------------<<"<<endl<<endl;
     MyDLinkedList<int>DList1;
    DList1.createNode(10);
    DList1.insertAtLast(5);
    DList1.insertAtLast(15);
    DList1.insertAtLast(25);
    DList1.display();
    DList1.insertAtFirst(20);
    DList1.display();
    DList1.insertAtFirst(21);
    DList1.display();
    DList1.deleteLast();
    DList1.display();
    DList1.deleteLast();
    DList1.display();
    DList1.insertBeforPos(200,1);
    DList1.display();

    MyDLinkedList<int>DList2;
    MyDLinkedList<int>DList3;
    DList2.insertAtLast(41);
    DList2.insertAtLast(42);
    DList2.insertAtLast(43);

     DList2.insertAfterPos(99,1);
    DList2.display();
     DList2.deleteData(43);
    DList2.display();
    DList2.deleteFirst();
    DList2.display();
    DList2.deleteFirst();
    DList2.display();
    DList2.deleteLast();
    DList2.display();

    DList2.deleteLast();
    DList2.display();
    DList2.insertNElements(5);
    DList2.display();
    DList2.deleteData(5);
    DList2.display();
    DList2.displayRecur();




    cout<<"Stack using linked list"<<endl;
    cout<<"-----------------------"<<endl<<endl;
    MyStack<int>stack1;
    stack1.push(5);
    stack1.topElement();
    stack1.push(9);
    stack1.topElement();
    stack1.pop();
    stack1.topElement();
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    stack1.topElement();
    stack1.pop();
    stack1.topElement();


    cout<<"Queue using linked list"<<endl;
    cout<<"-----------------------"<<endl<<endl;
    MyQueue<int>queue1;
    queue1.enqueue(5);
    queue1.enqueue(6);
    queue1.enqueue(7);
    queue1.frontElement();
    queue1.rearElement();
    queue1.dequeue();
    queue1.frontElement();
    queue1.rearElement();
    queue1.enqueue(8);
    queue1.frontElement();
    queue1.rearElement();


    cout<<"BST using linked list"<<endl;
    cout<<"--------------------"<<endl<<endl;
     MyBST<int>tree1;
    tree1.insertIntoBST(tree1.getHead(),5);
    tree1.insertIntoBST(tree1.getHead(),6);
    tree1.insertIntoBST(tree1.getHead(),7);
    tree1.insertIntoBST(tree1.getHead(),8);
    tree1.insertIntoBST(tree1.getHead(),9);
    tree1.insertIntoBST(tree1.getHead(),4);
    tree1.insertIntoBST(tree1.getHead(),3);

    tree1.inOrder(tree1.getHead());
    tree1.insert(5);
    tree1.insert(6);
    tree1.insert(7);
    tree1.insert(8);
    tree1.insert(9);

    tree1.in();
    tree1.pre();
    tree1.post();
    tree1.search(7);

    return 0;
}
