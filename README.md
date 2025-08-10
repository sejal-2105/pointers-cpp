# pointers-cpp
### **Experiment 1: Basic Pointer Operations**

**Aim:** To write a C++ program to demonstrate basic pointer declaration and operations.

**Theory:** A pointer is a variable that stores the memory address of another variable. The address-of operator (`&`) is used to get the memory address of a variable. The dereference operator (`*`) is used to access the value stored at the address a pointer holds.

**Algorithm:**
1.  Declare an integer variable `a` and initialize it with a value.
2.  Declare an integer pointer `aptr`.
3.  Store the address of `a` in `aptr` using the address-of operator: `aptr = &a`.
4.  Print the value of `a`.
5.  Print the value pointed to by `aptr` using the dereference operator `*aptr`.
6.  Print the address stored in `aptr`.
7.  Print the address of `a` using `&a`.

### **Experiment 2: Displaying Pointer and Variable Information**

**Aim:** To write a C++ program to explicitly display the relationship between a variable, its address, and a pointer.

**Theory:** This experiment reinforces the fundamental concept that a pointer's value is a memory address, and the dereference operator accesses the content at that specific location. By using descriptive labels, it clarifies what each printed value represents.

**Algorithm:**
1.  Declare an integer variable `a` and initialize it to 10.
2.  Declare an integer pointer `aptr` and initialize it with the address of `a`: `int *aptr = &a`.
3.  Print the value of `a`.
4.  Print the memory address of `a`.
5.  Print the value of `aptr`, which is the address it holds.
6.  Print the value pointed to by `aptr` using `*aptr`.

### **Experiment 3: Modifying Values and Array Traversal with Pointers**

**Aim:** To write a C++ program to demonstrate how to modify a variable's value using a pointer and to use a pointer for array traversal.

**Theory:** Pointers can be used to directly change a variable's value by dereferencing and assigning a new value. They are also useful for working with arrays, as an array name itself acts as a pointer to its first element. Incrementing a pointer moves it to the next element in memory.

**Algorithm:**
1.  Declare and initialize an integer variable `a` to 10.
2.  Declare and initialize an integer pointer `aptr` with the address of `a`.
3.  Print the value pointed to by `aptr`.
4.  Modify the value at the address `aptr` points to: `*aptr = 20`.
5.  Print the new value of `a`.
6.  Declare an integer array `arr`.
7.  Print the value of the first element using `*arr`.
8.  Declare a pointer `ptr` and initialize it with the array `arr`.
9.  Use a `for` loop to iterate through the array.
10. Inside the loop, print the value pointed to by `ptr` and then increment `ptr` to move to the next element.

### **Conclusion**

These experiments successfully demonstrated the core concepts of C++ pointers, including their declaration, use of address-of (`&`) and dereference (`*`) operators, and their application in modifying a variable's value and traversing an array.
