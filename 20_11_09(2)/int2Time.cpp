//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec;
//
//public:
//	Time(int h, int m, int s) {
//		hour = h;
//		min = m;
//		sec = s;
//	}
//
//	// explicit : �������� ��ȯ�� �㰡. ������ ȣ���̳� ĳ��Ʈ �����ڴ� ���.
//	explicit Time(int abssec) {
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//
//	void OutTime() {
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
//	}
//};
//
//void printTime(Time when)
//{
//	when.OutTime();
//}
//
//int main()
//{
//	Time noon(40000); // ������
//	Time now = (Time)60000; // �ʱ�ȭ
//	now.OutTime();
//	//now = 70000; // �� ����
//	//now.OutTime();
//	noon.OutTime();
//	//printTime(80000);
//}
//
///* �����Ϸ��� �캯�� ������ ���� ��ȯ �����ڸ� ȣ���Ͽ� Time �ӽ� ��ü�� �����ϰ�
//	�� ��ü�� now�� �����Ѵ�. 
//	������ ȣȯ�Ǵ� �ٸ� Ÿ�Ե� ������ ���� Time ��ü�� �ٲ� �� �־� ȥ��������.*/