#include<stdio.h>
#include<stdlib.h>
void print(int a[][6])
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%c\t",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
	int prev_row,next_row,prev_col,next_col;
	int a[6][6]={0};
	int b[6][6];
	int flag=1;
	int i,j,k,row,col,bomb_count;
	scanf("%d",&bomb_count);
	for(i=0;i<6;i++)
	{
	    for(j=0;j<6;j++)
	    {
	        b[i][j]= 42;
	    }
	}
	for(k=0;k<bomb_count;k++)
	{
		i=rand()%5;
		j=rand()%5;
		a[i][j]=-1;
	}	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			row=i;
			col=j;
			if(a[row][col]!=-1)
			{
				if(row!=0)
				{
					prev_row=row-1;
				}
				else
				{
					prev_row=row;
				}
				if(row!=5)
				{
					next_row=row+1;
				}
				else
				{
					next_row=row;
				}
				if(col!=0)
				{
					prev_col=col-1;
				}
				else
				{
					prev_col=col;
				}
				if(col!=5)
				{
					next_col=col+1;
				}
				else
				{
					next_col=col;
				}
				for(row=prev_row;row<=next_row;row++)
				{
					for(col=prev_col;col<=next_col;col++)
					{
						if(a[row][col]==-1)
						{
							a[i][j]++;
						}
					}
				}
			}
		}
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
    print(b);
	printf("\n\n");
	while(flag==1)
	{
	    printf("Enter the row and column:\n");
	    scanf("%d %d",&row,&col);
	    row--;
	    col--;
	    printf("\n");
	    if(a[row][col]==-1)
	    {
	        for(i=0;i<6;i++)
	        {
		        for(j=0;j<6;j++)
    		    {
	    		    printf("%d\t",a[i][j]);
		        }
	    	    printf("\n");
	        }
	        printf("GAME OVER!!");
	        flag=0;
	    }
	    else if(a[row][col]!=0)
	    {
	        b[row][col]=(char)a[row][col];
	       // std::system("clear");
	       printf("\n\n");
	       print(b);
	       printf("\n\n");
	    }  
	    else
	    {
	       
	    }
	    flag=0;
    }
	
	return 0;
}
