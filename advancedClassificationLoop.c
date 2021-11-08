#include<stdio.h>
#include "NumClass.h"
 
 
int isArmstrong(int num){
int count=0,calcu=0,x,num2;
        for (int i = num; i >0; i/=10)
        {
            count++;
        }
        num2=num;
        while (num>0)
        {
            x=num%10;
            int k=1;
            for(int i = 0; i < count; i++)
            {
                k=k*x;
            }
            calcu=calcu+k;
            num/=10;
        }
        if (num2==calcu)
        {
        
            return 1;
        }
        return 0; 

}

int isPalindrome(int num){
    int rev=0,reminder,Number=num;
    while (num!=0)
    {
        reminder=num%10;
        rev=rev*10+reminder;
        num/=10;
    }
    if(Number==rev)
    return 1;
    else
    return 0;
    
}


