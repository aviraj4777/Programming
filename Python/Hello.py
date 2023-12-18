def is_prime (n):
    d=n//2
    if (n<2) : 
        return False 
    else: 
        while (d>1) : 
            if (n% d==0) : 
                return False
            d=d-1
        return True 
    
def main(): 
    while True: 
        num = int(input('>')) 
        print (is_prime(num)) 
if __name__ == "_main_": 
    main()