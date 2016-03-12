#ifndef TRAVELLER_H
#define TRAVELLER_H

#include<travelroad.h>
#include<String>
#include<Vector>
using namespace std;

/*旅客信息*/
class Traveller
{
public:
    //构造函数要求默认起始、终点，经过城市都为Beijing
    Traveller();

    //读取旅客需求
    void inputDemmand();

    //获取路线
    void getRoad();

    ~Traveller();

private:
    string startPlace;
    string endPlace;
    vector<string> passCities;
    TravelRoad myRoad;
};

#endif // TRAVELLER_H
