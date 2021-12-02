# Introduction to Programming_1

NTHU: 11020CS 135500

Online Course: https://ocw.nthu.edu.tw/ocw/index.php?page=course&cid=134&

Topic: Treasure-hunt

Reference: n/a

Description: 
```javascript=
map 是一個二維陣列
用來表示地圖的內容
map_reset() 的作用是清除地圖內容以及重設邊界
map_show() 則是把 map 的內容顯示到螢幕上

blocks 也是二維陣列
記錄磚牆的位置
會透過 blocks_read() 從檔案 blocks.txt 中讀取位置資訊
然後用 blocks_put_on_map() 在地圖 map 裡面的對應位置放置磚牆
磚牆是固定的
車子前進時如果遇到磚牆會被擋住
blocks.txt 的內容如下
4
2 2
9 9
9 2
2 9

jewels 二維陣列記錄寶物的位置
會藉由 jewels_read() 從檔案 jewels.txt 中讀取位置資訊
然後用 jewels_put_on_map() 在地圖 map 裡面的對應位置放置寶物
車子前進時如果遇到寶物就會撿起來
jewels.txt 內容如下
5
2 5
2 7
8 8
9 5
10 4

car 二維陣列記錄車子的外觀 @ @ 表示車頭方向
車子的起始位置是 (row: 3, column: 4)
用來記錄車子目前位置的變數是 car_row 和 car_col
車子的方向則是由 car_direction 表示
我們可以讓可以用 0, 1, 2, 3 來分別代表車子朝向 右、下、左、上
所以如果 car_direction 的值等於 2 表示車子目前朝左
car_earnings 則是記錄撿到的寶物數量

需要自行完成的函數是
car_rotate90()和 car_move()
car_rotate90() 要將 car 二維陣列順時鐘旋轉 90 度
並且更新 car_direction 的值 讓它符合目前方向

car_move() 則要將 car 依照目前方向
向前移動一格
在移動之前必須先判斷是否會被磚牆擋住
也不能超出 map 原本的外牆
移動之後
要將碰到的寶物撿起來 (撿走之後就沒了 不能重複撿)

車子的移動是根據 action.txt 的指示
只有兩種動作
'R' 代表順時鐘旋轉九十度
'F' 代表前進一格
做完全部的動作之後
最後要輸出車子目前的狀態

假設輸入的 action.txt 內容是
FRFFFFFFFFRRFFFFFFFFF
最後的狀態應該是
 
HHHHHHHHHHHH
H....@O@...H
H.#..OOO.#.H
H....OOO...H
H..........H
H..........H
H..........H
H..........H
H.......$..H
H.#......#.H
H...$......H
HHHHHHHHHHHH
Earnings: 3
Position: row=1, col=5
Direction: U
```


