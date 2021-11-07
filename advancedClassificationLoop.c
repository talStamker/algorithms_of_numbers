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
    int count=0,x=1;
    for (int i = num; i >0; i/=10)
        {
            count++;
        }
        if((count==1)||(count==0)){
            return 1;
        }
        else{
            for (int i = 0; i < count-1; i++)
            {
                x=x*10;
            }
            while (num>10)
            {
                if (num%10!=num/x)
                {
                    return 0;
                }
                num=num%x;
                num=num/10;
                x=x/10;                
            }
            
            
        }

    return 1;
}
