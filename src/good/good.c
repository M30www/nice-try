#include "good/good.h"
#include <stdio.h>

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
