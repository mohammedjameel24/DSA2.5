#include <iostream>
#include <vector>

using namespace std;

vector<int> find_union(vector<int> a, vector<int> b) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            result.push_back(a[i]);
            i++;
        } else if (a[i] > b[j]) {
            result.push_back(b[j]);
            j++;
        } else {
            result.push_back(a[i]);
            i++;
            j++;
        }
    }
    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }
    return result;
}

vector<int> find_intersection(vector<int> a, vector<int> b) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            result.push_back(a[i]);
            i++;
            j++;
        }
    }
    return result;
}

int main() {
    vector<int> a = {1, 3, 4, 5, 7};
    vector<int> b = {2, 3, 5, 6};
    
    vector<int> union_array = find_union(a, b);
    vector<int> intersection_array = find_intersection(a, b);
    
    cout << "Union: ";
    for (int i = 0; i < union_array.size(); i++) {
        cout << union_array[i] << " ";
    }
    cout << endl;
    
    cout << "Intersection: ";
    for (int i = 0; i < intersection_array.size(); i++) {
        cout << intersection_array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
