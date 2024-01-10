#include "main.h"

/**
 * find_sqrt - function that prints sqrt
 * @num: fisr param
 * @curr: second param
 * Return: return the sqrt
 */

int find_sqrt(int num, long int curr)
{
        if (curr < 0)
                return (-1);
        else if ((curr * curr) == num)
                return (curr);
        return (find_sqrt(num, curr - 1));
}
