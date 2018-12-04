#include <stdio.h>

extern const char c_data[];
extern const int c_data_len;

extern const short *s_data;
extern const int s_data_len;

extern const int *i_data;
extern const int i_data_len;

int main(int argc, char *argv[]) {
    int max = 0;
    int len = c_data_len;
    int i;

    for (i = 0; i < len; i++)
        if (c_data[i] > max)
            max = c_data[i];
    printf("Maximum value: %d\n", (int)max);

    return 0;
}
