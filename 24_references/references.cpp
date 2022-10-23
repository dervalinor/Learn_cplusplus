/*
Introduction
A computer’s memory is a sequence of bytes. We can number the bytes from 0 to the last one. Each number, known as an address, represents a location in the memory.

Everything we put into memory has an address. For example, when we declare and initialize an int variable named power:

int power = 9000;
This will set aside an int-size piece of memory for the variable power somewhere and put the value 9000 into that memory. But where is “somewhere”? How is it useful?

In this lesson, we will answer these questions by learning about:

References
Pointers
These are some of the most powerful features in C++; they allow programmers to directly manipulate memory – the most critical and scarce resource in computer – in order to optimize performance.

However, references and pointers are also sometimes considered two of the most complex and difficult features in C++.

So let’s get started.

References
In C++, a reference variable is an alias for something else, that is, another name for an already existing variable.

So suppose we make Sonny a reference to someone named Songqiao. You can refer to the person as either Sonny or Songqiao.

Let’s take a look at how we can do this with code. Suppose we have an int variable already called songqiao, we can create an alias to it by using the & sign in the declaration:

int &sonny = songqiao;
So here, we made sonny a reference to songqiao.

Now when we make changes to sonny (add 1, subtract 2, etc), songqiao also changes.

Two things to note about references:

Anything we do to the reference also happens to the original.
Aliases cannot be changed to alias something else.
Instructions
1.
We have a variable called soda declared and initialized to 99.

Declare another int variable called pop and make it a reference to soda.


Stuck? Get a hint
2.
Let’s add 1 to pop.


Stuck? Get a hint
3.
Print out soda and pop.

*/

#include <iostream>

int main() {

  int soda = 99;

  int &pop = soda;

  pop ++;

  std::cout << soda << "\n";
  std::cout << pop << "\n";

}
