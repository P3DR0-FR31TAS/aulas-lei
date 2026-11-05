#include	<stdio.h>	

int	main()	{	

  int	a	=	2,	b	=	4,	c	=	3,	d;	

  d	=	(((a	=	a	+	1)	+	++b)	*	c++)	%	(2	*	c);	// a = 3 b = 5 c = 3  

  // d = ((3 + 5) * 3) % (2 * 4) -> c++ usa 3 na multiplicação e atualiza c para 4 antes do (2 * c)
  //(8 * 3) % 8
  //24 % 8 
  //d = 0

  printf("%d,	%d,	%d,	%d",	a,	b,	c,	d);	

  // OUTPUT
  //3, 5, 4, 0

  return	0;	
} 