#include "user/user.h"
#include "tools/info.h"
#include <stdio.h>
#include <string.h>

static User users[MAX_USER];
static int totalUser = 0;
static const char* filePath = "src/data/usr.txt";
void pullUsers() {
    totalUser = 0;
    FILE* pf = fopen(filePath, "r");
    if (pf) {
        while (fscanf(pf, "%s%s%s%s%s%lf", users[totalUser].id, \
        users[totalUser].name, users[totalUser].passwd, users[totalUser].contact, \
        users[totalUser].address, &(users[totalUser].balance)) != NULL) totalUser++;
        fclose(pf);
    }
}
void pushUsers(){
    FILE* pf = fopen(filePath, "w");
    for (int i = 0; i < totalUser; i++) {
        fprintf(pf, "%s %s %s %s %.1f\n", users[i].id, users[i].name, \
        users[i].passwd, users[i].contact, users[i].address, users[i].balance);
        fclose(pf);
    }
}