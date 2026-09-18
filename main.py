import math
import sys
path = [800, 600, 750, 900, 1400, 1200, 1100, 1500]
stops = ["TH","GA","IC","HA","TE","LU","NI","CA"]
src = input()
dest = input()
start=0
end=0
s_found=0
d_found=0
for i in range(len(stops)):
    # print(i)
    if(stops[i]==src):
        start=i
        s_found=1
    if(stops[i]==dest):
        end=i
        d_found=1
if(s_found==0 or d_found==0):
    print("INVALID OUTPUT")
    sys.exit(0)
tot_mtr=0
if(start<end):
    for i in range(start+1,end+1):
        tot_mtr+=path[i]
elif(start>end):
    for i in range(start+1,len(path)):
        tot_mtr+=path[i]
    for i in range(end+1):
        tot_mtr+=path[i]
per_mtr = 5/1000
print(per_mtr)
print("{:.1f} INR".format(math.ceil(tot_mtr*per_mtr)))
