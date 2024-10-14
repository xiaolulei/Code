from urllib import parse

s = '%rk%0b%bfv%ff'
un = parse.unquote(s)
print(un)
