#include <stdio.h>

int main(void) {
	// your code goes here
	int index,n,num[100000],itr=0,counter[1000000],itr1;
	int count[1000000]={0};
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		scanf("%d ",&num[index]);
		count[num[index]]++;
		if(count[num[index]]>1)
		{
				counter[itr]=num[index];
				count[num[index]]=-100000;
				itr++;
		}
	}
	for(index=0;index<itr;index++)
	{
		for(itr1=index+1;itr1<itr;itr1++)
		{
			if(counter[index]>counter[itr1])
			{
				int temp=counter[index];
				counter[index]=counter[itr1];
				counter[itr1]=temp;
			}
		}
	}
	if(itr==0)
	printf("unique");
	else
	for(index=0;index<itr;printf("%d ",counter[index++]));
	
	
	
	return 0;
}
