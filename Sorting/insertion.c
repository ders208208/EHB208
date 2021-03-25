#include <stdio.h>

int main()
{
    int arr[] = {188,17,121,13,81,4}; //Rastgele say�lardan olu�an bir dizi tan�mlad�k
    int arrSize = sizeof(arr) / sizeof(int); //Dizinin boyutunu hesaplad�k

    int i;
    for(i = 1; i < arrSize; i++){
        int val = arr[i]; //buradaki val de�erini, kendisinden �nceki elemanlarla kar��la�t�raca��z

        int j;
        for(j = i-1; j>=0 ; j--){
            /*burada val de�eri kendisinin gerisindeki say�larla tek tek kar��la�t�r�yoruz, e�er kendisinden bi �nceki
            say� kendisinden b�y�k ise bu iki say�n�n dizideki yerini de�i�tiriyoruz.*/
            if(arr[j] >= val){
                arr[j+1] = arr[j];
                arr[j] = val;
            }
        }
    }
    printf("Siralanmis Array: %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}
