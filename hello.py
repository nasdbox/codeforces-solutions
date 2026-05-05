from functools import reduce
import math

ls = [i for i in range(100)]

a = reduce(lambda x, y : math.sqrt(x**2+y**2), ls)
print(a)
