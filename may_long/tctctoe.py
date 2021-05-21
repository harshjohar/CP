def valid(matrix):
    # print('a')
    count_O=0
    count_X=0
    for rows in matrix:
        for j in rows:
            if j=='O':
                count_O+=1
            elif j=='X':
                count_X+=1
    # print(count_X, count_O)
    if count_X-count_O > 1 or count_X-count_O < 0:
        # print('asd')
        return False
    if check_winner(matrix, "O"):
        if count_X-count_O==0:
            return True
        return False
    if check_winner(matrix, "X"):
        if count_X-count_O==1:
            return True
        return False
    return True

def check_winner(matrix, char):
    count_rows = 0
    count_columns = 0
    count_diagonals = 0
    # horizontal
    for row in matrix:
        if row[0]==char and row[1]==char and row[2]==char:
            count_rows+=1
    # vertical
    for i in range(3):
        if matrix[0][i]==char and matrix[1][i]==char and matrix[2][i]==char:
            count_columns+=1
    # diagonals
    if matrix[0][0]==char and matrix[1][1]==char and matrix[2][2]==char:
        count_diagonals+=1
    if matrix[0][2]==char and matrix[1][1]==char and matrix[2][0]==char:
        count_diagonals+=1
    
    # count should be precisely 1
    # print(count_rows, count_columns, count_diagonals)
    if count_rows<=1 or count_columns<=1 or count_diagonals<=2:
        if count_rows!=0 or count_columns!=0 or count_diagonals!=0:
            # print(count_rows, count_columns, count_diagonals)
            return True
    return False

def check_more_moves(matrix):
    count=0
    for rows in matrix:
        for j in rows:
            if j == '_':
                count+=1
    if count>0:
        if not (check_winner(matrix, 'X') or check_winner(matrix, 'O')):
            return True
    return False

for _ in range(int(input())):
    matrix = []
    for i in range(3):
        matrix.append(input())
    # print(matrix)
    # more_moves = True
    if not valid(matrix):
        print(3)
        continue
    if check_winner(matrix, 'X') == True and check_winner(matrix, 'O') == True:
        print(3)
        continue
    elif check_winner(matrix, 'X') == True and check_winner(matrix, 'O') == False:
        print(1)
        continue
    elif check_winner(matrix, 'X') == False and check_winner(matrix, 'O') == True:
        print(1)
        continue
    elif check_more_moves(matrix):
        print(2)
    elif not check_more_moves(matrix) and not ((check_winner(matrix, 'X')) or (check_winner(matrix, 'O'))):
        print(1)
    else:
        print(3)