#include<stdio.h>
#include "NumClass.h"



int isPalindrome(int num){
    if (num<10&&num>=0)
    {
        return 1;
    }
    
    int x=1;
    for (int i = num; i > 10; i=i/10)
    {
        x=x*10;
    }
    if(num/x!=num%10){
        return 0;
    }
    else{
        num=num%x;
        num=num/10;
        return isPalindrome(num);
    }

}
int isArmstrongfunc(int num,int count,int sum){
    if ((sum==0)&&(num<=0))
    {
        return 1;
    }
    else{
        if((sum<0)||((sum>0)&&(num<=0))){
            return 0;
        }
        else{
            int x=num%10,calcu=1;
            for (int i = 0; i < count; i++)
            {
                calcu=calcu*x;
            }
            return isArmstrongfunc(num/10,count,sum-calcu);
            
        }
    }
}
int isArmstrong(int num){
    int count=0;

    for (int i = num; i >0; i=i/10)
    {
        count++;
    }
    return isArmstrongfunc(num,count,num);
    
    
}
