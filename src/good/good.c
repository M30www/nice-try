#include "good/good.h"
#include "tools/info.h"
#include <stdio.h>
#include <string.h>

static Good goods[MAX_GOOD];
static int totalGood = 0;

static const char* filePath = "src/data/good.txt";

void pullGoods() {
    totalGood = 0;
    FILE* pf = fopen(filePath, 'r');
    if (pf) {
        while (scanf(pf, "%s%s%lf%s%u%s%s", goods[totalGood].id, goods[totalGood].name, \
        &goods[totalGood].price, goods[totalGood].seller_id, &goods[totalGood].state, \
        goods[totalGood].date, goods[totalGood].description) != EOF) totalGood++;
        fclose(pf);
    }
}
Good* getGood(int index) {
    return goods + index;
}

static const char* stateName[] = {"Selling", "Sold", "Banned"};

void goodInfo(int i) {
    printf("ID:             | %s\n", goods[i].id);
    printf("Name:           | %s\n", goods[i].description);
    printf("Description:    | %s\n", goods[i].description);
    printf("Date:           | %s\n", goods[i].date);
    printf("Price:          | %.lf\n", goods[i].price);
    printf("Seller:         | %s\n", goods[i].seller_id);
    printf("State:          | %s\n", goods[i].state);
}

int addGood(Good* g) {
    if (totalGood == MAX_GOOD) return 0;
    genID(g->id, "G");
    getDate(g->date);
    g->state = SELLING;
    goods[totalGood++] = *g;
    return 1;
}

int searchGoodID(const char* id) {
    for (int i = 0; i< totalGood; i++) {
        if (strcmp(goods[i].id, id) == 0) return i;
    return -1;
    }
}

int deleteGood(const char* id, const char* who) {
    int idx = searchGoodID(id);
    if (idx == -1) return 0;
    if (who && strcmp(goods[idx].seller_id, who)) return 0;
    goods[idx].state = BANED;
    return 1;
}

static const char* header = "|ID        |Name       |Price      |Date       |Seller     |State      |";
static const char* divide = "+----------+-----------+-----------+-----------+-----------+-----------+";
/**
 * @brief 打印单个商品作为表格的一行
 * @param i 用户下标
*/
static void printGood(int i) {
    printf("|%-10s |%-10s |%-10.lf |%-10s |%-10s |%-10s |\n", goods[i].id, goods[i].name, \
    goods[i].price, goods[i].date, goods[i].seller_id, goods[i].state);
}

void printGoods() {
    print_header
    for (int i = 0; i < totalGood; i++) {
        printGood[i];
        print_divide
    }
}

void searchGoodName4Buyer(const char* name) {
    print_header
    for (int i = 0; i < totalGood; i++) {
        if (good[i].state == SELLING && strstr(goods[i].name, name)) {
            printGood(i);
            print_divide
        }
    }
}

void searchGoodName4Admin(const char* name) {
    print_header
    for (int i = 0; i < totalGood; i++) {
        if (strstr(goods[i].name, name)) {
            printGood(i);
            print_divide
        }
    }
}

void printGoods4Seller(const char* id) {
    print_header
    for (int i = 0; i < totalGood; i++) {
        if(strcmp(goods[i].seller_id, id) == 0) {
            printGood(i);
            print_divide
        } 
    }
}

void searchGoodName4Buyer(const char* name, const char* name) {
    print_header
    for (int i = 0; i < totalGood; i++) {
        if (strstr(goods[i].name, name)) {
            printGood(i);
            print_divide
        }
    }
}