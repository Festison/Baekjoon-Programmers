def solution(dartResult):
    n = ''  # 현재 처리 중인 숫자를 저장할 변수
    score = []  # 점수를 저장할 배열
    
    for i in dartResult:
        if i.isnumeric():  # 숫자인 경우
            n += i
        elif i == 'S':  # Single(S) 영역인 경우
            n = int(n) ** 1
            score.append(n)
            n = ''
        elif i == 'D':  # Double(D) 영역인 경우
            n = int(n) ** 2
            score.append(n)
            n = ''
        elif i == 'T':  # Triple(T) 영역인 경우
            n = int(n) ** 3
            score.append(n)
            n = ''
        elif i == '*':  # 스타상(*) 옵션인 경우
            if len(score) > 1:
                score[-2] = score[-2] * 2
                score[-1] = score[-1] * 2
            else:
                score[-1] = score[-1] * 2
        elif i == '#':  # 아차상(#) 옵션인 경우
            score[-1] = score[-1] * -1
    
    return sum(score)
