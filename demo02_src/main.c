#include <stdio.h>
/* Requires -lcrypto */
#include <openssl/rand.h>
/* Requires -lclamp */
#include <my_lib/clamp.h>

/* Request some random bytes to OpenSSL and convert them to an integer */
int get_rand_int() {
    unsigned char buf[sizeof(int)];

    RAND_pseudo_bytes(buf, sizeof(buf));

    return *(int*)(buf);
}

int main(int argc, char *argv[]) {
    int min, max, i;

    if (argc != 3) {
        printf("Usage: %s min max\n", argv[0]);
        printf("\n");
        printf("Clamps 10 values (in the range (-100, 100) to the specified range\n");
        return 1;
    }

    min = atoi(argv[1]);
    max = atoi(argv[2]);

    for (i = 0; i < 10; i++) {
        int val = get_rand_int() % 100;

        printf("%d clamped to [%d, %d]: %d\n", val, min, max,
                clamp(val, min, max));
    }

    return 0;
}
