#include "main.h"
/**
* _isalpha-> checks if a character is alphabet or not
* @c: character to be checked
* Return: return 1 if c is an alpha and 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'));
}
