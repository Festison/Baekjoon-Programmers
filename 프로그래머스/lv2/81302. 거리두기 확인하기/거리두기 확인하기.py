def check_distance(place):
    # 'P' 값의 좌표만 plist에 추가함.
    plist = [(y, x) for y in range(5) for x in range(5) if place[y][x] == 'P']
 
    # 각 좌표끼리 거리를 계산하고, 거리에 따라 거리두기 여부 판단
    for y, x in plist:
        for y2, x2 in plist:
            dist = abs(y-y2) + abs(x-x2) # 맨해튼 거리
            if dist == 0 or dist > 2: # 같은 좌표이거나 거리가 2이상인 경우 continue
                continue
 
            if dist == 1: # 두 사람 사이의 거리가 1인 경우
                return 0
            elif y == y2 and place[y][int((x+x2)/2)] != 'X':  # 열이 같으나 두 사람 사이에 파티션이 없는 경우
                return 0
            elif x == x2 and place[int((y+y2)/2)][x] != 'X':  # 행이 같으나 두 사람 사이에 파티션이 없는 경우
                return 0
            elif y != y2 and x != x2: # 열/행이 다른경우(대각선), 두 사람 사이 파티션이 없는 경우
                if place[y2][x] != 'X' or place[y][x2] != 'X':
                    return 0
    return 1
 
 
def solution(places):
    answer = []
    # 각 place들을 check_distance함수로 조사
    for place in places:
        answer.append(check_distance(place))
    return answer
