//Problem

    /*
     Write a program that takes two integers as input and prints their sum.
     
    Input Format
    
    Two unique integers a and b.
    
    Constraints
    
    -10^4 ≤ a, b ≤ 10^4
    Inputs will always be valid integers
    Output Format
    
    Single line printing the result as: The sum of {a} and {b} is {sum}.
    
    Sample Input 0
    
    3 5
    Sample Output 0
    
    The sum of 3 and 5 is 8.
    Sample Input 1
    
    10 20
    Sample Output 1
    
    The sum of 10 and 20 is 30.
    Sample Input 2
    
    7 2
    Sample Output 2
    
    The sum of 7 and 2 is 9.
      */

//SOLUTION

    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    
    int main() {
        int a,b,sum;
        scanf("%d %d",&a,&b);
        
        sum=a+b;
        
        printf("The sum of %d and %d is %d.",a,b,sum);
            
        return 0;
    }
