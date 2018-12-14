#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_rand(void)
{
 srand(time(NULL))
}

//TODO: use a better random generator
a8b8878633cb262503760f8f8c46cf3147e016cb
int random_int(int max)
{
  return rand() % max;
}

int main(int argc, char *argv[])
{
  if(argc != 2){
   fprintf(stderr,"Usage: %s <number>\n", argv[0]);
   return EXIT_FAILURE;
 }
  int max = atoi(argv[1]);

  srand(time(NULL))
  int result = random_int(max);
  printf("%d\n",result);

  return EXIT_SUCCESS;
}
