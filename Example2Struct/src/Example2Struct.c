#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct{
    char *name;
    float price;
    int aisle;
    int quantity;
}Product;

void populateStruct(Product *product){
    product[0].name = "apples";
    product[0].price = 4.55;
    product[0].aisle = 1;
    product[0].quantity = 100;

    product[1].name = "tomatoes";
    product[1].price = 2.50;
    product[1].aisle = 1;
    product[1].quantity = 200;

    product[2].name = "Chips";
    product[2].price = 3.25;
    product[2].aisle = 2;
    product[2].quantity = 50;

    product[3].name = "cookies";
    product[3].price = 1.99;
    product[3].aisle = 3;
    product[3].quantity = 50;

    product[4].name = "salsa";
    product[4].price = 2.99;
    product[4].aisle = 2;
    product[4].quantity = 0;

}

void displayProducts(Product *product){
    int i;
    for(i = 0; i < 5; i++){
        printf("%s - $%.2f located in aisle %d\n", product[i].name, product[i].price, product[i].aisle);
    }
}

void findPrice(Product *product,char *name ){
    int i;
    for(i = 0; i < 5; i++){
        if(strcmp(name, product[i].name) == 0){
            printf("The price of %s is : $%.2f\n", product[i].name, product[i].price);
        }
    }
}

void findLocation(Product *product,char *name){
    int i;
    for(i = 0; i < 5; i++){
        if(strcmp(name, product[i].name) == 0){
            printf("%s located in aisle : %d\n", product[i].name, product[i].aisle);
        }
    }
}

void purchaseProduct(Product *product,char *name){
    int i;
    int quantity;
    float price;
    printf("How many %s would like to buy? ", name);
    scanf("%d", &quantity);
    for(i = 0; i < 5; i++){
        if(strcmp(name, product[i].name) == 0){
            if (product[i].quantity != 0 && (product[i].quantity - quantity >= 0)){
                price = product[i].price * quantity;
                printf("You purchased %s. Your total is: %.2f", product[i].name, price);
                product[i].quantity = product[i].quantity - quantity;
            }
            else if (product[i].quantity == 0){
                printf("Sorry, %s are out of stock", product[i].name);
            }
            else if (product[i].quantity - quantity <= 0){
                printf("We don't have enough %s in stock. Current quantity: %d", product[i].name, product[i].quantity);
            }
        }
    }
}

void displayInventory(Product *product){
    int i;
    for(i = 0; i < 5; i++){
        printf("%s - quantity: %d\n", product[i].name, product[i].quantity);
    }
}

int main(){
    Product *product = malloc(5 * sizeof(Product));
    int exit = 1;
    int option;
    char productName[20];

    populateStruct(product);

    while(exit != 0){
        printf("\n\n--------------Main Menu--------------\n");
        printf("1. Find the price of an item\n");
        printf("2. Find the location of an item \n");
        printf("3. Display all products and prices \n");
        printf("4. Purchase items \n");
        printf("5. Display store inventory \n");
        printf("0. Exit \n");
        printf("\nSelect an option: ");
        scanf("%d", &option);

        if(option == 1){
            printf("Which item are you looking for? ");
            scanf("%s", productName);
            findPrice(product, productName);
        }

        if(option == 2){
            printf("Which item are you looking for? ");
            scanf("%s", productName);
            findLocation(product, productName);
        }

        if(option == 3){
            displayProducts(product);
        }

        if(option == 4){
            printf("Which item do you want to buy? ");
            scanf("%s", productName);
            purchaseProduct(product, productName);
        }

        if(option == 5){
            displayInventory(product);
        }

        if(option == 0){
            exit = 0;
        }
    }

    return 0;
}
