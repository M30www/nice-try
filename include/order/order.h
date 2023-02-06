//order.h
#include "config.h"
typedef struct {
    char id[MAX_LEN];
    char good_id[MAX_LEN];
    double price;
    char date[MAX_LEN];
    char seller_id[MAX_LEN];
    char buyer_id[MAX_LEN];
}Order;

void pullOrders();
/**
 * @brief 从外部文件导入订单信息
*/

void pushOrders();
/**
 * @brief 从内部导出订单信息到外部文件
*/

int addOrder(Order* o);
/**
 * @brief 增加一个订单
 * @param o 待加入的订单
 * @return 成功返回1失败返回0
*/

void printOrders();
/**
 * @brief 打印所有的订单信息
 * 
*/
void printOrders4Seller(const char* id);
/**
 * @brief 打印给出卖家id打印订单
 * @param id 卖家id
*/

void printOrders4Buyer(const char* id);
/**
 * @brief 打印给出买家id的订单
 * @param id 卖家买家
*/
