// a ve y arasında tmp oluşturup +1 ini tmpye at
// büyük z ve küçük z arasındaysa büyük z de büyük a yazdır küçük z ise küçük a yazdır

#include <unistd.h>

int main(int av, char **avc)
{
    int i = 0;
    char tmp;
    if (av == 2)
    {
        while(avc[1][i])
        {
            if (avc[1][i] >= 'A' && avc[1][i] <= 'Z' || avc[1][i] >= 'a' && avc[1][i] <= 'z')
            {
                tmp = avc[1][i] +1;
                write(1, &tmp, 1);
            }
            else if (avc[1][i] == 'Z')
            {
                write(1, "A", 1);
            }
            else
                write(1, &avc[1][i], 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
        return(0);
}