//mainInterface.c
#include "interface/interface.h"
#include "tools/hint.h"
#include "menu/menu.h"

void inv() {
    invalidMessage();
    failureMessage();
}
//static HANDLER handler[] = {USER_Login, USER_SignUp, ADMIN_Login};
static HANDLER handler[] = {inv, inv, inv, inv};
make_interface(M, AIN);
//static void USER_Login() {...}
//static void USER_SignUp() {...}
//static void ADMIN_Login() {...}

/*void MAIN_Interface() {
    successMessage();
    int op = menu(MAIN);
    while (op != optionNum) {
        loadingMessage();
        if (op == 1) {
            USER_Login();
        }
        else if (op == 2) {
            USER_SignUp();
        }
        else if (op == 3) {
            ADMIN_Login();
        }
        op = menu(MAIN);
    }
    loadingMessage();
    successMessage();
}*/
/*
void MAIN_Interface() {
    successMessage();
    int op = menu(MAIN);
    while (op != optionNum[MAIN]) {
        loadingMessage();
        handler[op - 1]();
        op = menu(MAIN);
    }
    loadingMessage();
    successMessage();
}
*/


