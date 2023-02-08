//menu.h
#ifndef _MENU_H_
#define _MENU_H_
typedef enum {
    MAIN,
    ADMIN,
    USER,
    BUYER,
    SELLER,
    INFO,
    MODIFY,
    GOOD
} Menu;

int menu(Menu type);
/**
 * @brief 给出提示并获取用户输出
 * @param type 菜单类型
 * @return int 用户有效输出
*/

extern const int optionNum[];

#endif