#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 59;
    int num;
    int trial=0;
    
    do
    {
    printf("Guess a number: ");  
    scanf("%d", &num);
    
    if(num < answer)
      printf("low!\n");
    else if(num > answer)
      printf("high!\n");
      
    trial = trial +1;     //loop�� �� ������ trial�� ���� �Ǿ �õ� Ƚ���� ����ϰ� �Ǵ� ��.  
    }
    while(answer != num);  // answer�� num�� ���� �ʾƾ� ���� ���̰� �׷��� ������ ���� ã�� ������ ��� �ݺ��ϰ� ��. ���� �׳� ���ٰ� �ξ�����.  
    
    
    printf("Congratulation! trials: %d\n", trial);
    
    
    
  
  
 
  
  
  system("PAUSE");	
  return 0;
}
