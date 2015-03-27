#include <stdio.h>

#define N 4000
#define S 1000

struct t {
    double a, b, f;
};

int main(int argc, char **argv)
{
    int i, j;
    struct t t[N];

    for(i=0; i<N; i++) {
        t[i].a = 0;
        t[i].b = 1;
        t[i].f = i * 0.25;
    };

    for(j=0; j<S; j++) {
        for(i=0; i<N; i++) {
            t[i].a += t[i].b * t[i].f;
            t[i].b -= t[i].a * t[i].f;
        }
        printf("%.6f\n", t[1].a);
    }

    return 0;
}
