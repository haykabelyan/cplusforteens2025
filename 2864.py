s = input()
ones = s.count('1')
zeros = s.count('0')

print( '1' * (ones-1) + '0' * zeros + '1')