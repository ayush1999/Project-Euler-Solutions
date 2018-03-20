import itertools
import math

def isprime(x):
    count = 0
    for i in range(2, int(math.sqrt(x)) + 1):
        if(x % i == 0):
            count += 1
            break
    if (count == 0):
        return True
    return False

def number_to_list(x):
    l = []
    while(x > 0):
        l.append(x%10)
        x =x//10
    return l

def list_to_number(l):
    res = 0
    for i in range(len(l)):
        res += l[len(l)-1-i]*math.pow(10,i)
    return int(res)

def ispresent(x, l):
    count =0
    temp = list(itertools.permutations(number_to_list(x)))
    for ele in temp:
        if (list_to_number(ele)) in l:
            count += 1
    if count >= 3:
        return True
    return False

num=[]
for i in range(1000,9999):
    if isprime(i):
        num.append(i)

ans = []
for ele in num:
    for ele2 in itertools.permutations(number_to_list(ele)):
        if ispresent(list_to_number(ele2), num):
                ans.append(ele)

ans = list(set(ans))
print(ans)