#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number;
    
    printf("���� �ϳ��� �Է��Ͻÿ�: ");  
    scanf("%d", &number);
    
    if(number >= 0) 
      printf("������ %d�Դϴ�.\n", number);
    else
      printf("������ %d�Դϴ�.\n", -number); 
  
  system("PAUSE");	
  return 0;
}
