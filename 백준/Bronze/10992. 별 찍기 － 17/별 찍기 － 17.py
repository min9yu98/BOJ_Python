n = int(input())
print(' ' * (n - 1), end='')
print('*')
if n == 1:
    exit()
for i in range(1, n - 1):
    print(' ' * (n - 1 - i), end='')
    print('*', end='')
    print(' ' * (2 * i - 1), end='')
    print('*')
print('*' * (2 * n - 1))
