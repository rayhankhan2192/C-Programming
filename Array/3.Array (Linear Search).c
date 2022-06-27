/*Find your result where 100 candidates got their exam and only
50 students will be selected for admission */

//Roll number formate 1,2,3......100

#include<stdio.h>
int main()
{
    {
        while(1)
        {

            int num[] = {18,35,52,73,85,1,11,13,14,1,20,22,25,26,27,28,30,33,3,34,37,38,45,67,89,86,54,89,87,65,35,98,
                         56,78,56,44,98,67,90,92,94,60,73,88,95,16,84,90,100,8,
                        };
            int value,pos=-1,i;

            printf("Enter your Roll number = ");
            scanf("%d",&value);

            for(i=0; i<51; i++)
            {
                if(value==num[i])
                {
                    pos=i+1;
                    break;
                }
            }
            if(pos==-1)
            {
                printf("Result not found.\n");
            }
            else
            {
                printf("Congratulations you have been selected for admission.\n");
                printf("Your position is %d out of 50.\n",pos);
                printf("Please submit your all papers within 10 days.\n");

            }
        }

    }
    
    getch();
}
