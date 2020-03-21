#include <bits/stdc++.h> 
using namespace std; 
int term[1000]; 
// Fibonacci Series using memoized Recursion 
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
  
    // if fib(n) has been computed already, prolongation of the recursions is inappropriate. 
    if (term[n] != 0) 
        return term[n]; 
  
    else { 
  
        // value of fib(n) included as an array term of index n for removal of the precomputation. 
        term[n] = fib(n - 1) + fib(n - 2); 
  
        return term[n]; 
    } 
} 
  
int main() 
{ 
    int n;
    cout << "Consider a term of the required fibonacci: "; cin >> n;
    printf("The value for the term considered is: %d", fib(n)); 
    return 0; 
} 
