#include <stdio.h>
int main()
{
    int x ,y, z;
    x=100;
    y=20;
    z=30;
    int *ptr1, *ptr2, *ptr3;
    ptr1= &x;
    ptr2=&y;
    ptr3=&z;
    if(*ptr1>*ptr2 && *ptr1>*ptr3){
        printf("The Largest number : %d\n",*ptr1);
    }
    else if(*ptr2>*ptr1 && *ptr2 >*ptr3){
        printf("The Largest Number : %d\n",*ptr2);
    }
  else{
    printf("The largest number :%d",*ptr3);
  }
    return 0;
}
