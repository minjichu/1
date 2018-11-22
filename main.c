#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initiate.h" 
int N;
int findbingo(); /* 빙고 체크 변수*/
void initiate_bingo(); /*빙고테이블 초기에 만들어 줌 */ 
void print_bingo(); /* 빙고테이블 현재 상황 화면에 출력 */ 
void get_number_byMe(); /* 내가 빙고 번호 입력 선택 */  
void get_number_byCom(); /* 컴퓨터가 빙고 번호 입력 선택 */ 
void process_bingo(); /* 선택된 숫자를 입력받아서 빙고 테이블 칸 채움 */ 
void count_bingo(); /* 빙고 테이블이 채운 가로 새로 대각선 줄 수를 계산해서 반환  */
int mybingo;
int combingo;

	
/* run this program using the console pauser or add your own getch, system("pause") or input loop */





void print_bingo(){	
	int i,j;
	for (i=0;i<N;i++)
	 	{
	 		for (j=0; j<N; j++)
	 		{
	 			int bingo[i][j];
	 			printf("%d\n",bingo[i][j]);
			 }
			 printf ("\n");
		 }	
		
}

void count_bingo()
{
	int my_number;
	int mycount;
	int comcount;
	printf("원하는 숫자를  입력하시오: \n", my_number);
	scanf(" %s", &my_number );
	int turn=0; /*차례 구분하는 변수*/ 
	while (1)
	{
		mycount=findbingo(mybingo);
		comcount=findbingo(combingo);
		print_bingo(mybingo);
		printf("my : %d 빙고 \n", mycount);
		printf("com : %d 빙고 \n",comcount); 
		if ((mycount >= N&&turn)|| (mycount >= N && comcount < N)) 
		{
			printf ("승리\n");
			break; }
		else if(comcount >= N)
		{
		
			printf("패배\n");
			break;
		}
		}
	
	}

void process_bingo() 
{
	int i; /* 반복위해 */ 
	int change1,change2; /* 서로 바뀔 변수 선언 */ 
	int storage; /* 서로 바꾸기 위한 임시 변수 */ 
	for (i=0; i<N*N; i++)
		bingo[i]=i+1;
	for (i=0; i<100; i++) /* 100번동안 숫자들의 위치를 랜덤으로 섞는다 */ 
	{
		change1 = rand () %N;
		change2 = rand () %N;
		storage = bingo[change1];
		bingo[change1]=bingo[change2];
		bingo[change2]=storage; 
	}
	
}

