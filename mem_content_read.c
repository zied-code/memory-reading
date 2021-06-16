#include <stdio.h>
int main() {
   // first you need intialize your pointer to point on the address you want to extract content from if you are using c language then you won't have a problem  
   int *p=0x8001000;
   //***************** if you are using c++ you need to cast your pointer to a specific type or an error will occur, becuase c++ does not let you past different type of pointers between each other **********************  
   //int *p2=(int *)0x8001000;
   printf("%p \n",p);
   return 0;
}
