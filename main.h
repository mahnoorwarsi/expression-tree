#include<iostream>
using namespace std;

class main
{
friend class stack;

int precedance(char op)
{
  if(op == '/' || op == '*')
  {
    return 5;
  }
  else if(op == '+' || op == '-')
  {
    return 4;
  }
  else if(op == '<' || op == '>' || op == '=' || op == '~' )
  {
    return 3;
  }
  else if(op == '&' )
  {
    return 2;
  }
  else if(op == '|')
  {
    return 1;
  }
  
}

void  inputeq(char eq[100])
{
 int i;
  cout<<"enter infix equation"<<endl;
  for(i=0;i<100;i++)
  {
    cin>>eq[i];
  
  }
  
}
void working(char eq[100])
{
  for(int i=0;i<100;i++)
  {
    if(eq[i].getchar() < "10" || eq[i].getchar() >'0'  )
    {
    operand[100].push(eq[i]);
    cout<<"<<operand pushed in operand[]"<<endl;
    }
  
  else if(eq[i].getchar() < 47 || eq[i].getchar() > 40 )
  {
    operators[100].push(eq[i]);
    cout<<"<<operand pushed in operator[]"<<endl;
  }
  else
  cout<<"invalid entry in equation "<<eq[i].getchar()<<endl;
  }
}


void displayeq(char eq[100])
{
  
  cout<<"displaying infix equation"<<endl;
  for(int i=0;i<100;i++)
  {
    cout<<eq[i]<<endl;
  
  }
}



};