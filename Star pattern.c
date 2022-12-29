//Plus Star Pattern Program In C Using For Loop //
#include <stdio.h> 
#include <conio.h>

int main()
{
    int i,j,n;
    char ch;
 
    printf("Enter number of rows: ");
    scanf("%d%c",&n,&ch);
    printf("Enter the symbol: ");
    ch=getchar();
   
    for(int i=1;i<=n*2-1;i++)
    {
        if(i!=n)
	        for(int j=1;j<=n;j++)
            {      
		        if(j==n)
                    printf("%c",ch);
                          
			    printf(" ");
            }
		else
		    
			for(int j=1;j<=n*2-1;j++)
            {
			    printf("%c",ch);
		    }
            
	    printf("\n");
   }            

    return 0;
}
