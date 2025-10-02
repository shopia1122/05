#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int constant;
    
    printf("정수 하나를 입력하시오: ");  
    scanf("%d", &constant);
    
    if(constant > 0) 
      printf("양수입니다.\n");
    else if(constant == 0)
      printf("0입니다.\n");
    else
      printf("음수입니다.\n"); 
  
  system("PAUSE");	
  return 0;
}
