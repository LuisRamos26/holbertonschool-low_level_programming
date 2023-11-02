#include"main.h"

/** reset_to_98 - Updates the value it points to 98
 *return - *n
 * */

void reset_to_98(int *n)
{
	int reset = 98;
	n = &reset;
	return(n);
}
