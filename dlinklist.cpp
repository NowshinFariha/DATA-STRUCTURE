#include<iostream>
using namespace std;
template<typename T>

class DbleLinkedList
{
private:
    typedef class Node{
     public:
         T data;
         Node *prev;
         Node *next;
         Node(){

         }
         Node(T value){
             data=value;
             prev=NULL;
             next=NULL;
         }

    } *NodePointer;

    NodePointer head=NULL;
    NodePointer tail=NULL;

public:

    NodePointer createNode(T value){
       return new Node(value);
    }
    void insertAtLast(T value){
       NodePointer temp=head;
       if(temp==NULL){
        head=createNode(value);
          tail=head;
       }
       else{
       tail->next=createNode(value);
          tail->next->prev=tail;
          tail=tail->next;
       }
    }
    void insertAtFirst(T value){
       NodePointer newNode=createNode(value);
       newNode->next=head;
       newNode->prev=NULL;
       head->prev=newNode;
       head=newNode;

    }
     void insertNElements(int n){
         T *elements=new T[n];
         cout<<"enter elements below:"<<endl;
         for(int i=0;i<n;i++){
            cin>>elements[i];
         }

         for(int i=0;i<n;i++){
            insertAtLast(elements[i]);
         }
         delete elements;
      }

      void display(){
          NodePointer temp=head;
          if(head==NULL)
          {
              cout<<"list is emply"<<endl;
          }
          else
          {
              while(temp != NULL){
              cout<<temp->data<<"\t";
              temp=temp->next;
          }
          cout<<endl;
          }
      }
      void deleteLast(){
           if(head==NULL){
               cout<<"Linked is now empty"<<endl;
            }
          else if(head != NULL){
              if(head->next == NULL){
                  head = NULL;
              }
              else{
                  NodePointer temp=tail;
                  temp->prev->next=NULL;
                  tail=temp->prev;
                  delete temp;
              }
            }
      }
      void insertBeforPos(T value,int p){
          NodePointer newNode=createNode(value);
        NodePointer temp=head;
        int count=0;
           while(temp!=NULL){
               temp=temp->next;
               count++;
           }
           if(count>=1){
               if(p==1){
                   newNode->next=head;
                   newNode->prev=NULL;
                   head=newNode;
               }
               else if(p<1){
                   cout<<"Invalid position "<<endl;
               }
               else if(p>=1 && p<=count){
                   temp=head;
                   for(int i=1;i<p-1;i++){
                        temp=temp->next;

                   }
                   newNode->next=temp->next;
                   newNode->prev=temp;
                   temp->next=newNode;
              }
              else{
                  cout<<"don't have "<<p<<" node in the list"<<endl;
              }
           }
           else{cout<<"List is empty"<<endl;}
      }
      void insertAfterPos(T value,int p)
      {
          NodePointer newNode=createNode(value);
          NodePointer temp=head;
        int count=0;
           while(temp!=NULL)
           {
               temp=temp->next;
               count++;
           }
           if(count>=1)
           {
               if(p<1)
               {
                    cout<<"Invalid position"<<endl;
               }
               else if(p>=1 && p<=count)
               {
                   temp=head;
                   for(int i=1;i<p;i++)
                   {
                       temp=temp->next;
                   }
                   newNode->next=temp->next;
                   newNode->prev=temp;
                   temp->next=newNode;
                }

               else{cout<<"don't have "<<p<<" node in the list"<<endl;}

           }
           else{cout<<"List is empty"<<endl;}

      }
      void deleteFirst()
      {
          if(head == NULL)
          {
              cout<<"delete not possible"<<endl;
          }
          else if(head->next==NULL)
          {
              head==NULL;
              cout<<"first node"<<endl;
          }
          else
          {
                NodePointer oldHead=head;
              head=head->next;
              head->prev=NULL;
              delete oldHead;
          }

      }
      void deleteData(T p){
        NodePointer del = NULL;
        NodePointer temp = head;
        NodePointer curr = head;

        while(curr != NULL && curr->data != p){
            temp = curr;
            curr = curr->next;
       }

       if(curr == NULL){
            cout << " not in the list." << endl;
            delete del;
       }
       else if(curr->next!=NULL)
        {
            del = curr;
            curr = curr->next;
            curr->prev=temp;
            temp->next = curr;
            if(del == head){
                    head = head->next;
                    temp = NULL;
            }
            delete del;

            cout << "The data was deleted" << endl;

         }
         else if(curr->next==NULL)
         {
             del=curr;
             temp->next=NULL;
                 delete del;
                 cout << "The data deleted" << endl;
         }
      }
      void displayR(NodePointer ptr){
          if(ptr==NULL){
              return;
          }
          cout<<"printing recursively:"<<endl;
          while(ptr!=NULL){
          cout<<ptr->data<<"\n";
          ptr=ptr->next;}
          displayR(ptr);
      }
      void displayRecur()
      {
          displayR(head);
      }

};

int main()
{
    DbleLinkedList<int>List;
    List.insertAtLast(555);
    List.insertAtLast(151);
    List.insertAtLast(5);
    List.display();
    List.insertAtFirst(200);
    List.display();
    List.insertAtFirst(212);
    List.display();
    List.deleteLast();
    List.display();
    List.deleteLast();
    List.display();
    List.insertBeforPos(20,1);
    List.display();


}

