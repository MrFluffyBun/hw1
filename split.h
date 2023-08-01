#ifndef SPLIT_H
#define SPLIT_H
//testing git


struct Node 
{
  int value;
  Node* next;

  /**
   * Initializing constructor
   */
  Node(int v, Node* n)
  {
    value = v;
    next = n;
  }
};

void split(Node*& in, Node*& odds, Node*& evens);
// WRITE YOUR CODE HERE
#endif
