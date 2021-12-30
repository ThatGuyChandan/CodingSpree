def series_sum(n):
  if n < 1:
    return 0
  else:
    return n + series_sum(n - 2)

print(series_sum(7))
 