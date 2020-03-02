import math
r1,r2,d,n1,n2=map(int,input().split())
dist=d
q=n1;w=n2
if n1==0:
    n1=1
if n2==0:
    n2=1
temp1=((2*math.pi*r1)/4)*n1
temp2=((2*math.pi*r2)/4)*n2
# print(temp1,temp2)
startx1,starty1=0,0
endx1,endy1=0,0
startx2,starty2=d,0
endx2,endy2=d,0


dist+=abs(temp2-temp1)
if q==0:n1=0
if w==0:n2=0
tempn1=n1%4
tempn2=n2%4

endx1=startx1+temp1
endx2=startx2+temp2
circ1=(endx1,0)
circ2=(endx2,0)
###########################
if tempn1==1:
    circ1=(circ1[0]-r1,r1)
elif tempn1==2:
    circ1=(circ1[0],2*r1)
elif tempn1==3:
    circ1=(circ1[0]+r1,r1)
##########################
C=(circ2[0],2*r2)
B=(circ2[0],0)
if tempn2==1:
    B=(circ2[0]-r2,r2)
    C=(circ2[0]+r2,r2)
elif tempn2==2:
    B=(circ2[0],2*r2)
    C=(circ2[0],0)
elif tempn2==3:
    B=(circ2[0]+r2,r2)
    C=(circ2[0]-r2,r2)
#########################

A=circ1
# print(A,B,C)
# A=(0,A[1])
def slope(x1, y1, x2, y2):
        
    return (float)(y2-y1)/(x2-x1)  
if B[0]-A[0]!=0 and C[0]-A[0]!=0:
    m1=slope(B[0],B[1],A[0],A[1])
    m2=slope(C[0],C[1],A[0],A[1])
else:
    m1=slope(A[0],A[1],B[0],B[1])
    m2=slope(A[0],A[1],C[0],C[1])
# print("slopes are",m1,m2)
value=abs((m2-m1)/(1+m1*m2))
angle="wow"

angle=math.degrees(math.atan(value))
print ("{0:.6f}".format(angle))




