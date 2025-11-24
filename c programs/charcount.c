#include<stdio.h>
#include<string.h>
int main()
{
	int arr[26]={0};
	int i;
	char str[50];
	gets(str);
	printf("Enter any String\n");
	gets(str);
	printf("Before Upper Conversion: %s\n",str);
	strupr(str);
	printf("After Upper Conversion: %s\n",str);
	for(i=0;str[i]!='\0';i++)
	{
		arr[str[i]-65]++;
		
	}
	for(i=0;i<26;i++)
	{   
	     if(arr[i]!=0)
		printf("%c -> %d\n",(char)i+65,arr[i]);
	}
	return 0;
	
	 
	
	
	
	
}
