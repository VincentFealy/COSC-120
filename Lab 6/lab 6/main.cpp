#include <iostream>

using namespace std;

typedef int SIZE;
const SIZE s = 10;
typedef float grades[s];
typedef char names[s];
float average(grades g, SIZE s);
void read(grades g, SIZE s);

int main()
{
    grades g;
    name n;
    cin >> n;
    read (g,s);
    print(g, s);
    print(n, s);
    float result = average(g, s);
    cout << "avg is : " << result;

}
void read(grades g, SIZE s){
cout << "enter " + s + "number of grades"<<
endl;
for(int i=0; i<s; i++){
    cin >> g[i];
}
}
float average(grades g, SIZE s){
    float total = 0;
    for(int i =0; i<s; i++){
        total += g[i];
    }
    return total;
}
void print(grades g, SIZE s){
    for(int i=0; i<s; i++){
        cout << g[i] << " " << endl;
    }
}
void print(name n,SIZE s){
    for(int i=0; i<s; i++){
        cout << n[i] << " " << endl;
    }
}
