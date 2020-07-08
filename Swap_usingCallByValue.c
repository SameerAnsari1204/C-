 // call by value - While calling a function, we pass values of variables to it.
 //Such functions are known as �Call By Values�.
  
#include <stdio.h> 
  
// Function Prototype 
void swapx(int x, int y); 
  
// Main function 
int main() 
{ 
    int a = 10, b = 20; 
  
    // Pass by Values 
    swapx(a, b); 
  
    printf("a=%d b=%d\n", a, b); 
  
    return 0; 
} 
  
// Swap functions that swaps 
// two values 
void swapx(int x, int y) 
{ 
    int t; 
  
    t = x; 
    x = y; 
    y = t; 
  
    printf("x=%d y=%d\n", x, y); 
}
