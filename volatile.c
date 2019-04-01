// Source: http://www.firmcodes.com/volatile-keyword-in-c-and-embedded-system/

/* Optimization code snippet 1 */ 
#include<stdio.h> 

int x = 0; 

int main() 
{ 

	if (x == 0) // This condition is always true 
	{ 
		printf(" x = 0 \n"); 
	} 
	else 		// Else part will be optimized because x will never other than 0 
	{ 
		printf(" x != 0 \n"); 
	} 
	return 0; 
} 

// ============================================================================

/* Optimization code snippet 2 */
#include<stdio.h>

volatile int x; 	/* volatile Keyword*/

int main()
{
	
	x = 0;
	
	if (x == 0)
	{
	printf(" x = 0 \n");
	}
	else		// Now compiler never optimize else part because the variable is declared as volatile	
	{	
	printf(" x != 0 \n");
	}
	
	return 0;
}
