#include <stack>

void partition(int array[], int left,int right){

}
void QuickSortNor(int array[], int size){
	std::stack<int>	stack;
	stack.push(size - 1);
	stack.push(0);

	while (!stack.empty())
	{
		int left = stack.top(); stack.pop();
		int right = stack.top(); stack.pop();

		if (left >= right){
			continue;
		}
		else{
			int d = partition(array, left, right);
		}
	}
}