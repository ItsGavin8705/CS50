#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
  int startsize;
  do
  {
      startsize = get_int("Start Size: ");
  }
  while (startsize < 9);

    // TODO: Prompt for end size
  int endsize;
  do
  {
      endsize = get_int("End Size: ");
  }
  while (startsize > endsize);

    // TODO: Calculate number of years until we reach threshold
  int year = 0;
  do
  {
      startsize = startsize + (startsize/3) - (startsize/4);
      year++;
  }
  while (startsize < endsize);

    // TODO: Print number of years

  printf("Years: %i\n", year);
}








