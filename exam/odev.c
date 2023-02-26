//eğer parametre 1 ise a yazdır, eğer parametrede a varsa a yazdır. eğer nullsa a yazdır 
//eğer stringin içinde a yoksa \n yazdır

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc < 2 || argv[1][i] == '\0')
    {
        write(1, "a\n", 2);
        return(0);
    }
    if (argv[1][i] == 'a')
    {
        write(1, "a\n", 2);
    }
    else if(argv[1][i] == 'a' != '\0')
    {
        write(1, "a\n", 2);
    } 
    else
    {
        write(1, "\n", 1);
    }
    return(0);
}