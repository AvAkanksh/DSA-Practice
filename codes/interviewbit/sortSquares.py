def sortSquares(A):
    l = 0
    r = len(A)-1
    ans = [0]*len(A)
    for i in range(len(A)):
        if(abs(A[l])>abs(A[r])):
            ans[len(A)-i-1] = A[l]**2
            l+=1
        else:
            ans[len(A)-i-1] = A[r]**2
            r-=1
        print(ans)

    print(ans)

A = [-6,-5,0,1,2]
print(A)
sortSquares(A)