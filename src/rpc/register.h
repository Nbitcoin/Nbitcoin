#ifndef STAKING_H
#define STAKING_H

#include “共识.h”

类 StakingManager {
公共:
    注册双重质押（从共识层封装 质押双资产）
 布尔语注册DualStake(常量 uint256&nodeId，uint64_t mainCoin，uint64_t usdt，常量 std：：string& nodeIP，常量 std：：string& gpsHash);
    查询质押信息
 质押信息获取质押信息(常量 uint256& nodeId);
    提取质押
 布尔语提取权益(常量 uint256& nodeId);
};

#endif STAKING_H
