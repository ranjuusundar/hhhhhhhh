#include <stdio.h>

int main(void) {
	// your code goes here
	int n,num[100000],index,flag=0;
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		scanf("%d ",&num[index]);
		if(num[index]==index)
		{
			printf("%d ",num[index]);
			flag=1;
		}
	}
	if(flag==0)
	printf("-1");
	return 0;
}
