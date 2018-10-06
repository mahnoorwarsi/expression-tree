#include<iostream>
#include"main.h"
using namespace std;

class node
{
  friend class main;
  friend class stack;
  private:
   int data;
  node* next;

  public:
 node()
{
  this->data=0;
  this->next=NULL;

}
int getdata()
{
  return this->data;
}
node *getnext()
{
  return this->next;
}
node * newnode(node *top,int val)
{
 node* ptr=new node;
    ptr->data=val;
    ptr->next=NULL;
    cout<<"node created"<<endl;
    return ptr;
}
};