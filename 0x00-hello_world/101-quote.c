#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
  const char clause[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  const size_t clause_len = sizeof(clause) - 1;
  ssize_t write_to = write(2, clause, clause_len);

  if (write_to != (ssize_t)clause_len)
    return (1)

      return (0);
}

