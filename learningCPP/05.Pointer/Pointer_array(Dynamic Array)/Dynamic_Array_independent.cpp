#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int N = 1;
    int choice;

    while (true)
    {
        int *Dynamic_array;
        cout << "Do you want to add index or not?" << endl;
        cout << "1.YES\n"
             << "2.NO\n"
             << "3.print the array\n"
             << "4.delete one index from the last\n"
             << "5.remove any index from array"
             << "\n\n"
             << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "you choose :yes" << endl;
            if (N == 1)
            {

                // memory alloction by malloc()
                Dynamic_array = (int *)malloc(N * sizeof(int));
                cout << "enter value in " << N - 1 << "TH index: " << endl;
                cin >> *(Dynamic_array + (N - 1));
                N = N + 1;
            }
            else
            { // re-allocation by realloc(arrayname,size*sizeof(datatype))
                cout << "enter value in " << N - 1 << "TH index: " << endl;
                Dynamic_array = (int *)realloc(Dynamic_array, (N) * sizeof(int));
                cin >> *(Dynamic_array + (N - 1));
                N = N + 1;
            }
        }
        else if (choice == 2)
        {
            cout << "you choose No" << endl;
            break;
        }
        else if (choice == 3)
        {
            cout << "you choose you wanna print array" << endl;

            for (int i = 0; i < N - 1; i++)
            {
                cout << *(Dynamic_array + i) << " ";
            }

            cout << "\n"
                 << endl;
        }
        else if (choice == 4)
        {
            cout << "delete index:" << endl;
            // *(Dynamic_array+(N-1))=NULL;
            Dynamic_array = (int *)realloc(Dynamic_array, (N - 2) * sizeof(int));
            N = N - 1;
            for (int i = 0; i < N - 1; i++)
            {
                cout << *(Dynamic_array + i) << " ";
            }
            cout << "\n";
            cout << "deleted successfull\n"
                 << endl;
        }
        else if (choice == 5)
        {
            int d;
            cout << "which index you wanna delete?" << endl;
            cin >> d;
            for (int i = d - 1; i < N - 2; i++)
            {
                *(Dynamic_array + i) = *(Dynamic_array + (i + 1));
            }

            Dynamic_array = (int *)realloc(Dynamic_array, (N - 1) * sizeof(int));
            N = N - 1;

            /*
                  index          |    address         |  value
               ------------------------------------------------

                (Array_Ptr + 0) ----> 1000+0 = 1000       =  10
                (Array_Ptr + 1) ----> 1000+4 = 1004       =  20
                (Array_Ptr + 2) ----> 1004+4 = 1008       =  30
                (Array_Ptr + 3) ----> 1008+4 = 1012       =  40
                (Array_Ptr + 4) ----> 1012+4 = 1016       =  50

               for(int i=1(index);i<4(size);i++)
               {
               arr[i]=arr[i+1];
                }

                **now suppose you wanna delete index 2, we will swap only the values not the address

                index          |    address         |  value
                ------------------------------------------------

                (Array_Ptr + 0) ----> 1000+0 = 1000       =  10
                (Array_Ptr + 1) ----> 1000+4 = 1004       =  20 <---- shift 30
                (Array_Ptr + 2) ----> 1004+4 = 1008       =  30 <---- shift 40
                (Array_Ptr + 3) ----> 1008+4 = 1012       =  40 <---- shift 50
                (Array_Ptr + 4) ----> 1012+4 = 1016       =  50

                size will be decresed by 1 realloc it to remove last index


            */
        }
        else
        {
            cout << "invaild choice" << endl;
        }
    }
}