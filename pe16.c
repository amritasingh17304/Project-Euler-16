#include<stdio.h>
#include<math.h>
int main()
{
	long int sum=0;
	pow(2,1000);
	while(pow(2,1000)>0)
	{
		sum=sum+(pow(2,125)%10)%10;
		pow(2,1000)=(8*pow(2,125))/10;
	}
	printf("ld\n",sum);
	return 0;
}
