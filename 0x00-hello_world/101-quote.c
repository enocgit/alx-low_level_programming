#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void){
  char clause[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  size_t clause_lenth = sizeof(clause) - 1;
  ssize_t write_to = write(2, clause, clause_length);

  return (1);
}
