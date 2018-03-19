ans = ''
def dec(i):
    res = 0
    while(i>0):
        res += 1
    return res
for i in range(1, 300000):
    ans =  ans + str(i)

def rev(num):
    res = ''
    for i in num:
        res = i + res
    return res

print(rev(ans))
ans = rev(ans)
print(len(ans))
print(int(ans[-1])*int(ans[-10])*int(ans[-100])*int(ans[-1000])*int(ans[-10000])*int(ans[-100000])*int(ans[-1000000]))