# Codeforces Round 903 Div3 A - Don't Try to Count
# Difficulty: 800 (Easy)
# Tags: brute force, strings

t=int(input())
while t!=0:
    t=t-1
    n,m = list(map(int,input().split()))
    x= input()
    s=input()
    count=0
    light = 0
  
    while len(x)<100:
      
        if s in x:
          print(count)
          light = 1
          break
          
        x = x+x
        count+=1

    if light == 0:
        print(-1)


