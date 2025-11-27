# Backtrack

The most elegant brute force algorithm that leverages memory allocation mechanics in C, C++, and Java

Backtracking is in essence a dfs walk of a binary tree. At each node, it considers whether to include the node's 
data to build the current tentative solution. If upon reaching the leaf of the tree we find the solution does not meet
the criterion, we will pop the last-chosen element, take one step back, and explore other unchecked options. 

Stack allocation refers to the process of assigning memory for local variables and function calls in the call stack. 
When a function is called, it is automatically pushed, and popped immediately when the function ends.
If the function calls another function, the called function will be further pushed into the stack during execution.

This saves us a lot of effort building an explicit stack in DFS.


**(Side Note: Stack vs Heap allocation)** Heap memory is allocated dynamically during program execution. Unlike stack memory, 
heap memory is not freed automatically when a function ends. 
Instead, it requires manual deallocation (In C/C++) or a garbage collector (in Java or Python) to reclaim unused memory.
The name heap has no relation to the heap data structure; it simply refers to a large pool of 
memory available for dynamic allocation. Whenever an object is created, it is stored in heap memory, while references to these objects are stored in stack memory.