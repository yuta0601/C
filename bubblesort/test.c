#include<stdio.h>

void main(void){
  int h[8] = {1, 5, 2, 4, 6, 8, 9, 3};
  int i, j, w;

  //  バブルソート:昇順
  for (i = 0; i < 7; i++){
    for (j = 7; j > i; j--){    // 右から比較
      if (h[j-1] > h[j]){
        w = h[j-1];
        h[j-1] = h[j];
        h[j] = w;
      }
    }
  }

  for(i=0; i<8; i++){
    printf("%d", h[i]);
    printf("\n");
  }
}
