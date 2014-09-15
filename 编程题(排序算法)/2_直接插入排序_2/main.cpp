#include <iostream>

using namespace std;

#define ARR_LENGTH(ARR)	(sizeof(ARR) / sizeof(ARR[0]))

template<typename T>
///< array 带排序的数组
///< length 数组长度
void InsertSort(T* array, int length) {
    for (int i = 1; i < length; ++i) {
        if (array[i] > array[i - 1]) {
            ///< 找到不符合排序要求的数组后
            int temp = array[i];

            ///< 移位
            int j = 0;
            for (j = i - 1; j >= 0 && array[j] < temp; --j) {
                array[j + 1] = array[j];
            }

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
