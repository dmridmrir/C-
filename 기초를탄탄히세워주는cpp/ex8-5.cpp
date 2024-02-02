//CPointXY와 XZ클래스 작성 시 CPointX를 virtual base 클래스로 상속받고 작동할 수 있도록 수정
//출력 결과를 보고 차이점 설명
//virtual base클래스로 작성 시 디폴트 생성자를 설정해야 한다
//virtual클래스로 작성 전에는 CPointX 객체가 2번 생성 되지만 수정 후 한번만 생성된다

#include <iostream>
#include <string>

using namespace std;

class CPointX {
protected:
	int x;
public:
	CPointX(int a=0) :x(a) {
		cout << "CPointX 생성자" << endl;
	}
	~CPointX() {
		cout << "CPointX 소멸자" << endl;
	}
	void Print() {
		cout << "CPointX" << endl;
	}
};
class CPointXY :virtual public CPointX {
protected:
	int y;
public:
	CPointXY(int a=0,int b=0) :CPointX(a),y(b) {
		cout << "CPointXY 생성자" << endl;
	}
	~CPointXY() {
		cout << "CPointXY 소멸자" << endl;
	}
	void Print() {
		cout << "CPointXY" << endl;
	}
};
class CPointXZ :virtual public CPointX {
protected:
	int z;
public:
	CPointXZ(int a=0, int c=0) :CPointX(a), z(c) {
		cout << "CPointXZ 생성자" << endl;
	}
	~CPointXZ() {
		cout << "CPointXZ 소멸자" << endl;
	}
	void Print() {
		cout << "CPointXZ" << endl;
	}
};
class CPointXYZ : public CPointXY, public CPointXZ {
private:
	int xyz;
public:
	CPointXYZ(int a, int b,int c) :CPointXY(a,b), CPointXZ(a,c), xyz(0) {
		cout << "CPointXYZ 생성자" << endl;
	}
	~CPointXYZ() {
		cout << "CPointXYZ 소멸자" << endl;
	}
	void Print() {
		CPointX::Print();
		CPointXY::Print();
		CPointXZ::Print();
		cout << "CPointXYZ" << endl;
	}
};

int main(void) {
	CPointXYZ Pxyz(1, 2, 3);
	Pxyz.Print();

	return 0;
}
