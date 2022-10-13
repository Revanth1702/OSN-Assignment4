#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main(int argc , char *argv[])
{
    if(argc != 3)
    {
       fprintf(2,"Incorrect arguments passed\n");
       exit(1);
    }
    else
    {
       int c = set_priority(atoi(argv[0]),atoi(argv[1]));
       if(c == -2)
       {
          fprintf(2,"Incorrect priority entered\n");
          exit(0);
       }
       if(c == -1)
       {
          fprintf(2,"Process with above pid is not present\n");
       }
    exit(1);
    }
    
}