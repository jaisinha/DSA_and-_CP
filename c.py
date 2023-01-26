a = int(input())
for _ in range(a):
    totalMilk = int(input())
    bottles = [10, 7, 5, 1]
    count, j = 0, 0
    while(totalMilk > 0):
        ltrs = totalMilk/bottles[j]
        totalMilk -= ltrs*bottles[j]
        j += 1
        count += ltrs

    print(count)
