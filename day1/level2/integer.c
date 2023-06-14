#include <stdio.h>
  
   int main()
   {
           unsigned int num = 0x3031;
           char *ch = &num;
  
           *ch = num >> 4;
  
          printf(“%c\n”, *ch);
 
          return 0;
  }