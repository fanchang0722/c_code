#include <stdio.h>

int main(int argc, char *argv[])
{
  int i=0;
  if (argc ==1)
  {

      printf("You only have one argument.\n");
  }
  else if(argc >1 && argc <4)
  {
    printf("Here is your argument: \n");
    for (i=0;i<argc;i++)
    {
        printf("%d argumenent is %s\n", i,  argv[i]);
    }
    printf("\n");
  }
 else
  {
      printf("You have too many arguments.\n");
  }
 return 0;
}
