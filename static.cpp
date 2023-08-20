/*
The static keyword has 2 meanings:
- static outside of the class/struct:the linkage that you declare to be sattic is going to be internal, meaning 
 that static varaible will only be visible to that translation unit that you've defined it in.
- static inside of the class/struct: the static variable will share memory with all the instances of the class/struct. Meaning
that across all instances of the class, there is going to be that one instance of that static variable.

Similarly for static method in a class, there's no instance of that class being passed into that method.


*/
static int s_Variable = 5;


