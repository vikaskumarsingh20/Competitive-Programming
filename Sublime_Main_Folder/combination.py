from itertools import permutations
list1=[2,6,8,8]
seq=permutations(list1,4)
print(seq)
for p in list(seq):
  	print(p) 