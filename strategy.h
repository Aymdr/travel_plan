#ifndef STRATEGY_H
#define STRATEGY_H

//三种策略
class Strategy
{
public:
    Strategy();
    ~Strategy();

    //最少时间策略
    void leastTime_strategy(){};

    //最少费用
    void leastFee__strategy(){};

    //限时最少费用
    void leastFeeTime_strategy(){};



};

#endif // STRATEGY_H
