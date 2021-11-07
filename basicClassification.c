#include <stdio.h>
 #include "NumClass.h"
int isPrime(int num)
{
    if(num==1){
        return 1;
    }
    else{
        for (int i = 2; i < num; i++)
        {
            if(num%i==0)
                return 0;
        }
        return 1;
        
    }

}
int isStrong(int num){
    int num2=num;
    int calculate=0;
    while (num>0)
    {
           int x=1;
        for (int i = 1; i <=num%10; i++)
        {
            x=x*i;
        }
        calculate=calculate+x;
        num/=10;
        
    }
    if (num2==calculate)
    {
        return 1;
    }
    else{
        return 0;
    }
    
    
}
