#include <stdio.h>

void print_array(int data[], int size);
void sort_descending(int data[], int size);

void print_array(int data[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");  // ここで改行を追加する
}

void sort_descending(int data[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (data[i] < data[j]) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

int main() {
    const int SIZE = 6;
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    printf("scores = ");
    print_array(scores, SIZE);

    printf("results = ");
    sort_descending(scores, SIZE);
    print_array(scores, SIZE);

    return 0;
}
