#include "initiate.h"
	
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void initiate_bingo(bingo[N][N];) 
{
	int i,j;
	int bingo[N][N]={0};
	srand(time(NULL));	/*rand 함수 초기화 */
	for(i=0; i<N, i++)
	{
		for (j=0; j<N; j++)
		{
			bingo[i][j]=rand()%(N*N);
			printf("좌표 [%2d][%2d] 입력: ", i+1, j+1);
			scanf ("%s", &a[i][j]);
		}
	 } 
	 
}

