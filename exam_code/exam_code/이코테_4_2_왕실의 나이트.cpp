//#include <cstdio>
//
//int main()
//{
//    char inputData[4];
//    // ����Ʈ�� �̵��� �� �ִ� 8���� ���� ����
//    int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
//    int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//
//    // ���� ����Ʈ�� ��ġ �Է¹ޱ�
//    fgets(inputData, sizeof(inputData), stdin);
//    int row = inputData[1] - '0';
//    int column = inputData[0] - 'a' + 1;
//
//    // 8���� ���⿡ ���Ͽ� �� ��ġ�� �̵��� �������� Ȯ��
//    int result = 0;
//    for (int i = 0; i < 8; i++) {
//        // �̵��ϰ��� �ϴ� ��ġ Ȯ��
//        int nextRow = row + dx[i];
//        int nextColumn = column + dy[i];
//        // �ش� ��ġ�� �̵��� �����ϴٸ� ī��Ʈ ����
//        if (nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8) {
//            result += 1;
//        }
//    }
//
//    printf("%d\n", result);
//     
//	return 0;
//}