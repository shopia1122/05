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
  
  
  /*  switch문으로 하는 경우 이용하면 되는 코드 
  switch(op)
  {
            case '+':              작은 따옴표가 있어야 된다. 
                 result = a+b;
                 break;
            case:
                 defalut:  
            }
  
  
  */
  
  
  
  system("PAUSE");	
  return 0;
}
