def solution(n, lost, reserve):
    
    n_lost = sorted(set(lost) - set(reserve))
    n_reserve = sorted(set(reserve) - set(lost))
    
    for i in n_reserve:
        if i-1 in n_lost:
            n_lost.remove(i-1)
        elif i+1 in n_lost:
            n_lost.remove(i+1)
            
    return n - len(n_lost)

    return n