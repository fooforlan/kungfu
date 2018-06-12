// auto generated by struct_info_parser.py, please DO NOT edit!!!

#ifndef LONGFIST_DATA_STRUCTS_PYBIND11_DEF_H
#define LONGFIST_DATA_STRUCTS_PYBIND11_DEF_H

#define LF_PYBIND11_DEF_STRUCT_LFMarketDataField\
    pybind11::class_<LFMarketDataField>(m, "LFMarketDataField")\
        .def_readonly("TradingDay", &LFMarketDataField::TradingDay)\
        .def_readonly("InstrumentID", &LFMarketDataField::InstrumentID)\
        .def_readonly("ExchangeID", &LFMarketDataField::ExchangeID)\
        .def_readonly("ExchangeInstID", &LFMarketDataField::ExchangeInstID)\
        .def_readonly("LastPrice", &LFMarketDataField::LastPrice)\
        .def_readonly("PreSettlementPrice", &LFMarketDataField::PreSettlementPrice)\
        .def_readonly("PreClosePrice", &LFMarketDataField::PreClosePrice)\
        .def_readonly("PreOpenInterest", &LFMarketDataField::PreOpenInterest)\
        .def_readonly("OpenPrice", &LFMarketDataField::OpenPrice)\
        .def_readonly("HighestPrice", &LFMarketDataField::HighestPrice)\
        .def_readonly("LowestPrice", &LFMarketDataField::LowestPrice)\
        .def_readonly("Volume", &LFMarketDataField::Volume)\
        .def_readonly("Turnover", &LFMarketDataField::Turnover)\
        .def_readonly("OpenInterest", &LFMarketDataField::OpenInterest)\
        .def_readonly("ClosePrice", &LFMarketDataField::ClosePrice)\
        .def_readonly("SettlementPrice", &LFMarketDataField::SettlementPrice)\
        .def_readonly("UpperLimitPrice", &LFMarketDataField::UpperLimitPrice)\
        .def_readonly("LowerLimitPrice", &LFMarketDataField::LowerLimitPrice)\
        .def_readonly("PreDelta", &LFMarketDataField::PreDelta)\
        .def_readonly("CurrDelta", &LFMarketDataField::CurrDelta)\
        .def_readonly("UpdateTime", &LFMarketDataField::UpdateTime)\
        .def_readonly("UpdateMillisec", &LFMarketDataField::UpdateMillisec)\
        .def_readonly("BidPrice1", &LFMarketDataField::BidPrice1)\
        .def_readonly("BidVolume1", &LFMarketDataField::BidVolume1)\
        .def_readonly("AskPrice1", &LFMarketDataField::AskPrice1)\
        .def_readonly("AskVolume1", &LFMarketDataField::AskVolume1)\
        .def_readonly("BidPrice2", &LFMarketDataField::BidPrice2)\
        .def_readonly("BidVolume2", &LFMarketDataField::BidVolume2)\
        .def_readonly("AskPrice2", &LFMarketDataField::AskPrice2)\
        .def_readonly("AskVolume2", &LFMarketDataField::AskVolume2)\
        .def_readonly("BidPrice3", &LFMarketDataField::BidPrice3)\
        .def_readonly("BidVolume3", &LFMarketDataField::BidVolume3)\
        .def_readonly("AskPrice3", &LFMarketDataField::AskPrice3)\
        .def_readonly("AskVolume3", &LFMarketDataField::AskVolume3)\
        .def_readonly("BidPrice4", &LFMarketDataField::BidPrice4)\
        .def_readonly("BidVolume4", &LFMarketDataField::BidVolume4)\
        .def_readonly("AskPrice4", &LFMarketDataField::AskPrice4)\
        .def_readonly("AskVolume4", &LFMarketDataField::AskVolume4)\
        .def_readonly("BidPrice5", &LFMarketDataField::BidPrice5)\
        .def_readonly("BidVolume5", &LFMarketDataField::BidVolume5)\
        .def_readonly("AskPrice5", &LFMarketDataField::AskPrice5)\
        .def_readonly("AskVolume5", &LFMarketDataField::AskVolume5)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFL2MarketDataField\
    pybind11::class_<LFL2MarketDataField>(m, "LFL2MarketDataField")\
        .def_readonly("TradingDay", &LFL2MarketDataField::TradingDay)\
        .def_readonly("UpdateTime", &LFL2MarketDataField::UpdateTime)\
        .def_readonly("UpdateMillisec", &LFL2MarketDataField::UpdateMillisec)\
        .def_readonly("ExchangeID", &LFL2MarketDataField::ExchangeID)\
        .def_readonly("InstrumentID", &LFL2MarketDataField::InstrumentID)\
        .def_readonly("PreClosePrice", &LFL2MarketDataField::PreClosePrice)\
        .def_readonly("OpenPrice", &LFL2MarketDataField::OpenPrice)\
        .def_readonly("ClosePrice", &LFL2MarketDataField::ClosePrice)\
        .def_readonly("IOPV", &LFL2MarketDataField::IOPV)\
        .def_readonly("YieldToMaturity", &LFL2MarketDataField::YieldToMaturity)\
        .def_readonly("AuctionPrice", &LFL2MarketDataField::AuctionPrice)\
        .def_readonly("TradingPhase", &LFL2MarketDataField::TradingPhase)\
        .def_readonly("OpenRestriction", &LFL2MarketDataField::OpenRestriction)\
        .def_readonly("HighPrice", &LFL2MarketDataField::HighPrice)\
        .def_readonly("LowPrice", &LFL2MarketDataField::LowPrice)\
        .def_readonly("LastPrice", &LFL2MarketDataField::LastPrice)\
        .def_readonly("TradeCount", &LFL2MarketDataField::TradeCount)\
        .def_readonly("TotalTradeVolume", &LFL2MarketDataField::TotalTradeVolume)\
        .def_readonly("TotalTradeValue", &LFL2MarketDataField::TotalTradeValue)\
        .def_readonly("OpenInterest", &LFL2MarketDataField::OpenInterest)\
        .def_readonly("TotalBidVolume", &LFL2MarketDataField::TotalBidVolume)\
        .def_readonly("WeightedAvgBidPrice", &LFL2MarketDataField::WeightedAvgBidPrice)\
        .def_readonly("AltWeightedAvgBidPrice", &LFL2MarketDataField::AltWeightedAvgBidPrice)\
        .def_readonly("TotalOfferVolume", &LFL2MarketDataField::TotalOfferVolume)\
        .def_readonly("WeightedAvgOfferPrice", &LFL2MarketDataField::WeightedAvgOfferPrice)\
        .def_readonly("AltWeightedAvgOfferPrice", &LFL2MarketDataField::AltWeightedAvgOfferPrice)\
        .def_readonly("BidPriceLevel", &LFL2MarketDataField::BidPriceLevel)\
        .def_readonly("OfferPriceLevel", &LFL2MarketDataField::OfferPriceLevel)\
        .def_readonly("BidPrice1", &LFL2MarketDataField::BidPrice1)\
        .def_readonly("BidVolume1", &LFL2MarketDataField::BidVolume1)\
        .def_readonly("BidCount1", &LFL2MarketDataField::BidCount1)\
        .def_readonly("BidPrice2", &LFL2MarketDataField::BidPrice2)\
        .def_readonly("BidVolume2", &LFL2MarketDataField::BidVolume2)\
        .def_readonly("BidCount2", &LFL2MarketDataField::BidCount2)\
        .def_readonly("BidPrice3", &LFL2MarketDataField::BidPrice3)\
        .def_readonly("BidVolume3", &LFL2MarketDataField::BidVolume3)\
        .def_readonly("BidCount3", &LFL2MarketDataField::BidCount3)\
        .def_readonly("BidPrice4", &LFL2MarketDataField::BidPrice4)\
        .def_readonly("BidVolume4", &LFL2MarketDataField::BidVolume4)\
        .def_readonly("BidCount4", &LFL2MarketDataField::BidCount4)\
        .def_readonly("BidPrice5", &LFL2MarketDataField::BidPrice5)\
        .def_readonly("BidVolume5", &LFL2MarketDataField::BidVolume5)\
        .def_readonly("BidCount5", &LFL2MarketDataField::BidCount5)\
        .def_readonly("BidPrice6", &LFL2MarketDataField::BidPrice6)\
        .def_readonly("BidVolume6", &LFL2MarketDataField::BidVolume6)\
        .def_readonly("BidCount6", &LFL2MarketDataField::BidCount6)\
        .def_readonly("BidPrice7", &LFL2MarketDataField::BidPrice7)\
        .def_readonly("BidVolume7", &LFL2MarketDataField::BidVolume7)\
        .def_readonly("BidCount7", &LFL2MarketDataField::BidCount7)\
        .def_readonly("BidPrice8", &LFL2MarketDataField::BidPrice8)\
        .def_readonly("BidVolume8", &LFL2MarketDataField::BidVolume8)\
        .def_readonly("BidCount8", &LFL2MarketDataField::BidCount8)\
        .def_readonly("BidPrice9", &LFL2MarketDataField::BidPrice9)\
        .def_readonly("BidVolume9", &LFL2MarketDataField::BidVolume9)\
        .def_readonly("BidCount9", &LFL2MarketDataField::BidCount9)\
        .def_readonly("BidPriceA", &LFL2MarketDataField::BidPriceA)\
        .def_readonly("BidVolumeA", &LFL2MarketDataField::BidVolumeA)\
        .def_readonly("BidCountA", &LFL2MarketDataField::BidCountA)\
        .def_readonly("OfferPrice1", &LFL2MarketDataField::OfferPrice1)\
        .def_readonly("OfferVolume1", &LFL2MarketDataField::OfferVolume1)\
        .def_readonly("OfferCount1", &LFL2MarketDataField::OfferCount1)\
        .def_readonly("OfferPrice2", &LFL2MarketDataField::OfferPrice2)\
        .def_readonly("OfferVolume2", &LFL2MarketDataField::OfferVolume2)\
        .def_readonly("OfferCount2", &LFL2MarketDataField::OfferCount2)\
        .def_readonly("OfferPrice3", &LFL2MarketDataField::OfferPrice3)\
        .def_readonly("OfferVolume3", &LFL2MarketDataField::OfferVolume3)\
        .def_readonly("OfferCount3", &LFL2MarketDataField::OfferCount3)\
        .def_readonly("OfferPrice4", &LFL2MarketDataField::OfferPrice4)\
        .def_readonly("OfferVolume4", &LFL2MarketDataField::OfferVolume4)\
        .def_readonly("OfferCount4", &LFL2MarketDataField::OfferCount4)\
        .def_readonly("OfferPrice5", &LFL2MarketDataField::OfferPrice5)\
        .def_readonly("OfferVolume5", &LFL2MarketDataField::OfferVolume5)\
        .def_readonly("OfferCount5", &LFL2MarketDataField::OfferCount5)\
        .def_readonly("OfferPrice6", &LFL2MarketDataField::OfferPrice6)\
        .def_readonly("OfferVolume6", &LFL2MarketDataField::OfferVolume6)\
        .def_readonly("OfferCount6", &LFL2MarketDataField::OfferCount6)\
        .def_readonly("OfferPrice7", &LFL2MarketDataField::OfferPrice7)\
        .def_readonly("OfferVolume7", &LFL2MarketDataField::OfferVolume7)\
        .def_readonly("OfferCount7", &LFL2MarketDataField::OfferCount7)\
        .def_readonly("OfferPrice8", &LFL2MarketDataField::OfferPrice8)\
        .def_readonly("OfferVolume8", &LFL2MarketDataField::OfferVolume8)\
        .def_readonly("OfferCount8", &LFL2MarketDataField::OfferCount8)\
        .def_readonly("OfferPrice9", &LFL2MarketDataField::OfferPrice9)\
        .def_readonly("OfferVolume9", &LFL2MarketDataField::OfferVolume9)\
        .def_readonly("OfferCount9", &LFL2MarketDataField::OfferCount9)\
        .def_readonly("OfferPriceA", &LFL2MarketDataField::OfferPriceA)\
        .def_readonly("OfferVolumeA", &LFL2MarketDataField::OfferVolumeA)\
        .def_readonly("OfferCountA", &LFL2MarketDataField::OfferCountA)\
        .def_readonly("InstrumentStatus", &LFL2MarketDataField::InstrumentStatus)\
        .def_readonly("PreIOPV", &LFL2MarketDataField::PreIOPV)\
        .def_readonly("PERatio1", &LFL2MarketDataField::PERatio1)\
        .def_readonly("PERatio2", &LFL2MarketDataField::PERatio2)\
        .def_readonly("UpperLimitPrice", &LFL2MarketDataField::UpperLimitPrice)\
        .def_readonly("LowerLimitPrice", &LFL2MarketDataField::LowerLimitPrice)\
        .def_readonly("WarrantPremiumRatio", &LFL2MarketDataField::WarrantPremiumRatio)\
        .def_readonly("TotalWarrantExecQty", &LFL2MarketDataField::TotalWarrantExecQty)\
        .def_readonly("PriceDiff1", &LFL2MarketDataField::PriceDiff1)\
        .def_readonly("PriceDiff2", &LFL2MarketDataField::PriceDiff2)\
        .def_readonly("ETFBuyNumber", &LFL2MarketDataField::ETFBuyNumber)\
        .def_readonly("ETFBuyAmount", &LFL2MarketDataField::ETFBuyAmount)\
        .def_readonly("ETFBuyMoney", &LFL2MarketDataField::ETFBuyMoney)\
        .def_readonly("ETFSellNumber", &LFL2MarketDataField::ETFSellNumber)\
        .def_readonly("ETFSellAmount", &LFL2MarketDataField::ETFSellAmount)\
        .def_readonly("ETFSellMoney", &LFL2MarketDataField::ETFSellMoney)\
        .def_readonly("WithdrawBuyNumber", &LFL2MarketDataField::WithdrawBuyNumber)\
        .def_readonly("WithdrawBuyAmount", &LFL2MarketDataField::WithdrawBuyAmount)\
        .def_readonly("WithdrawBuyMoney", &LFL2MarketDataField::WithdrawBuyMoney)\
        .def_readonly("TotalBidNumber", &LFL2MarketDataField::TotalBidNumber)\
        .def_readonly("BidTradeMaxDuration", &LFL2MarketDataField::BidTradeMaxDuration)\
        .def_readonly("NumBidOrders", &LFL2MarketDataField::NumBidOrders)\
        .def_readonly("WithdrawSellNumber", &LFL2MarketDataField::WithdrawSellNumber)\
        .def_readonly("WithdrawSellAmount", &LFL2MarketDataField::WithdrawSellAmount)\
        .def_readonly("WithdrawSellMoney", &LFL2MarketDataField::WithdrawSellMoney)\
        .def_readonly("TotalOfferNumber", &LFL2MarketDataField::TotalOfferNumber)\
        .def_readonly("OfferTradeMaxDuration", &LFL2MarketDataField::OfferTradeMaxDuration)\
        .def_readonly("NumOfferOrders", &LFL2MarketDataField::NumOfferOrders)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFL2IndexField\
    pybind11::class_<LFL2IndexField>(m, "LFL2IndexField")\
        .def_readonly("TradingDay", &LFL2IndexField::TradingDay)\
        .def_readonly("UpdateTime", &LFL2IndexField::UpdateTime)\
        .def_readonly("UpdateMillisec", &LFL2IndexField::UpdateMillisec)\
        .def_readonly("ExchangeID", &LFL2IndexField::ExchangeID)\
        .def_readonly("InstrumentID", &LFL2IndexField::InstrumentID)\
        .def_readonly("PreCloseIndex", &LFL2IndexField::PreCloseIndex)\
        .def_readonly("OpenIndex", &LFL2IndexField::OpenIndex)\
        .def_readonly("CloseIndex", &LFL2IndexField::CloseIndex)\
        .def_readonly("HighIndex", &LFL2IndexField::HighIndex)\
        .def_readonly("LowIndex", &LFL2IndexField::LowIndex)\
        .def_readonly("LastIndex", &LFL2IndexField::LastIndex)\
        .def_readonly("TurnOver", &LFL2IndexField::TurnOver)\
        .def_readonly("TotalVolume", &LFL2IndexField::TotalVolume)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFL2OrderField\
    pybind11::class_<LFL2OrderField>(m, "LFL2OrderField")\
        .def_readonly("TradingDay", &LFL2OrderField::TradingDay)\
        .def_readonly("UpdateTime", &LFL2OrderField::UpdateTime)\
        .def_readonly("UpdateMillisec", &LFL2OrderField::UpdateMillisec)\
        .def_readonly("ExchangeID", &LFL2OrderField::ExchangeID)\
        .def_readonly("InstrumentID", &LFL2OrderField::InstrumentID)\
        .def_readonly("OrderGroup", &LFL2OrderField::OrderGroup)\
        .def_readonly("OrderIndex", &LFL2OrderField::OrderIndex)\
        .def_readonly("Price", &LFL2OrderField::Price)\
        .def_readonly("Volume", &LFL2OrderField::Volume)\
        .def_readonly("Side", &LFL2OrderField::Side)\
        .def_readonly("OrderKind", &LFL2OrderField::OrderKind)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFL2TradeField\
    pybind11::class_<LFL2TradeField>(m, "LFL2TradeField")\
        .def_readonly("TradingDay", &LFL2TradeField::TradingDay)\
        .def_readonly("UpdateTime", &LFL2TradeField::UpdateTime)\
        .def_readonly("UpdateMillisec", &LFL2TradeField::UpdateMillisec)\
        .def_readonly("ExchangeID", &LFL2TradeField::ExchangeID)\
        .def_readonly("InstrumentID", &LFL2TradeField::InstrumentID)\
        .def_readonly("TradeGroup", &LFL2TradeField::TradeGroup)\
        .def_readonly("TradeIndex", &LFL2TradeField::TradeIndex)\
        .def_readonly("BidNo", &LFL2TradeField::BidNo)\
        .def_readonly("AskNo", &LFL2TradeField::AskNo)\
        .def_readonly("Price", &LFL2TradeField::Price)\
        .def_readonly("Volume", &LFL2TradeField::Volume)\
        .def_readonly("Exec", &LFL2TradeField::Exec)\
        .def_readonly("BSFlag", &LFL2TradeField::BSFlag)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFBarMarketDataField\
    pybind11::class_<LFBarMarketDataField>(m, "LFBarMarketDataField")\
        .def_readonly("TradingDay", &LFBarMarketDataField::TradingDay)\
        .def_readonly("InstrumentID", &LFBarMarketDataField::InstrumentID)\
        .def_readonly("UpperLimitPrice", &LFBarMarketDataField::UpperLimitPrice)\
        .def_readonly("LowerLimitPrice", &LFBarMarketDataField::LowerLimitPrice)\
        .def_readonly("StartUpdateTime", &LFBarMarketDataField::StartUpdateTime)\
        .def_readonly("StartUpdateMillisec", &LFBarMarketDataField::StartUpdateMillisec)\
        .def_readonly("EndUpdateTime", &LFBarMarketDataField::EndUpdateTime)\
        .def_readonly("EndUpdateMillisec", &LFBarMarketDataField::EndUpdateMillisec)\
        .def_readonly("Open", &LFBarMarketDataField::Open)\
        .def_readonly("Close", &LFBarMarketDataField::Close)\
        .def_readonly("Low", &LFBarMarketDataField::Low)\
        .def_readonly("High", &LFBarMarketDataField::High)\
        .def_readonly("Volume", &LFBarMarketDataField::Volume)\
        .def_readonly("StartVolume", &LFBarMarketDataField::StartVolume)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFQryPositionField\
    pybind11::class_<LFQryPositionField>(m, "LFQryPositionField")\
        .def_readonly("BrokerID", &LFQryPositionField::BrokerID)\
        .def_readonly("InvestorID", &LFQryPositionField::InvestorID)\
        .def_readonly("InstrumentID", &LFQryPositionField::InstrumentID)\
        .def_readonly("ExchangeID", &LFQryPositionField::ExchangeID)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFRspPositionField\
    pybind11::class_<LFRspPositionField>(m, "LFRspPositionField")\
        .def_readonly("InstrumentID", &LFRspPositionField::InstrumentID)\
        .def_readonly("YdPosition", &LFRspPositionField::YdPosition)\
        .def_readonly("Position", &LFRspPositionField::Position)\
        .def_readonly("BrokerID", &LFRspPositionField::BrokerID)\
        .def_readonly("InvestorID", &LFRspPositionField::InvestorID)\
        .def_readonly("PositionCost", &LFRspPositionField::PositionCost)\
        .def_readonly("HedgeFlag", &LFRspPositionField::HedgeFlag)\
        .def_readonly("PosiDirection", &LFRspPositionField::PosiDirection)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFInputOrderField\
    pybind11::class_<LFInputOrderField>(m, "LFInputOrderField")\
        .def_readonly("BrokerID", &LFInputOrderField::BrokerID)\
        .def_readonly("UserID", &LFInputOrderField::UserID)\
        .def_readonly("InvestorID", &LFInputOrderField::InvestorID)\
        .def_readonly("BusinessUnit", &LFInputOrderField::BusinessUnit)\
        .def_readonly("ExchangeID", &LFInputOrderField::ExchangeID)\
        .def_readonly("InstrumentID", &LFInputOrderField::InstrumentID)\
        .def_readonly("OrderRef", &LFInputOrderField::OrderRef)\
        .def_readonly("LimitPrice", &LFInputOrderField::LimitPrice)\
        .def_readonly("Volume", &LFInputOrderField::Volume)\
        .def_readonly("MinVolume", &LFInputOrderField::MinVolume)\
        .def_readonly("TimeCondition", &LFInputOrderField::TimeCondition)\
        .def_readonly("VolumeCondition", &LFInputOrderField::VolumeCondition)\
        .def_readonly("OrderPriceType", &LFInputOrderField::OrderPriceType)\
        .def_readonly("Direction", &LFInputOrderField::Direction)\
        .def_readonly("OffsetFlag", &LFInputOrderField::OffsetFlag)\
        .def_readonly("HedgeFlag", &LFInputOrderField::HedgeFlag)\
        .def_readonly("ForceCloseReason", &LFInputOrderField::ForceCloseReason)\
        .def_readonly("StopPrice", &LFInputOrderField::StopPrice)\
        .def_readonly("IsAutoSuspend", &LFInputOrderField::IsAutoSuspend)\
        .def_readonly("ContingentCondition", &LFInputOrderField::ContingentCondition)\
        .def_readonly("MiscInfo", &LFInputOrderField::MiscInfo)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFRtnOrderField\
    pybind11::class_<LFRtnOrderField>(m, "LFRtnOrderField")\
        .def_readonly("BrokerID", &LFRtnOrderField::BrokerID)\
        .def_readonly("UserID", &LFRtnOrderField::UserID)\
        .def_readonly("ParticipantID", &LFRtnOrderField::ParticipantID)\
        .def_readonly("InvestorID", &LFRtnOrderField::InvestorID)\
        .def_readonly("BusinessUnit", &LFRtnOrderField::BusinessUnit)\
        .def_readonly("InstrumentID", &LFRtnOrderField::InstrumentID)\
        .def_readonly("OrderRef", &LFRtnOrderField::OrderRef)\
        .def_readonly("ExchangeID", &LFRtnOrderField::ExchangeID)\
        .def_readonly("LimitPrice", &LFRtnOrderField::LimitPrice)\
        .def_readonly("VolumeTraded", &LFRtnOrderField::VolumeTraded)\
        .def_readonly("VolumeTotal", &LFRtnOrderField::VolumeTotal)\
        .def_readonly("VolumeTotalOriginal", &LFRtnOrderField::VolumeTotalOriginal)\
        .def_readonly("TimeCondition", &LFRtnOrderField::TimeCondition)\
        .def_readonly("VolumeCondition", &LFRtnOrderField::VolumeCondition)\
        .def_readonly("OrderPriceType", &LFRtnOrderField::OrderPriceType)\
        .def_readonly("Direction", &LFRtnOrderField::Direction)\
        .def_readonly("OffsetFlag", &LFRtnOrderField::OffsetFlag)\
        .def_readonly("HedgeFlag", &LFRtnOrderField::HedgeFlag)\
        .def_readonly("OrderStatus", &LFRtnOrderField::OrderStatus)\
        .def_readonly("RequestID", &LFRtnOrderField::RequestID)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFRtnTradeField\
    pybind11::class_<LFRtnTradeField>(m, "LFRtnTradeField")\
        .def_readonly("BrokerID", &LFRtnTradeField::BrokerID)\
        .def_readonly("UserID", &LFRtnTradeField::UserID)\
        .def_readonly("InvestorID", &LFRtnTradeField::InvestorID)\
        .def_readonly("BusinessUnit", &LFRtnTradeField::BusinessUnit)\
        .def_readonly("InstrumentID", &LFRtnTradeField::InstrumentID)\
        .def_readonly("OrderRef", &LFRtnTradeField::OrderRef)\
        .def_readonly("ExchangeID", &LFRtnTradeField::ExchangeID)\
        .def_readonly("TradeID", &LFRtnTradeField::TradeID)\
        .def_readonly("OrderSysID", &LFRtnTradeField::OrderSysID)\
        .def_readonly("ParticipantID", &LFRtnTradeField::ParticipantID)\
        .def_readonly("ClientID", &LFRtnTradeField::ClientID)\
        .def_readonly("Price", &LFRtnTradeField::Price)\
        .def_readonly("Volume", &LFRtnTradeField::Volume)\
        .def_readonly("TradingDay", &LFRtnTradeField::TradingDay)\
        .def_readonly("TradeTime", &LFRtnTradeField::TradeTime)\
        .def_readonly("Direction", &LFRtnTradeField::Direction)\
        .def_readonly("OffsetFlag", &LFRtnTradeField::OffsetFlag)\
        .def_readonly("HedgeFlag", &LFRtnTradeField::HedgeFlag)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFOrderActionField\
    pybind11::class_<LFOrderActionField>(m, "LFOrderActionField")\
        .def_readonly("BrokerID", &LFOrderActionField::BrokerID)\
        .def_readonly("InvestorID", &LFOrderActionField::InvestorID)\
        .def_readonly("InstrumentID", &LFOrderActionField::InstrumentID)\
        .def_readonly("ExchangeID", &LFOrderActionField::ExchangeID)\
        .def_readonly("UserID", &LFOrderActionField::UserID)\
        .def_readonly("OrderRef", &LFOrderActionField::OrderRef)\
        .def_readonly("OrderSysID", &LFOrderActionField::OrderSysID)\
        .def_readonly("RequestID", &LFOrderActionField::RequestID)\
        .def_readonly("ActionFlag", &LFOrderActionField::ActionFlag)\
        .def_readonly("LimitPrice", &LFOrderActionField::LimitPrice)\
        .def_readonly("VolumeChange", &LFOrderActionField::VolumeChange)\
        .def_readonly("KfOrderID", &LFOrderActionField::KfOrderID)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFQryAccountField\
    pybind11::class_<LFQryAccountField>(m, "LFQryAccountField")\
        .def_readonly("BrokerID", &LFQryAccountField::BrokerID)\
        .def_readonly("InvestorID", &LFQryAccountField::InvestorID)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFRspAccountField\
    pybind11::class_<LFRspAccountField>(m, "LFRspAccountField")\
        .def_readonly("BrokerID", &LFRspAccountField::BrokerID)\
        .def_readonly("InvestorID", &LFRspAccountField::InvestorID)\
        .def_readonly("PreMortgage", &LFRspAccountField::PreMortgage)\
        .def_readonly("PreCredit", &LFRspAccountField::PreCredit)\
        .def_readonly("PreDeposit", &LFRspAccountField::PreDeposit)\
        .def_readonly("preBalance", &LFRspAccountField::preBalance)\
        .def_readonly("PreMargin", &LFRspAccountField::PreMargin)\
        .def_readonly("Deposit", &LFRspAccountField::Deposit)\
        .def_readonly("Withdraw", &LFRspAccountField::Withdraw)\
        .def_readonly("FrozenMargin", &LFRspAccountField::FrozenMargin)\
        .def_readonly("FrozenCash", &LFRspAccountField::FrozenCash)\
        .def_readonly("FrozenCommission", &LFRspAccountField::FrozenCommission)\
        .def_readonly("CurrMargin", &LFRspAccountField::CurrMargin)\
        .def_readonly("CashIn", &LFRspAccountField::CashIn)\
        .def_readonly("Commission", &LFRspAccountField::Commission)\
        .def_readonly("CloseProfit", &LFRspAccountField::CloseProfit)\
        .def_readonly("PositionProfit", &LFRspAccountField::PositionProfit)\
        .def_readonly("Balance", &LFRspAccountField::Balance)\
        .def_readonly("Available", &LFRspAccountField::Available)\
        .def_readonly("WithdrawQuota", &LFRspAccountField::WithdrawQuota)\
        .def_readonly("Reserve", &LFRspAccountField::Reserve)\
        .def_readonly("TradingDay", &LFRspAccountField::TradingDay)\
        .def_readonly("Credit", &LFRspAccountField::Credit)\
        .def_readonly("Mortgage", &LFRspAccountField::Mortgage)\
        .def_readonly("ExchangeMargin", &LFRspAccountField::ExchangeMargin)\
        .def_readonly("DeliveryMargin", &LFRspAccountField::DeliveryMargin)\
        .def_readonly("ExchangeDeliveryMargin", &LFRspAccountField::ExchangeDeliveryMargin)\
        .def_readonly("ReserveBalance", &LFRspAccountField::ReserveBalance)\
        .def_readonly("Equity", &LFRspAccountField::Equity)\
        .def_readonly("MarketValue", &LFRspAccountField::MarketValue)\
        ;
#define LF_PYBIND11_DEF_STRUCT_LFQryMarketDataField\
    pybind11::class_<LFQryMarketDataField>(m, "LFQryMarketDataField")\
        .def_readonly("ProductID", &LFQryMarketDataField::ProductID)\
        .def_readonly("InstrumentID", &LFQryMarketDataField::InstrumentID)\
        ;
#endif