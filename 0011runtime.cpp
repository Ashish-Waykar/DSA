#include<iostream>
using namespace std;
/*  { _("Selection Sort"), &SelectionSort, NULL },
    { _("Insertion Sort"), &InsertionSort, NULL },
    { _("Merge Sort"), &MergeSort,
      _("Merge sort which merges two sorted sequences into a shadow array, and then copies it back to the shown array.") },
    { _("Quick Sort (LR ptrs)"), &QuickSortLR,
      _("Quick sort variant with left and right pointers.") },
    { _("Quick Sort (LL ptrs)"), &QuickSortLL,
      _("Quick sort variant from 3rd edition of CLRS: two pointers on left.") },
    { _("Quick Sort (ternary, LR ptrs)"), &QuickSortTernaryLR,
      _("Ternary-split quick sort variant, adapted from multikey quicksort by Bentley & Sedgewick: partitions \"=<?>=\" using two pairs of pointers at left and right, then copied to middle.") },
    { _("Quick Sort (ternary, LL ptrs)"), &QuickSortTernaryLL,
      _("Ternary-split quick sort variant: partitions \"<>?=\" using two pointers at left and one at right. Afterwards copies the \"=\" to middle.") },
    { _("Bubble Sort"), &BubbleSort, NULL },
    { _("Cocktail Shaker Sort"), &CocktailShakerSort, NULL },
    { _("Gnome Sort"), &GnomeSort, NULL },
    { _("Comb Sort"), &CombSort, NULL },
    { _("Shell Sort"), &ShellSort, NULL },
    { _("Heap Sort"), &HeapSort, NULL },
    { _("Smooth Sort"), &SmoothSort, NULL },
    { _("Odd-Even Sort"), &OddEvenSort, NULL },
    { _("Bitonic Sort"), &BitonicSort, NULL },
    { _("Radix Sort (LSD)"), &RadixSortLSD,
      _("Least significant digit radix sort, which copies item into a shadow array during counting.") },
    { _("Radix Sort (MSD)"), &RadixSortMSD,
      _("Most significant digit radix sort, which permutes items in-place by walking cycles.") },
    { _("std::sort (gcc)"), &StlSort, NULL },
    { _("std::stable_sort (gcc)"), &StlStableSort, NULL },
    { _("std::sort_heap (gcc)"), &StlHeapSort, NULL },
    { _("Bogo Sort"), &BogoSort, NULL },
    { _("Bozo Sort"), &BozoSort, NULL },*/
// simple function to get the prime number witn lowest time complexity 
bool isPrime(int n ){
    int c= n % 2;
    if(c==0 )return false;
    else return true;
}
int fibonacii(int i ){
    // for refferance the fibonacii series go to https://i.pinimg.com/originals/98/82/d5/9882d569f7e0b5665fe3b2edd5069b06.png
    if (i==0)return 0;
    if (i==1)return 1;
    return fibonacii(i-1)+fibonacii(i-2);
}
int main(){
    //gtting number is prime or not
    cout<<isPrime(5)<<endl;
    cout<<isPrime(6)<<endl;

    // getting the fibonacii number of current index 
    cout<<fibonacii(4)<<endl;
}