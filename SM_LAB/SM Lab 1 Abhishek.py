from random import randrange
randomNums=[0]*10	
randomNums[0] = 5 

print("Abhishek Malik 8CSA")
print("1/17/FET/BCS/007\n\n")
	
for i in range(1, 10): 
		
	randomNums[i] = ((randomNums[i - 1] * 3) +
										3) % 7 
print("Random Number using congurent")
for i in randomNums: 
	print(i, end = " ") 
print("\nRandom number using built-in functions")
for i in range(10):
    print(randrange(10),end=" ")
