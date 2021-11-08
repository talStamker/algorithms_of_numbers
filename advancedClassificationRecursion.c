#include<stdio.h>
#include "NumClass.h"
int isPalindrom(int number,int Number,int rev){

if(number==0){
    if(Number==rev){
    return 1;
    }else{
    return 0;
    }
}
int reminder=number%10;
rev=rev*10+reminder;
return isPalindrom(number/10,Number,rev);

}


int isPalindrome(int num){
return isPalindrom(num,num,0);
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

