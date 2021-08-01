#include <stdio.h>
#include <stdlib.h>
int cal[1001][301] = {};
int main()
{
    int i, j;
    cal[0][0] = 1, cal[1][0] = 2;
    for(i = 2; i <= 1000; i++)
    {
        for(j = 0; j < 300; j++)
        {
            cal[i][j] = cal[i-1][j] + cal[i-2][j];
        }
        for(j = 0; j < 300; j++)
        {
            cal[i][j+1] += cal[i][j]/10;
            cal[i][j] %= 10;
        }
    }
    while(scanf("%d", &i) == 1)
    {
        j = 299;
        while(cal[i][j] == 0) j--;
        while(j >= 0)
            putchar(cal[i][j]+'0'), j--;
        puts("");
    }
    return 0;
}
