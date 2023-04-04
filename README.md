# multithreading-1
C++ 11 and onwards introduced, multithreading. This example allows 
multiple parts of the same program to be executed at the same time 
using multithreading, instead of multi-tasking.

Using "dummy data" that one may find through an API, this example uses
a function to update a std::map of Cities (string) and temperatures 
(int) every 2000ms using #include <chrono>. Using #include <thread> 
to initialize the display of the this function in an infinite loop. 
