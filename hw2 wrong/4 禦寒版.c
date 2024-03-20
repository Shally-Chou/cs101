#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    int price;
    char title[100];
} Book;

Book bookList[] = {
    {1, 1000, "All the Light We Cannot See"},
    {2, 300, "The 38 Letters from J.D. Rockefeller to his son"},
    {3, 1000, "The Ballad of Songbirds and Snakes"},
    {4, 550, "Killers of the Flower Moon"},
    {5, 870, "Elon Musk"},
    {6, 1344, "Milk and Honey 12-Month 2024"}
};

void total_price() {
    int total = 0;
    for (int i = 0; i < sizeof(bookList) / sizeof(bookList[0]); i++) {
        total += bookList[i].price;
    }
    printf("%d\n", total);
}

void list_book(int id) {
    for (int i = 0; i < sizeof(bookList) / sizeof(bookList[0]); i++) {
        if (bookList[i].id == id) {
            printf("%d %s\n", bookList[i].price, bookList[i].title);
            return;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    if (N == 0) {
        total_price();
    } else if (N >= 1 && N <= 6) {
        list_book(N);
    }

    return 0;
}