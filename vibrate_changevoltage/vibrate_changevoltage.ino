/*
*******************************************************************************
  Copyright (c) 2021 by M5Stack
                   M5Core2のサンプルソースコード付き
  詳細についてはこちらをご覧ください: https://docs.m5stack.com/en/core/core2

  説明: 振動の例
  日付: 2021/9/18
*******************************************************************************
*/
#include <M5Core2.h>

/* M5Core2が起動またはリセットされた後
  setUp()関数の中のプログラムが実行され、この部分は一度だけ実行されます。 */
void setup() {
  M5.begin();  // M5Core2を初期化します。
}

/* setup()の中のプログラムが実行された後、loop()の中のプログラムが実行されます。
  loop()関数は無限ループで、その中のプログラムが繰り返し実行されます。 */
void loop() {

  M5.Axp.SetLDOEnable(3, true);  // 振動をオンにします。
  M5.Axp.SetLDOVoltage(3, 0);//電圧を調整
  delay(1000);
  M5.Axp.SetLDOEnable(3, false);  // 振動をオフにします。
  delay(1000);

  M5.Axp.SetLDOEnable(3, true);  // 振動をオンにします。
  M5.Axp.SetLDOVoltage(3, 3300); 
  delay(1000);
  M5.Axp.SetLDOEnable(3, false);  // 振動をオフにします。
  delay(1000);
}
