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
      
    trial = trial +1;     //loop가 돌 때마다 trial도 돌게 되어서 시도 횟수를 출력하게 되는 것.  
    }
    while(answer != num);  // answer과 num이 같지 않아야 참인 것이고 그래야 루프가 정답 찾을 때까지 계속 반복하게 됨. 나는 그냥 같다고 두었었음.  
    
    
    printf("Congratulation! trials: %d\n", trial);
    
    
    
  
  
 
  
  
  system("PAUSE");	
  return 0;
}
