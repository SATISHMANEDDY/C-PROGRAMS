#include<stdio.h>
#include<math.h>
int findArmStrongCalculation(int n);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=findArmStrongCalculation(n);
	if(n==res)
	  printf("given mumber %d is a ArmStrongnumber",n);
	  else
	  printf("given nuber %d is not a armstrongnumber",n);
	  
	  return 0;	
}
int findArmStrongCalculation(int n)
{
	int rem,sum=0;
	int digit = (int)log10(n)+1;
	while(n>0)
    
	{   
	   	rem=n%10;
	    sum=sum+(int)pow(rem,digit);
	    n=n/10;
	}
	
	return sum;
}
