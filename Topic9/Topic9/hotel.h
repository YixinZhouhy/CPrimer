#define QUIT  5
#define HOTEL1  180.00
#define HOTEL2	225.00
#define HOTEL3	255.00
#define HOTEL4	355.00
#define DISCOUNT  0.95
#define STARS  "*****************"


int menu(void);  //显示menu
int getnight(void);  //返回预订天数
void showprice(double rate, int nights);  //根据费率、入住天数计算费用并显示