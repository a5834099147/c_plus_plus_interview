#include <iostream>

using namespace std;

#define ARR_LENGTH(ARR)	(sizeof(ARR) / sizeof(ARR[0]))


///< array �����������
///< length ���鳤��
template <typename T>
void InsertSort(T* array, int length) {
	///< ����
	for (int i = 1; i < length; ++i) {
		///< Ϊ array[i] �ҵ�һ�����ʵ�λ��
		int j = 0;
		for (j = i - 1; j >= 0; --j) {
			if (array[j] < array[i]) {
				break; ///< �ҵ�����λ��
			}
		}

		if (j != i - 1) {
			///< �ҵ�����λ��
			int temp = array[i];

			for (int k = i - 1; k > j; --k) {
				array[k + 1] = array[k];
			}

			///< �� array[i] ���ں��ʵ�λ��
			array[j + 1] = temp;
		}
	}
}


int main()
{
	int arr[] = { 2, 5, 1, 3, 6, 7, 9 };
	InsertSort(arr, ARR_LENGTH(arr));

	for (int i = 0; i < ARR_LENGTH(arr); ++i) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

