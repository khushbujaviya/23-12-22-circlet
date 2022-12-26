/*			*
  		   * *
		  *   *
		 * 	 	*    */
		 
#include<stdio.h>
main()
{
	int i,y=4,z=4,j;
	
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=7;j++)
		{
			
		if(y==j||z==j)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
		printf("\n");
		y--;
		z++;
	}
}
