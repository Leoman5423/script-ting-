def fizz_buzz(num):
  # First, check if the input is actually a number (int or float)
  if not isinstance(num, (int, float)):
    return False

  # Check if divisible by BOTH 3 and 5 (3 * 5 = 15)
  if num % 3 == 0 and num % 5 == 0:
    return 'fizzbuzz'
  
  # Check if divisible by 3
  if num % 3 == 0:
    return 'fizz'
  
  # Check if divisible by 5
  if num % 5 == 0:
    return 'buzz'
  
  # If it's a number but doesn't match the math above, return it as is
  return num
