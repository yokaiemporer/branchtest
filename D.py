# n=int(input())
# li1=[int(i) for i in input().split()]
# li2=[int(i) for i in input().split()]
# x=int(input())
# for t in range(x):
#     l1,h1,l2,h2=map(int,input().split())
#     l1-=1;l2-=1;h1-=1;h2-=1
#     s=set(li1[l1:h1+1]+li2[l2:h2+1])
#     # print(len(li1),len(li2))
#     s2=set()
#     for i in range(n):
#         # print(i)
#         if (i<l1 or i>h1) and li1[i] not in s:
#             s2.add(li1[i])
#         if i<l2 or i>h2 and li2[i] not in s:
#             s2.add(li2[i])
    
#         # print(s2)
#     print(len(s2))
        
n=int(input())
li1=[int(i) for i in input().split()]
li2=[int(i) for i in input().split()]
x=int(input())
s=set(li1+li2)
total=len(s)
# print(s,total)
for t in range(x):
    l1,h1,l2,h2=map(int,input().split())
    l1-=1;l2-=1;h1-=1;h2-=1
    p=set(li1[l1:h1+1]+li2[l2:h2+1])
    # print(p)
    
    print(total-len(p))