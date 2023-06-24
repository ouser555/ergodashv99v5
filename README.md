# ergodashv99v5

## 20230409更新說明

* 20230409-qmk firmware-0.20.4
  * 原始檔  
    https://github.com/ouser555/ergodashv99v5/tree/main/firmware/ergodash-20230409
    
  * 燒錄檔  
    https://github.com/ouser555/ergodashv99v5/blob/main/hex/ergodash_rev2_v99v5_20230409.hex
    
  * VIA config檔  
    https://github.com/ouser555/ergodashv99v5/blob/main/VIA%20configurator/ErgoDash_4key_2u_inner%20-remapt03.json
  
* 版本特點
  * 修正電腦關機後再開鍵盤連線會不正常的問題
  
  * 電腦休眠時RGB自動關閉
  
  * 支援VIA configurator 3.0.0
  
  * VIA RGB亮度拖動範圍限制在150以下，防止電流過載
 
*  補充說明
  
   QMK不停更新中，這個版本的程式用到QMK新的版本八程式是無法編譯過的，
   
   如果你想要使用最新版的QMK，可以參考它的changelog，
   
   https://github.com/qmk/qmk_firmware/tree/master/docs/ChangeLog
   
   根據它變更的內容去做相應的修改即可。

## 20230123更新說明

20230122-qmk firmware-0.19.10  


## 這個是 qmk firmware 0.19.10版本，使用在Ergodash rev2v99版本的鍵盤上

* ergodash資料夾放到user.../qmk_firmware/keyboard/資料夾底下

* 執行 make ergodash/rev2:v99v5
  即可完成編譯
  
* 版本特點
  * 因為VIA configurator 也隨同qmk一起更新了，所以這是使用相應的VIA 2.10版本，舊的版本可能沒辦法使用。
    /VIA configurator/資料夾底下也有相應的json檔。
    
    * 順便關掉一些沒使用的RGB功能菜單，只留下可以操作的功能介面。
    
    * 燒錄檔下載位置
      https://github.com/ouser555/ergodashv99v5/blob/main/hex/ergodash_rev2_v99v5.hex
      
      (對畫面右上方的RAW按鈕，右鍵另存連結為...)
    
    * 下載最VIA 2.10版，
      https://github.com/the-via/releases/releases/
      
    * 相應的json檔  
      ~~https://github.com/ouser555/ergodashv99v5/blob/main/VIA%20configurator/ErgoDash_4key_2u_inner%20-remap.json~~ 
      https://github.com/ouser555/ergodashv99v5/blob/main/VIA%20configurator/ErgoDash_4key_2u_inner%20-remapt02.json
      
      (對畫面右上方的RAW按鈕，右鍵另存連結為...)
    
    * 也可以使用網頁版的VIA configurator
      https://usevia.app/#/    
    
  * 原本的版本在RGB亮度的操作上沒有設限制，可以讓使用者把亮度調到最高，這樣導致了有些使用者會因為超過USB 2.0的額定電流，
    造成電腦自行將USB斷線，或者鍵盤端直接供電不足然後有些功能無法操作。
    
    * 原本的解決方式是請使用者換一條USB type-C有支援快衝的充電線，並使用電腦上USB 3.0以上的port，使供電能超過500mA的限制。
      
    * 改為直接由鍵盤程式端限制RGB最大亮度，使電流不會超過USB 2.0額定的500mA。減少使用負擔。
    
    
    
## 燒錄說明

* 重新燒錄任體會將你原本改過的鍵盤設定情除掉，的更新你的鍵盤之前，建議可以先用VIA configuration儲存你使用中的keymap，待更新之後再複寫回來。

* https://github.com/ouser555/ergodashv99/blob/main/QMKToolbox/readme.md
    

    
  
  



