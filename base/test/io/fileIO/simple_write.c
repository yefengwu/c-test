#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if ((write(1, "Here is some data\n", 18)) != 18)
    {
        write(2, "A write error has occured on file descriptot 1\n", 46);
        exit(0);
    }
}
