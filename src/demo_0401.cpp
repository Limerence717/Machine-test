//
// Created by LIUSHU on 2025/3/8.
//

// 浮点数加法（北京大学复试上机题）

#include <cstdio>
#include <string>

using namespace std;

string GetInteger(string a) {
    return a.substr(0, a.find('.'));
}

string GetFraction(string a) {
    return a.substr(a.find('.') + 1, a.size() - a.find('.'));
}

// 使用引用参数 返回信息
void FactionPlus(string &res, int &carry, string fa, string fb) {
    int size = max(fa.size(), fb.size());
    while (fa.size() < size) {
        fa.push_back('0');
    }
    while (fb.size() < size) {
        fb.push_back('0');
    }

    res.resize(size); // 给res申请内存空间
    carry = 0;
    for (int i = size - 1; i >= 0; i--) {
        // '0' =  '0'
        // '3' =  '0' + 3
        if (fa[i] + fb[i] + carry - '0' > '9') {
            res[i] = fa[i] + fb[i] + carry - '0' - 10;
            carry = 1;
        } else {
            res[i] = fa[i] + fb[i] + carry - '0';
            carry = 0;
        }
    }
}

void IntegerPlus(string &res, int carry, string ia, string ib) {
    res.clear();
    for (int i = ia.size() - 1, j = ib.size() - 1; i >= 0 || j >= 0 || carry == 1; i--, j--) {
        if (i >= 0 && j >= 0) {
            if (ia[i] + ib[j] + carry - '0' > '9') {
                res.insert(res.begin(), ia[i] + ib[j] + carry - '0' - 10);
                carry = 1;
            } else {
                res.insert(res.begin(), ia[i] + ib[j] + carry - '0');
                carry = 0;
            }
        } else if (i >= 0 && j < 0) {
            if (ia[i] + carry > '9') {
                res.insert(res.begin(), ia[i] + carry - 10);
                carry = 1;
            } else {
                res.insert(res.begin(), ia[i] + carry);
                carry = 0;
            }
        } else if (i < 0 && j >= 0) {
            if (ib[j] + carry > '9') {
                res.insert(res.begin(), ib[j] + carry - 10);
                carry = 1;
            } else {
                res.insert(res.begin(), ib[j] + carry);
                carry = 0;
            }
        } else {
            if (carry == 1) {
                res.insert(res.begin(), '1');
                carry = 0;
            }
        }
    }
}

int main() {
//    string a = "12345.6789";
//    string b = "333.33333";
    char arra[1000] = {0};
    char arrb[1000] = {0};
    while (scanf("%s%s", arra, arrb) != EOF) {
        string a = arra;
        string b = arrb;
        string ia = GetInteger(a);
        string fa = GetFraction(a);
        string ib = GetInteger(b);
        string fb = GetFraction(b);

        string fres;
        int carry;
        FactionPlus(fres, carry, fa, fb);
        string ires;
        IntegerPlus(ires, carry, ia, ib);
        printf("%s.%s\n", ires.c_str(), fres.c_str());
    }
    return 0;
}