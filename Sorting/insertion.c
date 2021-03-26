#include <stdio.h>

int main()
{
    int arr[] = {188,17,121,13,81,4}; //Rastgele sayýlardan oluþan bir dizi tanýmladýk
    int arrSize = sizeof(arr) / sizeof(int); //Dizinin boyutunu hesapladýk

    int i;
    for(i = 1; i < arrSize; i++){
        int val = arr[i]; //buradaki val deðerini, kendisinden önceki elemanlarla karþýlaþtýracaðýz

        int j;
        for(j = i-1; j>=0 ; j--){
            /*burada val deðeri kendisinin gerisindeki sayýlarla tek tek karþýlaþtýrýyoruz, eðer kendisinden bi önceki
            sayý kendisinden büyük ise bu iki sayýnýn dizideki yerini deðiþtiriyoruz.*/
            if(arr[j] >= val){
                arr[j+1] = arr[j];
                arr[j] = val;
            }
        }
    }
    printf("Siralanmis Array: %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}
