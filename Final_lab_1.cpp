#include<iostream>
using namespace std;

class Mystack
{
    private:
        char *datas;
        int maxSize=0;
        int top=0;

    public:
        Mystack(int maxSize)
        {
        this->maxSize=maxSize;
        datas= new char [maxSize];
        }
        bool isfull()
        {
            return(top==maxSize);
        }
        bool isEmpty()
        {
            return(top==0);
        }
        void push(char ch)
        {
            if(!isfull())
            {
                datas[top]=ch;
                top++;
            }

        }
        int topElement ()
        {
            return datas[top-1];
        }
        int pop()
        {
           if(!isEmpty())
            {
               return datas[--top];
            }
            else
            {
               return CHAR_MAX;
            }
         }
        void StackResize(int newMaxSize)
        {
            char *temp=new char [newMaxSize];
            for(int i=0;i<this->maxSize;i++)
            {
                temp[i]=datas[i];
            }
            delete datas;
            this->maxSize=newMaxSize;
            datas=temp;
        }
};

int getpriority(char c)
{
  if  (c=='+'||c=='-')
  {
      return 1;
  }
  else if(c=='*'||c=='/'||c=='%')
  {
      return 2;
  }
}
int main()
{
    Mystack stack(20);

    char infix  [] = "2*3/(2-1)+5*3";
    int length=sizeof(infix)/sizeof(infix[0]);

    char *postfix=new char[length];
    int postIndex=0;

    for(int i=0;i<length-1;i++){
        if(infix[i]>=48 && infix[i]<=57){
            postfix[postIndex]=infix[i];
            postIndex++;
        }
        else if(infix[i]=='('){
            stack.push('(');
        }
        else if(infix[i]==')'){
            while(stack.topElement() != '('){
                postfix[postIndex]=stack.topElement();
                postIndex++;
                stack.pop();
            }
            stack.pop();
        }
        else if(infix[i]=='+'||
                infix[i]=='-'||
                infix[i]=='*'||
                infix[i]=='/'||
                infix[i]=='%'){
            while(true){
               if(stack.isEmpty() || stack.topElement()=='('){
                   stack.push(infix[i]);
                   break;
               }
               else if(getpriority(infix[i])>getpriority(stack.topElement())){
                   stack.push(infix[i]);
                   break;
               }
               else{
                   postfix[postIndex]= stack.topElement();
                   postIndex++;
                   stack.pop();
               }
            }
        }
    }
    while(!stack.isEmpty()){
        postfix[postIndex]=stack.topElement();
        postIndex++;
        stack.pop();
    }
    for(int i=0;i<postIndex;i++){
        cout<<postfix[i];
    }
    return 0;
}
