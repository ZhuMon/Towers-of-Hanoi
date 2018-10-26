# Towers-of-Hanoi
### 檔案名稱
```
hanoi.c
```
### 編譯方式 
```
gcc -o hanoi hanoi.c
```
### 執行方式
```
./hanoi
```
### 程式功能
河內塔 
### 程式敘述

* hanoi

  觀察河內塔的運行方式，可知將n個disks移到另一tower需要三步驟：
    + 將n-1個disks移到非目標的另一個tower : [using]
    + 將最大的disk移到目標的tower : [to]
    + 再將暫存在[using]的n-1個disks移到目標 [to]
  
  因此1. 3. 都可以用同一個函數運行，
  並在函數hanoi的開頭判斷是否搬運的是最小的disk當作終止條件。

* main

  + 輸入disks數[num]
  + if判斷式：判斷num值是否輸入正確(3~64)
  + 運行hanoi函數
  + 印出總共步驟

### 執行結果
```bash
Disks:  3
1. Move disk 1 from A to C
2. Move disk 2 from A to B
3. Move disk 1 from C to B
4. Move disk 3 from A to C
5. Move disk 1 from B to A
6. Move disk 2 from B to C
7. Move disk 1 from A to C
Total steps: 7 
```

### 執行結果
```bash
Disks:  4
1. Move disk 1 from A to B
2. Move disk 2 from A to C
3. Move disk 1 from B to C
4. Move disk 3 from A to B
5. Move disk 1 from C to A
6. Move disk 2 from C to B
7. Move disk 1 from A to B
8. Move disk 4 from A to C
9. Move disk 1 from B to C
10. Move disk 2 from B to A
11. Move disk 1 from C to A
12. Move disk 3 from B to C
13. Move disk 1 from A to B
14. Move disk 2 from A to C
15. Move disk 1 from B to C
Total steps: 15 
```
