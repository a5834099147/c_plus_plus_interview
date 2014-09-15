#include <iostream>

using namespace std;

#define ARR_LENGTH(ARR)	(sizeof(ARR) / sizeof(ARR[0]))


///< array 带排序的数组
///< length 数组长度
template <typename T>
void InsertSort(T* array, int length) {
	///< 遍历
	for (int i = 1; i < length; ++i) {
		///< 为 array[i] 找到一个合适的位置
		int j = 0;
		for (j = i - 1; j >= 0; --j) {
			if (array[j] < array[i]) {
				break; ///< 找到合适位置
			}
		}

		if (j != i - 1) {
			///< 找到合适位置
			int temp = array[i];

			for (int k = i - 1; k > j; --k) {
				array[k + 1] = array[k];
			}

			///< 将 array[i] 放在合适的位置
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

