//다음중 가능한 대입은 무엇인가
//A -> 상속 -> B -> 상속 -> C
//9라인은 derived -> base 임으로 가능 10라인은 불가능

int main(void){
  A obja;
  C objc;

  A *pA = &objc;
  C *pA = &obja;
}
