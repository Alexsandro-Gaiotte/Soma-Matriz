#include <stdio.h>

void soma_Matriz(int A[][3], int B[][3], int C[][3], int m, int n) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}

int main() {
  int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int B[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
  int C[3][3];

  soma_Matriz(A, B, C, 3, 3);

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
