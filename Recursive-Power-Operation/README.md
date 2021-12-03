# Introduction to Programming_1

NTHU: 11020CS 135500

Online Course: https://ocw.nthu.edu.tw/ocw/index.php?page=course&cid=134&

Topic: Recursive-Power-Operation

Reference: n/a

Description: 
```javascript=
講義 [練習 W09_05]，宣告 double power(double n, int p); ，然後使用下面的方式來做遞迴:
(0) 先檢查 p 是否等於 0，是的話就傳回答案 1; 若 p 不等於 0 則先算出 ans = power(n, p/2);
(1) 如果 p 是偶數，則 return ans*ans;
(2) 如果 p 是奇數，則 return n*ans*ans;
這裡有使用到整數除法無條件捨去的特性。
```


