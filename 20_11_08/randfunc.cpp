//#include <stdio.h>
//#include <stdlib.h>
//
//inline int randfunc(int n) // 호출문에 함수 본체를 삽입
//{
//	return rand() % n;
//}
//
//int main()
//{
//	int i, j, k;
//	i = randfunc(10);
//	j = randfunc(100);
//	k = randfunc(50);
//	printf("난수 = %d, %d, %d\n", i, j, k);
//}
//
///* 인라인이 될 것인가 아닌가는 컴파일러가 결정
//	1 : 재귀 호출 함수는 인라인 지정을 무시하고 일반 함수로 컴파일.
//	2 : 함수 포인터로 가리키는 함수는 인라인이 될 수 없다.
//	3 : 함수가 너무 길면 일반 함수로 컴파일한다.
//	4 : 클래스 선언문에 작성된 함수는 항상 인라인이된다.
//	
//	매크로와의 차이점
//	1 : 타입을 인식하므로 민감한 타입 문제가 없고 산술 변환도 잘 처리된다.
//	2 : 함수의 형태를 띠므로 지역 변수를 사용할 수 있다.
//	3 : 메크로는 괄호로 잘 묶어 줘야한다.
//	(인라인 함수 사용 권장)*/