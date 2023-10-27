#include<stdio.h>
#include<stdlib.h>
int n;
void display();
void min(int arrt[]);
void max(int arr[]);
void search(int arr[],int val[]);
void sum(int arr[]);
void print(int arr[]);
void reverse(int arr[]);
void insert(int arr[],int val,int pos);
void update(int arr[],int val,int pos);
void deletes(int arr[],int pos);
void testunderflow();
void testoverflow();
void testunderflow()
{
	if(n<1)
	{
		printf("\n Array is unddrflow\n");
		exit(0);
	}
	void testoverflow()
	{
		if(n>=100)
		{
			printf("\m Array is  overflow\n");
			exit(0);
		}
	}
	void insert(int arr[],int val,int pos)
	{
		n+=1;
		int i;
		for(i=n;i>pos;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[pos]=val;
	}
	void deletes(int arr[],int pos)
	{
		int i;
		for(i=pos;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		n-=1;
	}
	void update(int arr[],int val,int pos)
	{
		arr[pos]=val;
	}
	void sum(int arr[])
	{
		int sum_of_element=0,i;
		for(i=0;i<n;i++)
		{
			sum_of_element+= arr[i];
		}
		printf("\n The SUM of element in array is %d", sum_of_elements);
	}
	void reverse(int arr[])
	{
		int j=n-1;int i;int temp;
		for(i=0;i<n/2;i++)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j--;
		}
	}
	void min(int arr[])
	{
		int minimum=arr[0];
		int i;
		for(i=1;i<n;i++)
		{
			if(minimum>arr[i])
			{
				minimum=arr[i];
			}
		}
		printf("\n the minimum element in array is %d ",minimum);
	}
	void max(int arr[])
	{
		int maximum=arr[0];
		int i;
		for(i=1;i<n;i++)
		{
			if(maximum<arr[i])
			{
				maximum=arr[i];
			}
		}
		printf("\n the maximum of element is %d",maximum);
	}
	void search(int arr[],int val)
	{
		int i,k=0;
		for(i=0;i<n;i++)
		{
			if(val==arr[i])
			{
				k=1;
				break;
			}
		}
		if(k==1)
		{
			printf("\m element is  present");
		}
		else
		{
			printf("\n element is not present ");
		}
	}
	void print(int arr[])
	{
		printf("\n the element of arrays are as follows ");
		int i;
		for(i=0;i<n;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
	void display()
	{
		printf("\n Enter 1 for print the arrays\n");
		printf("\n Enter 2 for search the elements in arrays\n");
		printf("\n Enter 3 for max and min elements in arrays\n");
		printf("\n Enter 4 for print the arrays in reversed orders\n");
		printf("\n Enter 5 for insert the element in arrays\n");
		printf("\n Enter 6 for delete the elements in arrays\n");
		printf("\n Enter 7 for update the element in arrays\n");
		printf("\n Enter 8 for sum of element in arrays\n");
		printf("\n Enter 9 and 0 for exit from program\n");
		
	}
	int main()
	{
		int arr[100];int x;
		printf("\n enter the no. of elements you want to insert in array");
		scanf("%d",&n);
		if(n>=100)
		{
			printf("\n enter elements bettween 1 to 99\n");
			printf("Try Again\n)";
			exit(0);
		}
		printf("\n enetr the elements in arrays one by one ");
		for(x=0;x<n;x++)
		scanf("%d",&arr[x]);
		while(1)
		{ 
		display();
		int z;
		scanf("%d",&z);
		if(z==9||z==0)
		break;
		else
		{
			switch(z)
			{
		case 1;
				print(arr);
				break;
		case 2;
				print(arr);int sea;
				printf("\n enter the element you want to search");
				scanf("%d",&sea);
				search(arr,sea);
				break;
		case 3;
				print(arr);
				max(arr);
				min(arr);
				break;
		case 4;
		        print(arr)
				
			}
		}
		}
	}
}