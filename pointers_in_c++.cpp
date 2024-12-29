// Online C++ compiler to run C++ program online
#include <iostream>
#include<memory>
using namespace std;
void greet() {
    cout << "Hello, World!" << endl;
}
int main() {
 
   int x = 10;
   // VOID pointer
  void* vptr = &x; /* A generic pointer that can hold the
                address of any data type but needs casting to dereference. */
  cout << "Value of x: " << *(int*)vptr << endl;
  
  // NULL pointer 
  
  int* Nptr = NULL;
  
  // function pointer
  void (*funcPtr)() = greet;
//return name  parameter 


/* Smart Pointers
Modern C++ pointers (unique_ptr, shared_ptr, weak_ptr) that automatically manage memory and prevent memory leaks.

Unique Pointer: Exclusive ownership of the memory.

Shared Pointer: in shared pointers (std::shared_ptr) means that multiple shared pointers can point to the same dynamically allocated memory. 
                The memory remains valid as long as at least one shared pointer points to it.


               here reference count is use to track how many shared_ptr 
                is pointing the same memory location.

Weak Pointer: A weak_ptr is used to observe memory managed by a shared_ptr without participating in its ownership or reference count.  */

unique_ptr<int> uptr = make_unique<int>(60);
cout << *uptr << endl;

shared_ptr<int> sptr = make_shared<int>(70);// reference_count = 1
shared_ptr<int> sptr2 = sptr; // reference_count = 2
cout << *sptr << endl;

weak_ptr<int> wptr = sptr;

    return 0;
}
