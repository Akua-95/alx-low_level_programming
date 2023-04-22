#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>

/**
 * main		-	prints	the	alphabet	in	lowercase
 * followed	 by	 a	new	line,	except	q	and	e
 * Return:	Always	0	(Success)
 */

int	main(void)
{
	char	low;

	for	(low	=	'a';	low	<=	'z';	low++)
	{
		if	(low	!=	'e'	&&	low	!=	'q')
			putchar(low);
	}
	putchar('\n');

	return	(0);
}

