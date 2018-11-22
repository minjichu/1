#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initiate.h" 
int N;
int findbingo(); /* ���� üũ ����*/
void initiate_bingo(); /*�������̺� �ʱ⿡ ����� �� */ 
void print_bingo(); /* �������̺� ���� ��Ȳ ȭ�鿡 ��� */ 
void get_number_byMe(); /* ���� ���� ��ȣ �Է� ���� */  
void get_number_byCom(); /* ��ǻ�Ͱ� ���� ��ȣ �Է� ���� */ 
void process_bingo(); /* ���õ� ���ڸ� �Է¹޾Ƽ� ���� ���̺� ĭ ä�� */ 
void count_bingo(); /* ���� ���̺��� ä�� ���� ���� �밢�� �� ���� ����ؼ� ��ȯ  */
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
	printf("���ϴ� ���ڸ�  �Է��Ͻÿ�: \n", my_number);
	scanf(" %s", &my_number );
	int turn=0; /*���� �����ϴ� ����*/ 
	while (1)
	{
		mycount=findbingo(mybingo);
		comcount=findbingo(combingo);
		print_bingo(mybingo);
		printf("my : %d ���� \n", mycount);
		printf("com : %d ���� \n",comcount); 
		if ((mycount >= N&&turn)|| (mycount >= N && comcount < N)) 
		{
			printf ("�¸�\n");
			break; }
		else if(comcount >= N)
		{
		
			printf("�й�\n");
			break;
		}
		}
	
	}

void process_bingo() 
{
	int i; /* �ݺ����� */ 
	int change1,change2; /* ���� �ٲ� ���� ���� */ 
	int storage; /* ���� �ٲٱ� ���� �ӽ� ���� */ 
	for (i=0; i<N*N; i++)
		bingo[i]=i+1;
	for (i=0; i<100; i++) /* 100������ ���ڵ��� ��ġ�� �������� ���´� */ 
	{
		change1 = rand () %N;
		change2 = rand () %N;
		storage = bingo[change1];
		bingo[change1]=bingo[change2];
		bingo[change2]=storage; 
	}
	
}

