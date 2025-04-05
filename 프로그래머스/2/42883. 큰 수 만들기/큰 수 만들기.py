def solution(number, k):
    stack = []
    
    for n in number:
        while len(stack) > 0 and k > 0 and stack[-1] < n:
            stack.pop()
            k -= 1
        stack.append(n)

    # 남은 k만큼 뒤에서 제거
    # k == 0 이면, ''.join(stack[:-k]) 실행 / k != 0 이면, ''.join(stack) 실행
    return ''.join(stack[:-k]) if k else ''.join(stack)
