#include "main.h"
/**
* set_string - This function sets the value of a pointer to a char
* @s: source address of the pointer
* @to: the target address
*/
void set_string(char **s, char *to)
{
	*s = to;
}
