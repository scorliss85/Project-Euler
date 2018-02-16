
/*


The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?


*/

#include <iostream>

using namespace std;

int main()
{
    long long i, n, num;
    int flag = 0;
    n = 600851475143;

    for(num = 2; num < n; num++){

        //Find factors of the given number n
        if(n % num == 0){

            //num is a factor, but is it prime?
            for(i = 2; i <= num/2; i++){
                flag = 0;
                if(num % i == 0){
                    flag++;
                    break;
                }
            }
            if(flag == 0 && num != 1){
                cout << num << endl;
            }

        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
