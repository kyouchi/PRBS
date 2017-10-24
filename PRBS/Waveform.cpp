#include "stdafx.h"
#include "Waveform.h"


void Waveform::initialize()
{
   for(auto t_axis = 0; t_axis < 1/static_cast<double>(f0); t_axis+=(1/fs))
   {
      t.push_back(t_axis);//1秒間サンプリング周波数ずつ追加
   }
   inputY();//Yにプロットを入れる
}

double Waveform::getYplot(unsigned int xplot)
{
   return y[xplot];
}

Waveform::Waveform()
{
}


Waveform::~Waveform()
{
}
