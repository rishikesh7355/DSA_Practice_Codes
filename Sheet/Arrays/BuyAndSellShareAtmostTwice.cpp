//////////DRY RUN not working correctly 
         0   1 2 3  4  5 
price = [10 22 5 75 65 80]
n = 6
max_price =price[n-1] =  80
profit = [0  0 0 0 0 0 ]
Buy Sell Buy Sell 
first loop from right to left keeping sell fixed 
i = n-2 = 4 
max_price =max(80,price[4]) = 80
profit[i] = profit[4] = max(profit[5],80-65) = max(0,15) = 15 profit = [0 0 0 0 15 0 ]
i = n-3 = 3
max_price = max(80,price[3]) = max(80,75) = 80
profit[3]= max(profit[4],80-75) = max(0,5) = 5 profit = [0 0  0 5 15 0]

i = n-4 = 2
max_price = max(80,price[2]) = 80
profit[2] = max(profit[3],80-price[2]) = max(75,80-5) = 75 profit = [0 0 75 5 15 0]

i= n-5 = 1
max_price = max(80,22) = 80
profit[1] = max(profit[2],80-22) = max(0,58) = 58 profit = [0 58,75,5,15,0]

i = n-6 = 0
max_price = max(80,10) = 80
profit[0] = max(profit[1],80-10) = max(58,70) = 70 profit = [70 , 58,75,5,15,0]

now iterate from left to right keeping buy value fixed

         0  1  2  3 4  5 
price = [10 22 5 75 65 80]
min_price = price[0] = 10
i = 1
min_price  = min(min_price ,price[1]) = min(10,22) = 10
profit[1] = max(profit[0],profit[1]+(price[1]-min_price))
          = max(70,58+22-10)  = max(70,70)    = 70 
profit = [70,70,75,5,15,0]
   
i = 2
min_price  = min(min_price ,price[2]) = min(10,5) = 5
profit[2] = max(profit[1],profit[2]+(price[2]-min_price))
          = max(70,75+5-5)  = max(75,75)    = 75 
profit = [70,70,75,5,15,0]

i = 3
min_price  = min(min_price ,price[3]) = min(5,75) = 5
profit[3] = max(profit[2],profit[3]+(price[3]-min_price))
          = max(75,5+75-5)  = max(75,75)    = 75 
profit = [70,70,75,75,15,0]

i = 4
min_price  = min(min_price ,price[4]) = min(5,65) = 5
profit[4] = max(profit[3],profit[4]+(price[4]-min_price))
          = max(75,15+65-5)  = max(75,75)    = 75 
profit = [70,70,75,75,75,0]

i = 5
min_price  = min(min_price ,price[5]) = min(5,80) = 5
profit[5] = max(profit[4],profit[5]+(price[5]-min_price))
          = max(75,0+80-5)  = max(75,75)    = 75 
profit = [70,70,75,75,75,75]
   

 