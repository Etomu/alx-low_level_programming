#include <stdio.h>



/**
 *
 *  * main - prints the fizz buzz challenge
 *
 *   * Return: 0 always
 *
 *   */



int main(void)

{

		int i = 1;



			while (i <= 100)

					{

								if (i % 3 == 0 && i % 5 == 0)

												printf("FizzBuzz ");

										else if	(i % 3 == 0)

														printf("Fizz ");

												else if (i % 5 == 0)

																if (i == 100)

																					printf("Buzz\n");

															else

																				printf("Buzz ");

														else

																		printf("%d ", i);

																i++;

																	}

				return (0);

}
