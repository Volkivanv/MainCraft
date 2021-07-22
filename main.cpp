#include <iostream>
//#include <vector>
//#include <string>
using namespace std;

void inputMatrix( int m[][5][10]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int stake;
            cin >> stake;
            if(stake < 0) stake = 0;
            if(stake > 10) stake =10;
            for(int k = 0; k < stake ; k++){
                m[i][j][k] = 1;
            }
            for(int k = stake; k < 10; k++){
                m[i][j][k] = 0;
            }

        }
    }
}


void outPutSection( int m[][5][10], int s){
    for(int i = 0; i < 5; i++){
        for( int j = 0; j < 5; j++){
            cout << m[i][j][s] <<" ";
        }
        cout << endl;
    }
}

int main() {
    int massA[5][5][10];
    int section = 0;
    cout << "Input high of stakes 1 - 10" <<  endl;
    inputMatrix(massA);
    while(section!=-1) {
        cout << "Input section 0 - 9. If you wand to exit, input -1" << endl;
        cin >> section;
        if ((section < -1) || (section > 9)) {
            cout << "Invalid input. Try again" << endl;
        } else if (section >= 0) {
            outPutSection(massA, section);
        }
    }

    return 0;
}
