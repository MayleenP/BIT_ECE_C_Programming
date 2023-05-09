#include <stdio.h>
int main()
{
    int n; 
    int i=0, j=0;
    int x=0, y=0;
    int value;

    printf("n=");
    scanf("%d", &value);

    if (value<=20)
    {
        for(; i<value; i++)
	    {
		    for(j = 0;j<value-i;j++)
			    printf("  ");
		    for(j = 0;j<2*(i+1)-1;j++)
			    printf("* ");
		        printf("\n");
        }
    
        for(; x<value; x++)
        {
            for(y = 0;y<value;y++)
                printf("  ");
                printf("* ");
                printf("\n");
        }
        
    }
    else
    {
        printf("The number is too large!\n");
    }
               
    return 0;
}