#include <stdio.h>
#include <stdlib.h>
int main ()
{
    // Variant 10 
  int n;
  double A[3][4] = {
    {0.10, -0.04, -0.13, -0.15},
    {-0.04, 0.34, 0.05, 0.31},  // инициализация массива 
    {-0.13, 0.05, 0.63, 0.37}
  };
  double tmp, tmp2;
//   printf("\n Vvedite razmer matrixs: ");
//   scanf("%d",&n);
for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 3; j++) {
			printf("[%d][%d]=%0.2f  ", i + 1, j + 1, A[i][j]); // отоброжение изначального массива 
		}
		printf("\n");
}
  tmp = A[0][0];
  for (int j = 0; j <= n; j++)
    {
      A[0][j] /= tmp;                    //1 
    }

  tmp = (0 - A[1][0]);
  tmp2 = (0 - A[2][0]);
  for (int j = 0; j <= n; j++)
    {
      A[1][j] += tmp * A[0][j];         //2
      A[2][j] += A[0][j] * tmp2;
    }
  tmp = A[1][1];
  for (int j = 0; j <= n; j++)
    {
      A[1][j] /= tmp;                  //3
    }
  tmp = (0 - A[2][1]);
  for (int j = 0; j <= n; j++)
    {
      A[1][j] += A[1][j] * tmp;      //4
    }

  tmp = A[2][2];
  for (int j = 0; j <= n; j++)
    {
      A[2][j] /= tmp;              //5    
    }
    printf("Final matrixs\n ");
 for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 3; j++) {
			if (A[i][j] == -0) A[i][j] = 0; //-0!
			printf("[%d][%d]=%0.4f ", i + 1, j + 1, A[i][j]);   // вывод готового массива 
		}
		printf("\n");
}
  return 0;
}

