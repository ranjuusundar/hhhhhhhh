#include <stdio.h>

int main(void) {
	// your code goes here
	int index,n,num[100000],itr,orignum=0;
	scanf("%d",&n);
	for(index=0;index<n;scanf("%d ",&num[index++]));
	for(index=0;index<n;index++)
	{
		for(itr=index+1;itr<n;itr++)
		{
			if(num[index]<num[itr])
			{
				int temp=num[index];
				num[index]=num[itr];
				num[itr]=temp;
			}
		}
	}
	for(index=0;index<n;index++)
	{
		orignum=(orignum*10)+num[index];
	}
	printf("%d",orignum);
	return 0;
}
