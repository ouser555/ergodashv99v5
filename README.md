# ergodashv99v5
20230122-qmk firmware-0.19.10  


## 這個是 qmk firmware 0.19.10版本，使用在Ergodash rev2v99版本的鍵盤上

* ergodash資料夾放到user.../qmk_firmware/keyboard/資料夾底下

* 執行 make ergodash/rev2:v99v5
  即可完成編譯
  
* 版本特點
  * 因為VIA configurator 也隨同qmk一起更新了，所以這是使用相應的VIA 2.05版本，舊的版本可能沒辦法使用。
    /VIA configurator/資料夾底下也有相應的json檔。
    * 順便關掉一些沒使用的RGB功能菜單，只留下可以操作的功能介面。
    
  * 原本的版本在RGB亮度的操作上沒有設限制，可以讓使用者把亮度調到最高，這樣導致了有些使用者會因為超過USB 2.0的額定電流，
    造成電腦自行將USB斷線，或者鍵盤端直接供電不足然後有些功能無法操作。
    
    * 原本的解決方式是請使用者換一條USB type-C有支援快衝的充電線，並使用電腦上USB 3.0以上的port，使供電能超過500mA的限制。
      
    * 改為直接由鍵盤程式端限制RGB最大亮度，使電流不會超過USB 2.0額定的500mA。減少使用負擔。
    
  
  



