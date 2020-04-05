#include <iostream>
using namespace std;

int main()
{
    cout << "4월 15일 진행되는 21대 국회의원 선거는 만 18세 이상만 투표가 가능합니다." << endl;
    cout << "투표가능여부를 확인하기 위해서 본인의 만 나이를 입력해주세요." << endl;
    int n;                                                                                  //정수형 변수n선언
    cin >> n;                                                                               //n에 입력값 저장
    if (n >= 18) {                                                                          //n 값의 크기에 따른 구분문 형성
        cout << "당신은 만 " << n << "세 입니다." << endl;
        cout << "더 나은 사회를 위해서 투표해주실 당신에게 감사합니다." << endl;
    }
    else {
        cout << "당신은 만 " << n << "세 입니다." << endl;
        cout << "안타깝지만 당신에게 이번 선거의 투표권이 없습니다." << endl;
    }
}