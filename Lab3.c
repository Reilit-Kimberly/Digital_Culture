#include <stdio.h>

int main()
{
    unsigned int num1,num2,num3;
    printf("Enter a decimal number:");
    scanf("%d", &num1); //1
    printf("Number in hexadecimal(16) system:%x\n",num1); //2
    printf("Number in hexadecimal(16) system for the second time:%x\n",num1); //3
    printf("Number in hexadecimal(16) system moved 4 bits left:%x\n",num1 << 4); //3
    printf("Number in hexadecimal(16) system for the third time:%x\n",num1); //4
    printf("Number in hexadecimal(16) system, but negative:%x\n",~num1);

    printf("Enter a hexadecimal(16) number:"); //5
    scanf("%x", &num2); //5
    num3 =("%x",num1);
    printf("Operation and:%x\n",num3 & num2); //5
}
