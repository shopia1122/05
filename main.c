#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int constant;
    
    printf("���� �ϳ��� �Է��Ͻÿ�: ");  
    scanf("%d", &constant);
    
    if(constant > 0) 
      printf("����Դϴ�.\n");
    else if(constant == 0)
      printf("0�Դϴ�.\n");
    else
      printf("�����Դϴ�.\n"); 
  
  system("PAUSE");	
  return 0;
}
