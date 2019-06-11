#include <stdio.h>

int main(void) {
	// your code goes here
	int n,num[100000],index,flag=0;
	int count[100000]={0};
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		scanf("%d ",&num[index]);
		count[num[index]]++;
	}
	for(index=0;index<n;index++)
	{
		if(count[num[index]]==1)
		{
			printf("%d",num[index]);
			break;
		}
	}
	
	return 0;
}
