/*/*1.Write a menu driven program which has following options:
1. Asending
2. Desending
3. Maximun
4. Minimum
 */

#include <stdio.h>
int main()
{
    printf("1. Asending\n");
    printf("2. Desending\n");
    printf("3. Maximun\n");
    printf("4. Minimum\n");

    int num, m[30],max,min;
    int i, j, temp,n;
    printf("\nChoose an option = ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\n");
        printf("\t\t\t\t====== Ascending Order ====== \t\t");
        printf("\n");
        printf("\nHow many numbers = ");
        scanf("%d", &n);
        printf("\nEnter %d numbers = ", n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &m[i]);
        }

        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (m[i] > m[j])
                {
                    temp = m[i];
                    m[i] = m[j];
                    m[j] = temp;
                }
            }
        }
        printf("\n\nAscending order :\n\n");
        for (i = 0; i < n; i++)
            printf("%d\t", m[i]);
            printf("\n\n");
            break;

    case 2:
        printf("\n");
        printf("\t\t\t\t====== Descending Order ====== \t\t");
        printf("\n");
        printf("\nHow many numbers = ");
        scanf("%d", &n);
        printf("\nEnter %d numbers = ", n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &m[i]);
        }

        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (m[i] < m[j])
                {
                    temp = m[i];
                    m[i] = m[j];
                    m[j] = temp;
                }
            }
        }
        printf("\n\nDescending order :\n\n");
        for (i = 0; i < n; i++)
            printf("%d\t", m[i]);
            printf("\n\n");
            break;

    case 3:
        printf("\n");
        printf("\t\t\t\t====== Maximum number ====== \t\t");
        printf("\n");
        printf("\nHow many numbers = ");
        scanf("%d", &n);
        printf("\nEnter %d numbers = ", n);

         for(i=0; i<n; i++)
        {
            scanf("%d",&m[i]);
        }
        int max=m[0];

        for(i=1; i<n; i++)
        {
            if(max<m[i])
                max=m[i];
        }

        printf("\nMaximum number = %d\n",max);
        printf("\n\n");
        break;

    case 4:
        printf("\n");
        printf("\t\t\t\t====== Minimum number ====== \t\t");
        printf("\n");
        printf("\nHow many numbers = ");
        scanf("%d", &n);
        printf("\nEnter %d numbers = ", n);

         for(i=0; i<n; i++)
        {
            scanf("%d",&m[i]);
        }
        int min=m[0];

        for(i=1; i<n; i++)
        {
            if(min>m[i])
                min=m[i];
        }

        printf("\nMinimum number = %d\n",min);
        printf("\n\n");
        break;

    }
    getch();
    }


