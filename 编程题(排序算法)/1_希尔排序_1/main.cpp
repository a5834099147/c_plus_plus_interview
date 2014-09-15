#include <iostream>

using namespace std;

#define ARR_LENGTH(ARR)	(sizeof(ARR) / sizeof(ARR[0]))

template <typename T>
void ShellSort(T* array, int length) {
    ///< ѭ���Ĳ���������
    for (int step = length / 2; step > 0; step /= 2) {
            ///< ����
        for (int count = 0; count < step; ++count) {
            ///< ֱ�Ӳ�������
            for (int i = count + step; i < length; i += step) {
                if (array[i] < array[i - step]) {
                    ///< �ҵ���������������Ԫ��
                    T temp = array[i];
                    ///< ��λ
                    int j = 0;
                    for (j = i - step; j >= 0 && temp < array[j]; j -= step) {
                        array[j + step] = array[j];
                    }

                    array[j + step] = temp;
                }
            }
        }
    }
}

int main()
{
    int arr[] = { 2, 5, 1, 3, 6, 7, 9 };
	ShellSort(arr, ARR_LENGTH(arr));

	for (int i = 0; i < ARR_LENGTH(arr); ++i) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
