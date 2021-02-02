#include "function1.h"
#include "function2.h"


int main() 
{ 
    int val[] = { 10, 20, 30 }; 
    int wt[] = { 1, 1, 1 }; 
    int W = 2; 
    int n = sizeof(val) / sizeof(val[0]); 
    cout << knapSack(W, wt, val, n); 
    return 0; 
}
