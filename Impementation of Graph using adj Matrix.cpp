#include<stdio.h>
#define V 5

void initialize(int arr[V][V])
{
	int i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			arr[i][j]=0;
		}
		
	}
}
void addEdge(int arr[V][V],int src,int dest)
{
	arr[src][dest]=1;
	arr[dest][src]=1;
}

//check whether is existed or not
void checkEdge(int arr[V][V],int src,int dest)
{
	if(arr[src][dest]==1)
	{
		printf("Edge is existed between %d and %d \n",src,dest);
	}
	else
	{
	printf("Edge is not existed between %d and %d \n",src,dest);	
	}
}
void display(int arr[V][V])
{
	int i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			printf("%d ",arr[i][j]);
		}
	printf("\n");	
	}
	
}

//remove Edge
void removeEdge(int arr[V][V],int src,int dest)
{
	arr[src][dest]=0;
	
	printf("Edge is removed from %d and %d\n ",src,dest);
}
int main()
{
	int adjM[V][V];
	initialize(adjM);
	addEdge(adjM,1,3);
	addEdge(adjM,0,1);
	addEdge(adjM,0,2);
	addEdge(adjM,3,0);
	addEdge(adjM,2,3);
	addEdge(adjM,3,4);
	addEdge(adjM,4,2);
	
	display(adjM);
	checkEdge(adjM,0,2);
	removeEdge(adjM,4,2);
	return 0;
}
