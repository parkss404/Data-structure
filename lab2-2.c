#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[----- [박성준] [2021040026] -----]\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // 초기설정 i값 = 1234
printf("address of i == %p\n", &i); // i값의 주소 값 
printf("value of ptr == %p\n", ptr); // ptr = i의 주소 값
printf("address of ptr == %p\n", &ptr);//&ptr = ptr의 주소값
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); // 초기설정 i값 = 1234
printf("address of i == %p\n", &i); // i값의 주소 값 
printf("value of ptr == %p\n", ptr);// ptr = i의 주소 값
printf("address of ptr == %p\n", &ptr);//&ptr = ptr의 주소값
printf("value of *ptr == %d\n", *ptr);//*ptr = ptr의 내용물 
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);//초기설정 i값 = 1234
printf("address of i == %p\n", &i);// i값의 주소 값 
printf("value of ptr == %p\n", ptr);// ptr = i의 주소 값
printf("address of ptr == %p\n", &ptr);//&ptr = ptr의 주소값
printf("value of *ptr == %d\n", *ptr);//*ptr = ptr의 내용물 
printf("value of dptr == %p\n", dptr);//dptr = ptr의 주소 값,여기서는 그 주소값이 저장된 주소 
printf("address of dptr == %p\n", &dptr);//최종적으로 도달하는 ptr의 주소 값
printf("value of *dptr == %p\n", *dptr);//ptr 값 = i의 주소값
printf("value of **dptr == %d\n", **dptr);//i의 값
*ptr = 7777; /* changing the value of *ptr -> i=7777*/
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);//i의 값 = 7777
printf("value of *ptr == %d\n", *ptr);//위에 의해 *ptr = 7777
printf("value of **dptr == %d\n", **dptr);//dptr = &ptr, i의 값 = 7777 
**dptr = 8888; /* changing the value of **dptr ->i=8888 */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);// i의 값 = 8888
printf("value of *ptr == %d\n", *ptr);// i의 값 = 8888 *ptr = **dptr = i
printf("value of **dptr == %d\n", **dptr);//  i의 값 = 8888 *ptr = **dptr = i
return 0;
}
