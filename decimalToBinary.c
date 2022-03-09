//This program will convert numbers in base 10 to binary

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val128, val64, val32, val16, val8, val4, val2, val1;

    int input, rem;

    printf("Please enter the number you want to convert to binary: ");
    scanf("%d", &input);

        if(input < 128)
        {
            val128 = 0;  
        }
        else
        {
            val128 = input/128;   
        }
        rem = input%128;

        if(rem < 64)
        {
            val64 = 0;
        }   
        else
        {
            val64 = rem/64;
        }
         rem = rem%64;

          if(rem < 32)
        {
            val32 = 0;
        }   
        else
        {
            val32 = rem/32; 
        }
        rem = rem%32; 

         if(rem < 16)
        {
            val16 = 0;
        }   
        else
        {
            val16 = rem/16;   
        }
        rem = rem%16;

         if(rem < 8)
        {
            val8 = 0;
        }   
        else
        {
            val8 = rem/8;   
        }
        rem = rem%8;

        if(rem < 4)
        {
            val4 = 0;
        }   
        else
        {
            val4 = rem/4;   
        }
        rem = rem%4;

         if(rem < 2)
        {
            val2 = 0;
        }   
        else
        {
            val2 = rem/2;   
        }
        rem = rem%2;

         if(rem < 1)
        {
            val1 = 0;
        }   
        else
        {
            val1 = rem/1;   
        }
        rem = rem%1;

       printf("The value of %d in Binary is : %d%d%d%d%d%d%d%d", input, val128, val64, val32, val16, val8, val4, val2, val1); 

    return 0;
}