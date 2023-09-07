#include <stdio.h>

static int series_num;
void series_start (int seed);
int series (void);

/*below is initializing the series*/
void series_start (int seed)
{
    series_num = seed;
}

int series (void)
{
    series_num = series_num+23;
    return series_num;
}