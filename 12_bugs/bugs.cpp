/*
Introduction to Bugs
“First actual case of bug being found.”

The story goes that on September 9th, 1947, computer scientist Grace Hopper found a moth in the Harvard Mark II computer’s log book and reported the world’s first 
literal computer bug. However, the term “bug”, in the sense of technical error, dates back at least to 1878 and with Thomas Edison.

On your programming journey, you are destined to encounter innumerable red errors. Some even say, that debugging is over 75% of the development time. But what 
makes a programmer successful isn’t avoiding errors, it’s knowing how to find the solution.

In C++, there are many different ways of classifying errors, but they can be boiled down to four categories:

Compile-time errors: Errors found by the compiler.
Link-time errors: Errors found by the linker when it is trying to combine object files into an executable program.
Run-time errors: Errors found by checks in a running program.
Logic errors: Errors found by the programmer looking for the causes of erroneous results.
In this mini-lesson, we will be looking at different errors and different error messages, and we’ll teach you how to think about errors in your code a little differently. 

Compile-time Errors
When we are writing C++ programs, the compiler is our first line of defense against errors.

There are two types of compile-time errors:

Syntax errors: Errors that occur when we violate the rules of C++ syntax.
Type errors: Errors that occur when there are mismatch between the types we declared.
Some common syntax errors are:

Missing semicolon ;
Missing closing parenthesis ), square bracket ], or curly brace }
Some common type errors are:

Forgetting to declare a variable
Storing a value into the wrong type

Link-time Errors
Sometimes the code compiles fine, but there is still a message because the program needs some function or library that it can’t find. This is known as a link-time error.

As our program gets bigger, it is good practice to divide the program into separate files. After compiling them, the linker takes those separate object files and combines them into a single executable file. Link-time errors are found by the linker when it is trying to combine object files into an executable file.

Some common link-time errors:

Using a function that was never defined (more on this later)
Writing Main() instead of main()

Run-time Errors
If our program has no compile-time errors and no link-time errors, it’ll run. This is where the fun really starts.

Errors which happen during program execution (run-time) after successful compilation are called run-time errors. Run-time errors occur when a program with no compile-time errors and link-time errors asks the computer to do something that the computer is unable to reliably do.

It happens after we give the ./ execute command:

Logic Errors
Once we have removed the compile-time errors, link-time errors, and run-time errors, the program runs successfully. But sometimes, the program doesn’t do what we want it to do or no output is produced. Hmmm…

These types of errors which provide incorrect output, but appears to be error-free, are called logical errors. These are one of the most common errors that happen to beginners and also usually the most difficult to find and eliminate.

Logical errors solely depend on the logical thinking of the programmer. Your job now is to figure out why the program didn’t do what you wanted it to do.

Some common logic errors:

Program logic is flawed
Some “silly” mistake in an if statement or a for/while loop
Note: Logic errors don’t have error messages. Sometimes, programmers use a process called test-driven development (TDD), a way to give logic errors error messages and save yourself a lot of headaches!

Instructions
1.
Compile and execute steps.cpp. There should be no error messages.

But the program is supposed to output steps from #1 - #10. The program is somehow starting from 0…

Find the logic error.

*/
