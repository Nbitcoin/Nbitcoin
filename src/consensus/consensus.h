#ifndef CONSENSUS_H
#define CONSENSUS_H

#include <string>
#include <map>
#include < stdint.h >
#include “uint256.h”
#include“block.h”

正向声明
结构 LocationProof;
结构 StakingInfo;

定位证明结构（PoL 层）
结构 LocationProof {
 std：：string 节点 IP;
 std：：字符串 gpsHash;
 bool 是已验证的;
 int64_t verifyTime;
};

双质押信息结构（PoS 层）
结构 StakeInfo {
 uint64_t mainCoinAmount;
 uint64_t usdtAmount;
 int64_t stakeTime;
 uint256 节点 Id;
};

PoL 功能
bool 验证位置(常量 uint256& nodeId, 常量 std::string& nodeIP, 常量 std::string& gpsHash);
bool IsLocationValid(常量 uint256& nodeId);

PoS 功能
bool 质押双资产(常量 uint256& nodeId, uint64_t mainCoin, uint64_t usdt, 常量 std::string& nodeIP, 常量 std::string& gpsHash);
uint64_t 计算权益权重(常量 uint256& nodeId);

核心共识功能
uint256 选择下一个区块生产者();
bool 验证区块生产者(常量 uint256& nodeId, 常量 CBlock&块);

#endif CONSENSUS_H
