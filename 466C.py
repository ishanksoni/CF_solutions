n = int(input())
l = list(map(int,input().split()))
prif = []
sum_ = 0
for i in l:
    sum_ = sum_+i
    prif.append(sum_)
total = prif[n-1]
if(total%3!=0):
    print(0)    
else:
    arr=[0]*n
    req = total*2//3
    req1=total//3
    cou = prif[:n-1].count(req)
    j= 0
    for i in range(n-1):
        if(i!=0):
            arr[i]=cou-j
        if(prif[i]==req):
            j+=1
    ans =0
    for i in range(n-2):
        if(prif[i]==req1):
            ans =ans+arr[i+1]
    print(ans)

