#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int first;
    int second;
    char cal;
    int result;
    
    printf("enter the calculation: ");  
    scanf("%d %c %d", &first, &cal, &second);
    
    if(cal == '+')   
      result = first + second;
    else if(cal == '-')
      result = first - second;
    else if(cal == '*')
      result = first * second;
    else if(cal == '/')
      result = first / second;
    else 
      printf("Wrong Operation.\n");
    
    printf(" = %d\n", result); 
  
  
  /*  switch������ �ϴ� ��� �̿��ϸ� �Ǵ� �ڵ� 
  switch(op)
  {
            case '+':              ���� ����ǥ�� �־�� �ȴ�. 
                 result = a+b;
                 break;
            case:
                 defalut:  
            }
  
  
  */
  
  
  
  system("PAUSE");	
  return 0;
}
