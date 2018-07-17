question A:
	compile by typing

	1.) make

	2.) ./COW

question B:

for size=1000

sort():0.000215seconds
v1/v2 are different.

insertion_sort(): 0.008091seconds
v1/v2 are the same.

============================================================

for size=10000

sort():0.002766seconds
v1/v2 are different.

insertion_sort(): 0.805925seconds
v1/v2 are the same.

==============================================================

for size=100000

sort():0.031939seconds
v1/v2 are different.

insertion_sort(): 82.6539seconds
v1/v2 are the same.

===============================================================

for size=1000000

sort() is a little more than 0.03

whereas insertion_sort takes a rather long time

=======================================

explain:


As size number turn from 1000 to 1000000
it is 1000 times bigger

for sort()  the complexity is o(nlogn)
so it about 1000*3 times longer period of time window to do the algorithm

whereas for insertion_sort. However, its complexity is o(n^2)
so it is 1000*10000 times longer, which takes much more time than sort(). 

so if the data size is extremely big, insertion_sort() is not efficient, we should use sort() instead of insertion_sort().
