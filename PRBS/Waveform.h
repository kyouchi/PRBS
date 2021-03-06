﻿#pragma once
#include <vector>

//1秒間の波形の抽象クラス
class Waveform
{
private:
   Waveform();
   ~Waveform();
protected:
   const unsigned int fs = 24000;//サンプリング周波数[Hz]
   const unsigned int f0 = 500;//パイロット信号の周波数[Hz]
   std::vector<double> t;//x軸(t[s])のplotコンテナ
   std::vector<double> y;//y軸(Amplitude)のplotコンテナ


   void initialize();//コンテナの初期化
   virtual void inputY() = 0;//各波形ごとのy軸への代入
public:
   double getYplot(unsigned int xplot);
};
