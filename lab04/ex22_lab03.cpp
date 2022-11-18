#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 999, j, x, y, z, t, u, a = 0;  
    for (x = i * i; x > a; x = i * i){
        for (j = i; x > a; x = i * j){
            z = 0;
            for (y = x; y > 0; y /= 10){
                z = z * 10 + y % 10;
            }
            if (x == z){
                    a = x;
                    t = i;
                    u = j;
            }
            j--;
        }
        i--;
    }
    printf("Resultado: %d, obtido por %d vezes %d\n", a, t, u);
    system("pause");
    return 0;
}
