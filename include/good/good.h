//good.h
#include "config.h"

typedef enum {
    SELLING,
    SOLD,
    BANED
}State;

typedef struct {
    char id[MAX_LEN];
    char name[MAX_LEN];
    double price;
    char seller_id[MAX_LEN];
    State state;
    char date[MAX_LEN];
    char description[MAX_LEN];
}Good;

void pullGoods();
/**
 * @brief 将外部文件导入商品信息
*/

void pushGoods();
/**
 * @brief 将商品导出外部文件
*/

Good* getGood(int index);
/**
 * @brief 获取商品对象
 * @param index 商品在数组的下标
 * 
 * @return User*  指向商品的指针
*/

int addGood(Good* g);
/**
 * @brief 添加商品
 * @param g 待添加的商品指针
 * @return 成功返回1，失败返回0
*/

int searchGoodID(const char* id);
/**
 * @brief 查找给定ID的商品
 * @param 待查找的物品ID
 * @return 成功返回1，失败返回-1
*/

int deleteGood(const char* id, const char* who);
/**
 * @brief 删除给定ID的物品
 * @param id 待删除物品的id
 * @param who 操作执行者的id，管理员id为NULL
 * @return 成功返回1，失败返回0
*/

void goodInfo(int i);
/**
 * @brief 打印物品的详细信息
 * 
 * @param 物品在数组的下标
*/

void printGoods();
/**
 * @brief 打印所有商品的信息
*/

void searchGoodName4Buyer(const char* name);
/**
 * @brief 为买家搜索商品->只搜索在售的，然后打印？
 * @param name 待搜索的商品名字
*/

void searchGoodName4Admin(const char* name);
/**
 * @brief 为管理员搜索商品-> 搜索所有商品
 * @param 待搜索物品的名字
*/

void printGoods4Seller(const char* id);
/**
 * @brief 打印给定卖家id的商品（卖家使用，查询自己的商品）
 * @param id 给定的卖家id
 * 
*/

void printGood4Buyer(const char* id);
/**
 * @brief 打印给定卖家id正在出售的商品（买家使用，看卖家的在售商品）
 * @param id 给定卖家的id
 * 
*/