#include<stdio.h>
rotate(char str[])
{
	char newstr[15];
    printf("\ncomplete rotation of '%s' is:-\n\n",str);
    printf("%s\t",str);
	int i,j;
	int n=strlen(str);
	for(j=0;j<n;j++)
	 {
		char temp=str[0];
			for(i=0;i<n;i++)
			{
				str[i]=str[i+1];
			}
			str[n-1]=temp;
		printf("%s\t",str);
     }
}
main()
{
	char str[15];
	printf("enter your favourite word:-\n");
	scanf("%s",&str);
	rotate(str);
}

