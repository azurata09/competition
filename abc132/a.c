#include<stdio.h>

int main(void) {
  char str[4];
  scanf("%4s", str);
  for(int i = 0; i < 4; i++) //与えられた文字列がAからZの間かを判定
    if(!((str[i] >= 'A')&&(str[i] <= 'Z'))) return 1;
  int s_count = 0; // Success Count
  int max_index = 2; // もし同じ数が続くのであれば繰り返し回数を+1する
  for(int i = 0; i < max_index; i++) {
    for(int j = i+1; j < 4; j++) {
      if(i==j) i++;
      else if(str[i] == str[j]) s_count++;
      if(i+1 == j) {i++; max_index++;}
    }
  }
  if(s_count == 2) printf("Yes");
  else             printf("No");
}