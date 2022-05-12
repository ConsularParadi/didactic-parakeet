x,y,z = map(int, input('Please input 3 odd nos. - ').split())
if (x*y*z)%2 == 0:
        print("All inputs are not odd")
else:
    if x>y and x>z:
        print(x,' is the greatest odd no.')
    elif y>x & y>z:
        print (y,' is the greatest odd no.')
    else:
        print(z,' is the greatest odd no.')
