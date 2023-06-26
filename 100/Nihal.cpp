#include <bits/stdc++.h>
using namespace std;
const int MAX = 26;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace __gnu_pbds;
typedef long long v99;
typedef unsigned long long ull;
typedef complex<double> point;
int isInverse();
void key_matrix();
void keyFunction();
int t1_table(int r2);
void inverseKeyMatrix();
void printInvKey();
int key[3][3];
int invKey[3][3];
int PT_val[500];
int CT_val[500];
int RevPT_val[500];
int det;
string ok_keyword;
string PT;

void inverseKeyMatrix(){

    invKey[0][0] = key[1][1];
    invKey[0][1] = (-1 * key[0][1]) + 26;
    invKey[1][0] = (-1 * key[1][0]) + 26;
    invKey[1][1] = key[0][0];

    int mul = t1_table(det);

    //cout << "mul: " << mul << " det: " << det << endl;

    if((mul*det)%26==1){
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                invKey[i][j] = ((invKey[i][j]*9)%26);
            }
        }
    }
    else{
        cout << "The given key matrix is not usable for inverse key operation & decryption." << endl << endl;
        keyFunction();
    }
}
void keyFunction(){
    ///                   keyword


    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
    cout << "Enter any four character word as a key: ";
    cin >> ok_keyword;
    int l_key = ok_keyword.size();
    if(l_key>4){
        cout << "Entered keyword is larger for a 2x2 matrix. Let's take the first four chars only." <<endl;
        ok_keyword.erase(4);
    }
    else if (l_key<4){
        cout << "Entered keyword is smaller for a 2x2 matrix. To make proper key, let's append " << (4-l_key) << " random character(s)." <<endl;
        for(int i=0;i<(4-l_key);i++){
            ok_keyword = ok_keyword + alphabet[rand() % MAX];
        }
    }
    else{
        cout<< "Entered keyword is perfect for 2x2 matrix." << endl;
    }

    transform(ok_keyword.begin(), ok_keyword.end(), ok_keyword.begin(), ::toupper);
    cout << "The given keyword is: " << ok_keyword << endl << endl;



    ///                                key_matrix_work
    //making the 2D matrix
    //int key[3][3];
    int k = 0;
    for(int i=0;i<2;i++){
        for(int j=0; j<2; j++){
            key[i][j] = int(ok_keyword[k]) - 65;
            k++;
        }
    }
    cout << "The 2x2 key matrix is: " << endl;
    for(int i=0;i<2;i++){
        for(int j=0; j<2; j++){
            cout << key[i] [j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    ///                           isInverse(key);
    det = (key[0][0] * key [1][1]) - (key[0][1] * key[1][0]);
    if (det==0){
        cout << "The given keyword can not be used for the encryption purpose. As there is no invertible matrix for this keyword" << endl << endl;
        return keyFunction();
    }
    else{
        inverseKeyMatrix();
    }
}
void printPT(int l_PT);
void multPT(int l_PT);
void printCipher(int l_PT);
void multCT(int l_PT);
void printDptText(int l_PT);
int len_PT();
void ok(int l_PT)
{
        printPT(l_PT);
        multPT(l_PT);
        printCipher(l_PT);
        printInvKey();
        multCT(l_PT);
        printDptText(l_PT);
}

int main ()
{
    //phase - 1
    keyFunction();

    int l_PT = len_PT();

    int PT_val[l_PT+2];
    int CT_val[l_PT+2];
    int RevPT_val[l_PT+2];
    ok(l_PT);
}

int len_PT(){
    //Now plaintext work
    cout << "Enter the Plain-text: ";
    //string PT;
    cin >> PT;
    transform(PT.begin(), PT.end(), PT.begin(), ::toupper);
    int l_PT = PT.size();
    if(l_PT%2!=0){
        PT = PT + "Z" ;
        l_PT++;
    }
    cout << "The plaintext is: " << PT << "\nLet's find the equivalent hill cipher character value." << endl;
    return l_PT;
}

void printPT(int l_PT){
    int k = 0;
    for(int i=0;i<l_PT;i++){
        PT_val[i] = int(PT[k]) - 65;
        k++;
    }

    for(int i=0;i<l_PT;i++){
        cout << PT_val[i] << " ";
    }
    cout << endl << endl;
}

void multPT(int l_PT){
    int temp_PT[2][1];
    int mul_val[2][1];

    int r = 0, c = 1;
    for(int i=0; i<l_PT; i=i+2){
        temp_PT[r][r] = PT_val[i];
        temp_PT[c][r] = PT_val[i+1];

        cout << "plain-text matrix multiplied with: " << endl;
        cout << temp_PT[r][r] << endl << temp_PT[c][r] << endl;
        mul_val[r][r] = 0;
        mul_val[c][r] = 0;
        for(int row = 0; row < 2; row++)
        for(int col2 = 0; col2 < 1; col2++)
            for(int col1 = 0; col1 < 2; col1++)
            {
                mul_val[row][col2] += (key[row][col1] * temp_PT[col1][col2]);
            }

        CT_val[i] =  (mul_val[r][r]%26);
        CT_val[i+1] = (mul_val[c][r]%26);
        cout << endl;
    }

}

void printCipher(int l_PT){
    cout << "Cipher-Text will be: " << endl;
    for(int i=0; i<l_PT; i++){
        cout << char(CT_val[i]+65);
    }
    cout << endl;
    cout << "Cipher values will be: " << endl;
    for(int i=0; i<l_PT; i++){
        cout << (CT_val[i]) << " ";
    }
    cout << endl;
    cout << "Encryption Done. Let's Decrypt." << endl << endl;
}

void multCT(int l_PT){
    int temp_PT[2][1];
    int mul_val[2][1];
    int r = 0, c = 1;
    for(int i=0; i<l_PT; i=i+2){
        temp_PT[r][r] = CT_val[i];
        temp_PT[c][r] = CT_val[i+1];

        cout << "plain-text matrix multiplied with: " << endl;
        cout << temp_PT[r][r] << endl << temp_PT[c][r] << endl;
        mul_val[r][r] = 0;
        mul_val[c][r] = 0;
        for(int row = 0; row < 2; row++)
        for(int col2 = 0; col2 < 1; col2++)
            for(int col1 = 0; col1 < 2; col1++)
            {
                mul_val[row][col2] += (invKey[row][col1] * temp_PT[col1][col2]);
            }

        RevPT_val[i] =  (mul_val[r][r]%26);
        RevPT_val[i+1] = (mul_val[c][r]%26);
        cout << endl;
    }
}
void printDptText(int l_PT){
     //Let's print the decrypted text values & characters.
    cout << "decrypted text will be: " << endl;
    for(int i=0; i<l_PT; i++){
        cout << char(RevPT_val[i]+65);
    }
    cout << endl;
    cout << "decrypted values will be: " << endl;
    for(int i=0; i<l_PT; i++){
        cout << (RevPT_val[i]) << " ";
    }
    cout << endl << endl;
}

int t1_table(int r2){
    int t1 = 0, t2 = 1, r1 = 26, d=0,R=0,t=0;
    //cout <<  "d\t" << "r1\t" <<  "r2\t" << "R\t" <<  "t1\t" <<  "t2\t t   "  << endl;
    while(r1!=1 && r2!=0){
        d = r1/r2;
        R = r1%r2;
        t = t1 - (t2 * d);
        //cout << d << "\t" << r1 << "\t" << r2 << "\t" << R << "\t" << t1 << "\t" << t2 << "\t" << t << endl;
        t1 = t2;
        t2 = t;
        r1 = r2;
        r2 = R;
    }
    //cout << '-' << "\t" << r1 << "\t" << r2 << "\t" << '-' << "\t" << t1 << "\t" << t2 << "\t" << '-' << endl<<endl;
    return t1;
}



void printInvKey(){
    cout << "Here is the Key matrix of the decryption: " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << invKey[i][j]  << " ";
        }
        cout << endl;
    }
    cout << endl;
}

