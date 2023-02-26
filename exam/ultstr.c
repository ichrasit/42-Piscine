// verilen dizideki bütün büyük harfleri küçük küçük harfleri büyük yapacak PROGRAM yap

#include <unistd.h>

int main(int av, char **avc)
{
    int i = 0;

    if (av == 2)
    {
        while (avc[1][i])
        {
            if (avc[1][i] >= 'A' && avc[1][i] <= 'Z')
            {
                avc[1][i] += 32;
            }
            else if (avc[1][i] >= 'a' && avc[1][i] <= 'z')
            {
                avc[1][i] -= 32;
            }
            write(1, &avc[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
        return(0);
    }
    
}