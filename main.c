#include <stdio.h>
//touched by user2

int main(){
  int a;
  printf("숫자를 입력하시오");
  scanf("%d", &a);
  
  for(int i=0;i<a;i++){
    printf(":D\n");
  }
  
  printf("%d", a);

  return 0;
}

//김주현 202300791 컴퓨터공학부
