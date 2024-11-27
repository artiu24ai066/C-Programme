#include<stdio.h>
struct Item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

int main() {
    struct Item item;

    printf("Enter item name:");
    scanf("%s", item.item_name);

    printf("Enter quantity:");
    scanf("%d", &item.quantity);

    printf("Enter price:");
    scanf("%f", &item.price);

    item.amount = item.quantity * item.price;

    printf("Item name: %s\n", item.item_name);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);
    printf("Amount: %.2f\n", item.amount);
    return 0;
}
