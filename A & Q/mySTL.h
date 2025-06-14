#include<iostream>
using namespace std;
template<typename Type>


class MyLinkedList
{
private:
    typedef class Node{
     public:
         Type data;
         Node *next;
         Node(){

         }
         Node(Type value){
             data=value;
             next=NULL;
         }

    } *NodePointer;

    NodePointer head=NULL;
    NodePointer current=NULL;

public:
    NodePointer getHead()
    {
        return head;
    }

    NodePointer createNode(Type value){
       return new Node(value);
    }

    void insertAtFirst(Type value){
       NodePointer newNode=createNode(value);
       newNode->next=head;
       head=newNode;
    }
    //inserting value before p valued node
    void insertBefore(Type value,Type p){
        NodePointer newNode=createNode(value);
        NodePointer temp=head;
        if(temp->data ==p){
            newNode->next=head;
            head=newNode;
        }
        else if(temp->data !=p){
           while(temp->next->data !=p){
              temp=temp->next;
          }
          newNode->next=temp->next;
          temp->next=newNode;
        }
    }
    // inserting value before p positioned node
      void insertBeforeP(Type value,int p)
    {
        NodePointer newNode=createNode(value);
        NodePointer temp=head;
        int count=0;
           while(temp!=NULL)
           {
               temp=temp->next;
               count++;
           }
        if(p==1)
        {
           newNode->next=head;
           head=newNode;
        }
        else if(p<1)
        {
            cout<<"Invalid position "<<endl;
        }
        else if(p>1 && p<=count)
        {
            temp=head;
          for(int i=1;i<p-1;i++)
            {
              temp=temp->next;

            }
            newNode->next=temp->next;
            temp->next=newNode;
        }
       else
       {
           cout<<"don't have "<<p<<" node in the list"<<endl;
           }
    }

    void insertAtLast(Type value){
       NodePointer temp=head;
       if(temp==NULL){
          head=createNode(value);
          current=head;
       }
       else{
          current->next=createNode(value);
          current=current->next;
       }
    }

      void insertNelements(int n){
         Type *elements=new Type[n];
         cout<<"enter "<< n<<" elements below:"<<endl;
         for(int i=0;i<n;i++){
            cin>>elements[i];
         }

         for(int i=0;i<n;i++){
            insertAtLast(elements[i]);
         }
         delete elements;
      }
      //inserting value after p valued node
      void insertAfter(Type value, Type p){
          NodePointer newNode=createNode(value);
          NodePointer temp=head;
          while(temp->data !=p){
              temp=temp->next;
          }
          newNode->next=temp->next;
          temp->next=newNode;
      }
       //inserting after p positioned node
      void insertAfterP(Type value,int p)
      {
          NodePointer newNode=createNode(value);
        NodePointer temp=head;
        int count=0;
           while(temp!=NULL)
           {
               temp=temp->next;
               count++;
           }
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
               temp->next=newNode;
           }

           else{cout<<"don't have "<<p<<" node in the list"<<endl;}


      }


      void deleteFirst(){
          NodePointer oldHead=head;
          head=head->next;
          delete oldHead;
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
                  NodePointer temp = head;
                  while(temp->next->next != NULL){
                     temp = temp->next;
                  }
                  temp->next = NULL;
                  current=temp;
             }
          }
        }

     void deleteData(Type p){
        NodePointer delData = NULL;
        NodePointer temp = head;
        NodePointer curr = head;

        while(curr != NULL && curr->data != p){
            temp = curr;
            curr = curr->next;
       }

       if(curr == NULL){
            cout << p << " is not in the list." << endl;
            delete delData;
       }
       else{
            delData = curr;
            curr = curr->next;
            temp->next = curr;
            if(delData == head){
                    head = head->next;
                    temp = NULL;
            }
            delete delData;

            cout << "The data " << p<< " was deleted" << endl;

    }
}

      void display(){
          NodePointer temp=head;
          while(temp != NULL){
              cout<<temp->data<<"\t";
              temp=temp->next;
          }
          cout<<endl;
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
template<typename Type>
class MyDLinkedList
{
private:
    typedef class Node{
     public:
         Type data;
         Node *prev;
         Node *next;
         Node(){

         }
         Node(Type value){
             data=value;
             prev=NULL;
             next=NULL;
         }

    } *NodePointer;

    NodePointer head=NULL;
    NodePointer tail=NULL;

public:
    NodePointer getHead()
    {
        return head;
    }

    NodePointer createNode(Type value){
       return new Node(value);
    }

    void insertAtLast(Type value){
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
    void insertAtFirst(Type value){
       NodePointer newNode=createNode(value);
       newNode->next=head;
       newNode->prev=NULL;
       head->prev=newNode;
       head=newNode;

    }
     void insertNElements(int n){
         Type *elements=new Type[n];
         cout<<"enter "<< n<<" elements below:"<<endl;
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
      void deleteLast()
      {
           if(head==NULL)
            {
               cout<<"Linked is now empty"<<endl;
            }
          else if(head != NULL)
            {
              if(head->next == NULL){
                  head = NULL;
              }
              else
              {
                  NodePointer temp=tail;
                  temp->prev->next=NULL;
                  tail=temp->prev;
                  delete temp;
              }
            }
      }
      void insertBeforPos(Type value,int p)
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
               if(p==1)
               {
                   newNode->next=head;
                   newNode->prev=NULL;
                   head=newNode;
               }
               else if(p<1)
               {
                   cout<<"Invalid position "<<endl;
               }
               else if(p>=1 && p<=count)
               {
                   temp=head;
                   for(int i=1;i<p-1;i++)
                   {
                        temp=temp->next;

                   }
                   newNode->next=temp->next;
                   newNode->prev=temp;
                   temp->next=newNode;
              }
              else
              {
                  cout<<"don't have "<<p<<" node in the list"<<endl;
              }
           }
           else{cout<<"List is empty"<<endl;}
      }
      void insertAfterPos(Type value,int p)
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
      void deleteData(Type p){
        NodePointer delData = NULL;
        NodePointer temp = head;
        NodePointer curr = head;

        while(curr != NULL && curr->data != p){
            temp = curr;
            curr = curr->next;
       }

       if(curr == NULL){
            cout << p << " is not in the list." << endl;
            delete delData;
       }
       else if(curr->next!=NULL)
        {
            delData = curr;
            curr = curr->next;
            curr->prev=temp;
            temp->next = curr;
            if(delData == head){
                    head = head->next;
                    temp = NULL;
            }
            delete delData;

            cout << "The data " << p<< " was deleted" << endl;

         }
         else if(curr->next==NULL)
         {
             delData=curr;
             temp->next=NULL;
                 delete delData;
                 cout << "The data " << p<< " was deleted" << endl;
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
template<typename Type>
class MyStack
{
private:
   typedef class Node{
     public:
         Type data;
         Node *next;
         Node(){

         }
         Node(Type value){
             data=value;
             next=NULL;
         }

    } *NodePointer;

    NodePointer top=NULL;
public:
     NodePointer createNode(Type value){
       return new Node(value);
    }
void push(Type value) {
   NodePointer newnode =createNode(value);
   newnode->data = value;
   newnode->next = top;
   top = newnode;
}

void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void topElement()
{
    NodePointer temp=top;
   if(top==NULL)
   cout<<"stack is empty";
   else
    {
      cout<<"Top Element: ";
         cout<< temp->data;
    }
   cout<<endl;
}
};

template<typename Type>
class MyQueue
{
private:
     typedef class Node{
     public:
         Type data;
         Node *next;
         Node(){

         }
         Node(Type value){
             data=value;
             next=NULL;
         }

    } *NodePointer;

    NodePointer front=NULL;
    NodePointer rear=NULL;
public:
     NodePointer createNode(Type value){
       return new Node(value);
    }
    void enqueue(Type value)
    {
        NodePointer temp;
       if (rear == NULL && front==NULL)
       {
           rear =createNode(value);
           rear->next = NULL;
           rear->data = value;
           front = rear;
       }
       else
        {
            temp=createNode(value);
            rear->next = temp;
            temp->data = value;
            temp->next = NULL;
            rear = temp;
        }
    }
    void dequeue()
    {
        if(front==NULL )
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            NodePointer temp;
	        temp = front;
	        front = front->next;
	        delete temp;
        }
    }
    void frontElement()
    {
        NodePointer temp=front;
        if(front==NULL)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<"Front value : ";
            cout<<temp->data<<endl;

        }
    }
    void rearElement()
    {
        NodePointer temp=rear;
        if(rear==NULL)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<"Rear value: ";
            cout<<temp->data<<endl;
        }
    }
};
template<typename Type>
class MyBST
{
private:
    typedef class Node
    {
     public:
         Type data;
         Node *left;
         Node *right;
         Node(){

         }
         Node(Type value){
             data=value;
             left=NULL;
             right=NULL;
         }

     }*NodePointer;

     NodePointer head=NULL;
public:
     NodePointer getHead()
    {
        return head;
    }

    NodePointer createNode(Type value)
    {
       return new Node(value);
    }
    NodePointer insertIntoBST(NodePointer ptr,Type value)
    {
	   if (ptr==NULL)
	   {
	       ptr=createNode(value);

	   }
       else if (value<(ptr->data))
	   {
		  if(ptr->left==NULL)
          {
              ptr->left=createNode(value);
          }
          else  insertIntoBST(ptr->left,value);
	   }
	   else if(value>ptr->data)
	   {
	       if(ptr->right==NULL)
          {
              ptr->right=createNode(value);
          }
          else  insertIntoBST(ptr->right,value);
	   }
	   return ptr;
     }

    void insert(Type value)
    {
       insertIntoBST(head,value);
    }
    void inOrder(NodePointer ptr)
    {
       if(ptr!= NULL)
       {
           inOrder(ptr->left);
           cout<<ptr->data<<" ";
           inOrder(ptr->right);
        }
       else if(ptr==NULL){cout<<"empty"<<endl;}
      }

    void in()
    {
        inOrder(head);
    }
    void preOrder(NodePointer ptr)
   {
       if(ptr!=NULL)
        {
           cout<<ptr->data<<"  ";
          inOrder(ptr->left);
            inOrder(ptr->right);
         }
       else{cout<<"empty"<<endl;}
    }
    void pre()
    {
       preOrder(head);
    }
   void postOrder(NodePointer ptr)
   {
      if(ptr!=NULL)
      {
        inOrder(ptr->left);
        inOrder(ptr->right);
        cout<<ptr->data;
      }
     else{cout<<"empty"<<endl;}
   }
   void post()
   {
       postOrder(head);
   }
   void searchIntoTree(NodePointer ptr,Type value)
   {
       NodePointer temp=ptr;
       while(temp!=NULL)
       {
           if(temp->data==value)
           {
               cout<<"Data is in the tree."<<endl;
               return;
           }
           else if(temp->data > value)
           {
               temp=temp->left;
           }
           else
           {
               temp=temp->right;
           }
       }
       cout<<"Data is not in the tree."<<endl;
   }
   void search(Type value)
   {
       searchIntoTree(head,value);
   }
};
