// argüman sayısı 2 değilse program \n görüntüler 2 den fazlaysa ilk argümanı görüntüler
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (av[1][i] > 2)
    {
        while(av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    else
    {
        write(1, "\n", 1);
        i++;
    }
    return(0);
}