//main함수가 작동하도록 코드를 수정하시오
// 주석처리된 부분이 추가되고 삭제된 부분임

#include <iostream>
#include<string>

using namespace std;

class CPointArray;

class CPoint {
private:
	int x, y;
public:
	//void SetSum(CPointArray& Pa);
  void SetSum(CPointArray &Pa){
	  x = (Pa.Ary[0].x + Pa.Ary[1].x + Pa.Ary[2].x);
	  y = (Pa.Ary[0].y + Pa.Ary[1].y + Pa.Ary[2].y);
  }    
	void Print() {
		cout << x << "," << y << endl;
	}
	//friend class CPointArray;
};
class CPointArray {
private:
	CPoint Ary[3];
public:
	CPointArray() {
		for (int i = 0; i < 3; i++) {
			Ary[i].x = i + 1;
			Ary[i].y = i + 1;
		}
	}
	void SetSum(int index) {
		Ary[index].SetSum(*this);
	}
	void Print() {
		for (int i = 0; i < 3; i++) {
			Ary[i].Print();
		}
	}
	//friend class CPoint;
};

//void CPoint::SetSum(CPointArray& Pa) {
//	x = (Pa.Ary[0].x + Pa.Ary[1].x + Pa.Ary[2].x);
//	y = (Pa.Ary[0].y + Pa.Ary[1].y + Pa.Ary[2].y);
//}

int main(void) {
	CPointArray PAry;

	PAry.SetSum(0);
	PAry.Print();

	return 0;
}
