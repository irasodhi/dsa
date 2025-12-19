def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True



def check_even_odd(num):
    if num % 1 != 0:
        return "Neither even nor odd (decimal number)"
    elif int(num) % 2 == 0:
        return "Even"
    else:
        return "Odd"
