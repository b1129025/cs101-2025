
#include <stdio.h>

int main()
{
        char a[]="AABBBCCCCddd";
        int size = sizeof(a) / sizeof(a[0]);
        int j = 0;
        int s = 0;
        char r[2][size];
        int k =1;
        for(int i =0; i < size; i++) {
                if (a[i] ==a[i+1]) {
                        k++;
                        if (k >9) {
                                printf ("字元%c數大於9\n",a[i]);
                                s++;
                                break;
                        }
                } else {
                        r[0][j] = a[i];
                        r[1][j] = k;
                        k =1;
                        j++;
                }
        }
        for(int i =0; i < j; i++) {
                if (s&1) break;
                printf("%c%d",r[0][i], r[1][i]);
        }

        return 0;
}