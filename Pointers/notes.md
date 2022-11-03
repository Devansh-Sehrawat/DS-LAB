Why pointers
Memory for a program is divided into 3 sections 
    Heap
    Stack
    Code Section

normally without pointer the code can access only the code section and the stack but it won't be able access the heap for dynamic allocation and other use case, with the help of pointer system programming is feasible via C/C++ as it can access almost anything with the help of the pointers

A. Basics
        A.1. declaration of a pointer - where p is the address variable for datatype int

                int *p;

        A.2. initialization of a pointer - & represents the address of a variable

                p = &x 

        A.3. dereferrencing of a pointer - it gives out the value of stored at the address stored in the p basically value of x

                *p

B. Dynamic Allocation
        All the initialized variable are stored in stack memory not in heap aka static allocation, it happens at compile time  for example

                int a = {1,2,3,4}
                int *p;

        For dynamic allocation in heap we use the keyword new, it happens during run time for example

                p = new int[5];
                int *p = new int[5];

        !! Important !!
                The space allocated in the stack is automatically cleaned but the space allocated in heap isn't. So we gotta do manual cleaning for that via keword delete
                
                delete []p
                
                One should never have uninitialized pointers as it can point to any value in the system and which result in system crashes

                *p = nullptr;

C. Pointer Arithmetic
        Pointer allows 5 types of arithmetic operations
        C.1 p++ : going to the next element
        C.2 p-- : going back to previous element 
        C.3 p+2 : takin two(finite) step forwards
        C.4 p-2 : takin two(finite) steps backward
        C.5 p-q : distance between two pointers, if +ve p is farther compared to else vice versa
        
