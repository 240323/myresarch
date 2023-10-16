from m5stack import *
from m5stack_ui import *
from uiflow import *

# 画面を作成します
screen = M5Screen()

# 画面をクリアします
screen.clean_screen()

# 画面の背景を白に設定します
screen.set_screen_bg_color(0xFFFFFF)

# ラベルを作成します
label0 = M5Label('Text', x=60, y=67, color=0x000,  parent=None)

# 振動の強度を設定します(0~100)
value  = 0
power.setVibrationIntensity(value)

# 6回ループします
for i in range(6):
  
    # テキスト(ラベル)を表示します
    label0.set_text("Vibration ON! Intensity: {}".format(value))
  
    # 振動をONにします
    power.setVibrationEnable(True)
    
    # 振動ONで、2秒待機します
    wait(2)
  
    # テキスト(ラベル)を表示します
    label0.set_text("Vibration OFF!")

    # 振動をOFFにします
    power.setVibrationEnable(False)
    
    # 振動OFFで2秒待機します
    wait(2)
    
    if value < 100:
       value += 50
       power.setVibrationIntensity(value)
    elif value == 100:
      value = 0
      power.setVibrationIntensity(value)

