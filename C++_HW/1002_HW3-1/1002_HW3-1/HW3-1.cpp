// HW3-1

// Ǯ��
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int minX = min(min(dots[0][0], dots[1][0]), min(dots[2][0], dots[3][0]));   // min(a, b), a�� b �� ���� ���� ��ȯ
    int minY = min(min(dots[0][1], dots[1][1]), min(dots[2][1], dots[3][1]));
    int maxX = max(max(dots[0][0], dots[1][0]), max(dots[2][0], dots[3][0]));   // max(a, b), a�� b �� ū ���� ��ȯ
    int maxY = max(max(dots[0][1], dots[1][1]), max(dots[2][1], dots[3][1]));
    return (maxY - minY) * (maxX - minX);
}


// ���
int getDiff(vector<vector<int>> dots, int dim) {
    int max= -256, min= 256;    // ���� �� �� ���� ������ �ʱ�ȭ
    for (int i = 0; i < dots.size(); i++) {
        if (max < dots[i][dim]) max = dots[i][dim];
        if (min > dots[i][dim]) min = dots[i][dim];
    }
    return max - min;
}

int solution(vector<vector<int>> dots) {
    int answer = 0;

    int width, height;
    width = getDiff(dots, 0);
    height = getDiff(dots, 0);
    
    answer = width * height;
    return width * height;

}