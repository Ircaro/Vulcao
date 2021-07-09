#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int T, i, P, Resp;
  cin >> T;
  Resp = 0;

  for (i = 0; ;i++) {
    cin >> P;
    if (P > T) {
      Resp = 1;
    }
    if (P == 0) {
      break;
    }
  }

  if (Resp == 1) {
    cout << "ALARME" << endl;
  } else {
    cout << "O Havai pode dormir tranquilo" << endl;
  }
}
