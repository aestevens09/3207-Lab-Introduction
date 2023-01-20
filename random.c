#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){

  int rand_int = 65 + (rand()%26);

  return (char) rand_int;

}
