/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
#include <cstddef>

/* Add a prototype for a helper function here if you need */

void split(Node*& in, Node*& odds, Node*& evens)
{
  /* Add code here */
// WRITE YOUR CODE HERE

//recursive call: if you're not at the end of the list, call split again with the next node
split(in->next, odds, evens);

//base cases: you're at the end of the list, so next = nullptr
if (in->next == nullptr) {
  //test if number is even or odd
  //if even, add to evens list
  if ((in->value % 2 ) == 0) {

    //if evens list is empty, add to head
    if (evens == NULL) {
      evens = in;
    }

    //if evens list is not empty, add to end
    else if(evens != NULL) {
      evens->next = in;
      evens = evens->next;
    }
  }
  //if odd, add to odds list
  else if ((in->value % 2 ) == 1) {

    if (odds == NULL) {
      odds = in;
    }

    //if odds list is not empty, add to end
    else if(odds != NULL) {
      odds->next = in;
      odds = odds->next;
    }
  }

  //remove last node from in list
  in = NULL;

}

}

/* If you needed a helper function, write it here */

// WRITE YOUR CODE HERE