
#include<iostream>
#include"node.h"

using namespace std;
class stack
{
friend class main;
friend class node;
  private:
  char op;
  node * top;
  node *next;

  public:
  stack()
  {
    this->op=0;
    this->top=NULL;
    this->next=NULL;
  }

char getchar()
{
  return this->op;
}
int  pop(node **top)
{
  int temp;
    if(*top!=NULL)
  {
    temp=(*top)->getdata();
    node * current=*top;
    *top=(*top)->getnext();
    free(current);
    cout<<"popped node contains "<<temp<<endl;
    return temp;
  }
  else
  {
    cout<<"stack umderflow"<<endl;
    return 0;
  }
}

void push(node **top,int val)
{

  if(*top == NULL)
  {
    *top=newnode(*top,val);
    cout<<"stack created with "<<(*top)->getdata()<<endl;
  }
  else
  {
   node *ptr=newnode(*top,val);
    ptr->getnext()=*top;
    *top=ptr;
    cout<<*top<<" node pushed in stack"<<endl;


  }

}
};