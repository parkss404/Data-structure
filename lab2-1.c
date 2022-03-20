#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("[----- [박성준] [2021040026] -----]\n");
printf("Size of char: %ld byte\n",sizeof(charType)); //charType = char의 크기 = 1바이트 
printf("Size of int: %ld bytes\n",sizeof(integerType));//integerType의 크기 = int의 크기 = 4바이트
printf("Size of float: %ld bytes\n",sizeof(floatType));//floatType의 크기 = float의 크기 = 4바이트 
printf("Size of double: %ld bytes\n",sizeof(doubleType));//doubleType의 크기 = double의 크기 = 8바이트
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char));//char의 크기 = 1바이트 
printf("Size of int: %ld bytes\n",sizeof(int));//int의 크기 = 4바이트
printf("Size of float: %ld bytes\n",sizeof(float));//float의 크기 = 4바이트 
printf("Size of double: %ld bytes\n",sizeof(double));//double의 크기 = 8바이트
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));//char의 주소 크기 = 8바이트
printf("Size of int*: %ld bytes\n",sizeof(int*));//int의 주소 크기 = 8바이트
printf("Size of float*: %ld bytes\n",sizeof(float*));//float의 주소 크기 = 4바이트 
printf("Size of double*: %ld bytes\n",sizeof(double*));//double의 주소 크기 = 8바이트 
return 0;
}
