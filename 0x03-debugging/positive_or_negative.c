#include "main.h"
/**
 * positive_or_negative - Print "i is zero" if i = 0,
 * prints "i is positive" if i > 0,
 * prints "i is negative" if i < 0'
 * @i: The number to check
 *
 */
void positive_or_negative(int i)
{
	printf("%d is %s\n", i, i == 0 ? "zero" : i < 0 ? "negative" : "positive");
}
