#include "commondefs.h"
#include "uva_problems.h"

int uva_Prob100() {
    string strPrompt = "Input two numbers for the range:";
    int startVal, endVal;

    cout << strPrompt << endl;
    while (cin >> startVal >> endVal) {
        int count = 0;
        int maxCount = 0;
        int num;

        if (startVal < 1 || endVal > 1000000) {
            cout << "you must enter a range between 1 and 1000000" << endl;
            continue;
        }
        for (int i = startVal; i <= endVal; i++) {
            num = i;
            count = 1;
            do {
                num = (num % 2) ? 3 * num + 1 : num / 2;
                count++;
            } while (num != 1);
            if (count > maxCount)
                maxCount = count;
        }
        cout << startVal << " " << endVal << " " << maxCount << endl;
    }
}
