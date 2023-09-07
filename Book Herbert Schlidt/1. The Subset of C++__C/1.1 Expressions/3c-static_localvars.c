#include <stdio.h>

int series (void)
{
    static int series_num;

    series_num = series_num+23;
    return series_num;
}

// above was the standard technique;

int series1(void)
{
    static int series_num = 100;

    series_num = series_num+23;
    return series_num;
}

// above is the local variable with an initialization value