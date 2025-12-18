//Problem

    /*
    You are given hours, minutes, and seconds.
    Convert the entire time into total seconds.
    
    Important Instructions
    
    Do NOT write the entire logic in main().
    Create a function int toSeconds(int hours, int minutes, int seconds) and call it from main().
    Input Format
    
    Three space-separated integers: {hours} {minutes} {seconds}
    
    Constraints
    
    0 ≤ hours ≤ 100
    0 ≤ minutes < 60
    0 ≤ seconds < 60
    Output Format
    
    Single line printing the result as:
    Total seconds: {res}
    
    Sample Input 0
    
    1 0 0
    Sample Output 0
    
    Total seconds: 3600
    Sample Input 1
    
    0 10 30
    Sample Output 1
    
    Total seconds: 630
      */

//SOLUTION

    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    int toSeconds(int hours,int minutes,int seconds){
        int res=hours*3600+minutes*60+seconds;
        return res;
    }
    
    int main() {
        int hours,minutes,seconds,totalsec;
        scanf("%d %d %d",&hours,&minutes,&seconds);
        
         if (hours >= 0 && hours <= 100 &&
             minutes >= 0 && minutes < 60 &&
             seconds >= 0 && seconds < 60)
        {
        totalsec=toSeconds(hours,minutes,seconds);
        
        printf("Total seconds: %d",totalsec);
         }
        else
        {
            printf("Invalid Input\n");
        }
        
        return 0;
    }
