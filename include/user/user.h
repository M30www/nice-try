#include "config.h"

typedef struct User{
    char id[MAX_LEN];
    char name[MAX_LEN];
    char passwd[MAX_LEN];
    char contact[MAX_LEN];
    char address[MAX_LEN];
    double balance;
}User;
void pullUser();

/**
*@brief 从外部导入用户信息
*/

void pushUsers();
/**
*@brief 用户信息导出到外部文件
*/

User* getUser(int index);
/**
*@brief         获取用户对象
*@param  index  用户在数组的下标
*@return User*  指向用户对象的指针
*/

void userInfo(int index);
/**
*@brief         打印用户信息
*@param index   用户在数组的下标
*/

int addUser(struct User* u);
/**
*@brief     添加新用户
*@param u   待添加的用户指针       
*@return    int 成功返回1，失败返回0
*/

int deleteUser(const char* id, const char* who);
/**
*@brief     删除给定id的用户
*@param id  待删除用户的id
*@param who 删除操作执行者的id，管理员为NULL
*@return    成功返回1，失败返回0
*/

void printUsers();
/**
 *@brief 打印所有用户的信息
*/

int checkPass(const char* name, const char* passwd, int* idx);
/**
*@brief       检查用户名和密码是否匹配
*@param name  用户名
*@param passwd 密码
*@param idx     如果成功，传出用户下标
*@return    int 成功返回1，失败返回0
*/

int userTopUp(const char* id, double m);
/**
 * @brief 用户充值
 * @param id    充值用户的id
 * @param m     充值金额
 * @return      充值成功返回1，失败返回0
 * 
*/