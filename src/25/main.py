def number_of_digits(n):
    count = 0
    while(n > 0):
        n = n//10
        count += 1
    return count

values = [1,1]
for i in range(2,100000):
    values.append(values[i-1] + values[i-2])
    if (number_of_digits(values[-1])==1000 ):
        break

print(i)
