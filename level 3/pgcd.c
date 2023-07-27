#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int s1 = atoi(av[1]);
        int s2 = atoi(av[2]);
        
        if(s1 > 0 && s2 > 0)
        {
            while(s1 != s2)
            {
                if(s1 > s2)
                    s1 -= s2;
                else
                    s2 -= s1;
            }
            printf("%d", s1);
        }
    }
    printf("\n");
}

/* #include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 1;
    int num;
    int flag = 0;

    if (ac == 3)
    {
        int a = atoi(av[1]);
        int b = atoi(av[2]);

        if (a < b)
            num = a;
        else
            num = b;

        if (a > 0 && b > 0)
        {
            while (i <= num)
            {
                if (a % i == 0 && b % i == 0)
                    flag = i;
                i++;
            }

            if (i - 1 == num)
                printf("%d", flag);
        }
    }
    printf("\n");
} */
