/* Activity:
 *
 * Write a program that prints to the console (using a print statement)
 * the numbers from 1 to 100 (both inclusive and with a newline between
 * each print), substituting the following:
 * - Multiples of 3 with the word "fizz".
 * - Multiples of 5 with the word "buzz".
 * - Multiples of both 3 and 5 with the word "fizzbuzz".
 */

#include <iostream>

using namespace std;

void countingToOneHundred(int n);

int main(){

    countingToOneHundred(1);

    cout<<endl<<endl<<endl;

    cout<<"Press ENTER to finish...";
    cin.get();
    return 0;
}

void countingToOneHundred(int n){

    if(n <= 100){

            if(n%20 == 1){

                cout<<endl;
            }

        if(n%3 == 0 && n%5==0){

            cout<<"fizzbuzz"<<" ";

            }else if(n%3 == 0){

                cout<<"fizz"<<" ";

                }else if(n%5 == 0){

                    cout<<"buzz"<<" ";

                    }else{

                        cout<<n<<" ";
                        }

        countingToOneHundred(n+1);
    }
}
