//interface.h
#include "tools/hint.h"
#include "menu/menu.h"
#include "user/user.h"
#include "order/order.h"
#include "good/good.h"
#define make_interface(T, YPE)\
void T##YPE##_Interface() {\
    successMessage();\
    int op = menu(T##YPE);\
    while (op != optionNum[T##YPE]) {\
        loadingMessage();\
        handler[op - 1]();\
        op = menu(T##YPE);\
        }\
        loadingMessage();\
        successMessage();\
}

typedef void (*HANDLER)(void);

void MAIN_Interface();
/**
 * @brief 
 * | 1.User Login | 2.User Sign Up | 3.Admin Login | 4.Exit |
*/

void ADMIN_Interface();
/**
 * @brief
 * | 1.Goods | 2.Search | 3.Orders | 4.Users | 5.Delete | 6.Ban | 7.Back|
*/

void USER_Interface();
/**
 * @brief 
 * | 1.Buyer | 2.Seller | 3.Information | 4.Back |
*/

void BUYER_Interface();
/**
 * | 1.Goods | 2.Buy | 3.Search | 4.Order | 5.Information | 6.Back |
*/

void SELLER_Interface();
/**
 * @brief
 * | 1.Sell | 2.Goods | 3.Modify | 4.Ban | 5.Order | 6.Back |
*/

void INFO_Interface();
/**
 * @brief
 * | 1.Information | 2.Modify | 3.Top Up | 4.Back |
*/

void MODIFY_Interface();
/**
 * | 1.Password | 2.Contact | 3.Address | 4.Back |
*/

void GOOD_Interface();
/**
 * @brief
 * | 1.Name | 2.Price | 3.Description | 4.Back |
*/

void inv();
/**
 * @brief 提示非法信息
*/