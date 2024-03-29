#include <iostream>
#include<vector>>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

vector<vector<int>> A;
vector<vector<int>> B;
vector<vector<int>> result;
int N, M, K;



int main(void) {
	FASTIO;

	cin >> N >> M;
	A.resize(N, vector<int>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}
	cin >> M >> K;
	B.resize(M, vector<int>(K));
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cin >> B[i][j];
		}
	}
	result.resize(N, vector<int>(K));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			for (int k = 0; k < M; k++) {
				result[i][j] += A[i][k] * B[k][j];
			}
		}

	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
