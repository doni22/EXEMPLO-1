#include <stdio.h> 

	int main ()
	{
	//	system ("cls");
		
		int A = 0;
		int B = 0;
		
		
		printf ("informe um valor A inteiro: \n ");
		
		scanf (" %i ", &A);
		
				
		
			printf ("informe um valor B inteiro: \n ");
			
			scanf (" %i ", &B);
		
	
		if (A>B)
			{
				printf ("A eh maior que B! \n ");
			}
			else
				{
				if (A<B) 
				{
				printf ("A eh menor que B ! \n ");
			}
			else
			{
				printf ("A eh igual a B! \n ");	
			}
		

	
		return 1;
	}
}
