#include <stdio.h>

#define OUT 0
#define IN 1

int main() {

    int c, nc, nl, nw, state;
    nc = nl = nw = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        ++nc;
        
        if (c == '\n') {
            ++nl;
        }

        if (!(c == ' ' || c == '\t' || c == '\n')) {
            state = IN;
        } else if (state == IN) {
            ++nw;
            state = OUT;
        }
        printf("%c", c);
    }

    printf("\n state = %d, nc = %d, nl = %d, nw = %d", state, nc, nl, nw);

}