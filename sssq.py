import random
print("1/17/FET/BCS/007\nAbhishek Malik 8CSA\nAssignment 3\n")
print("Simulation of Single Server Queue\n")
print("\nAT=Arrival Time")
print("SB=Service Begin")
print("SE=Service End")
print("ST=Service Time")
print("WT=Waiting Time")
print("SI=Service Idle")
customers = [1,2,3,4,5]
at = [5,5,5,5,5]
st = [5,5,5,5,5]
sb=[]
se=[]
wt=[]
si=[]
sb.append(0)
wt.append(0)
se.append(st[0])
si.append(0)
for i in range(1,5):
    if se[i-1]>at[i]:
        sb.append(se[i-1])
    else:
        sb.append(at[i])
    se.append(sb[i]+st[i])
    wt.append(sb[i]-at[i])
    si.append(sb[i]-se[i-1])
    
print("\nCstm\tAT\tSB\tSE\tST\tWT\tSI")
for i in range(5):
    print(" ", i + 1,"\t", at[i],"\t", sb[i],"\t", se[i],"\t", st[i],"\t",wt[i],"\t",si[i])