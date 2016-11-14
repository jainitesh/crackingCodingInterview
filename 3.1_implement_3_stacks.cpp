#include<iostream>

struct Value{
  int value;
  int prev;
};
#define STACK_SIZE 30
struct Stack{
  Value val[STACK_SIZE];
  int stacks [] = { -1, -1, -1};
  std::List<int> l;
  Stack ()
  {
    for (int i = 0; i < STACK_SIZE; i++)
    {
       l[i] = i;
    }
  }
  bool push (int index, int val);
  int pop (int index);
  int peek (int index);
};

bool Stack::push(int index, int val)
{
  int top = stack[index];
  int free_index = l.front();
  l.pop_front();
  val[free_index].value = val;
  val[free_index].prev = top; 
  top = free_index;
}
