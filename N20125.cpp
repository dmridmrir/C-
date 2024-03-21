#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

#define MAX 1001

int N;
char c[MAX][MAX];
int h_x=0, h_y=0;
int l_a=0, r_a=0, waist=0, l_l=0, r_l=0;

int main(void) {
	FASTIO;

	cin >> N;
	for(int i = 1; i <= N; i ++){
		for (int j = 1; j <= N; j++) {
			cin >> c[i][j];
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (c[i][j] == '*') {
				h_x = i + 1;
				h_y = j;
				goto stop;
			}
		}
	}
	stop:

	cout << h_x << " " << h_y << endl;
	
	for (int i = 1; 0 <= h_y - i; i++)
	{
		if (c[h_x][h_y - i] != '*')
			break;
		l_a++;
	}
	cout << l_a << " ";

	for (int i = 1; h_y + i <= N; i++)
	{
		if (c[h_x][h_y + i] != '*')
			break;
		r_a++;
	}
	cout << r_a << " ";

	int nowx = h_x;

	while (true) {
		nowx += 1;
		if (c[nowx][h_y] == '*') {
			waist++;
		}
		else {
			break;
		}
	}
	cout << waist << " ";

	int nowy = h_y - 1;
	while (true){
		if (c[nowx][nowy] == '*') {
			nowx += 1;
			l_l++;
		}
		else {
			break;
		}
	}
	cout << l_l << " ";

	nowx -= l_l;
	nowy = h_y + 1;
	while (true) {
		if (c[nowx][nowy] == '*') {
			nowx += 1;
			r_l++;
		}
		else {
			break;
		}
	}
	cout << r_l << " ";



	return 0;
}
