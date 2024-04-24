#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Company {
    string id;
    string name;
    string establishmentDate;
    int numberOfInterns;

    Company() : id(""), name(""), establishmentDate(""), numberOfInterns(0) {}

    Company(string _id, string _name, string _establishmentDate, int _numberOfInterns)
        : id(_id), name(_name), establishmentDate(_establishmentDate), numberOfInterns(_numberOfInterns) {}

    string getFormattedDate() const {
    string formattedDate = establishmentDate;
    // Kiểm tra nếu chuỗi ngày thành lập không đủ 6 ký tự (dd/mm/yyyy)
    if (formattedDate.size() < 6) {
        // Nếu không đủ, thêm ký tự '0' vào các vị trí thiếu
        while (formattedDate.size() < 6) {
            formattedDate.insert(0, 1, '0');
        }
    }
    // Chèn ký tự '0' vào vị trí thứ 3 và thứ 6 để đảm bảo định dạng chuẩn dd/mm/yyyy
    formattedDate.insert(2, 1, '0');
    formattedDate.insert(5, 1, '0');
    return formattedDate;
}

};

bool compareInterns(const Company& company1, const Company& company2) {
    return company1.numberOfInterns > company2.numberOfInterns;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    vector<Company> companies;

    for (int i = 0; i < n; ++i) {
        string id, name, establishmentDate;
        int numberOfInterns;
        cout << "Nhap id, name, establishmentDate, numberOfInterns : ";
        cin >> id >> name >> establishmentDate >> numberOfInterns;
        companies.push_back(Company(id, name, establishmentDate, numberOfInterns));
    }

    int m;
    cout << "Nhap m: ";
    cin >> m;

    vector<Company> filteredCompanies;

    int count = 0;
    int a, b;
    cout << "Nhap a, b (a <= b): ";
    cin >> a >> b;

    if (a > b) {
        cout << "Gia tri a phai nho hon hoac bang gia tri b" << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        if (companies[i].numberOfInterns >= a && companies[i].numberOfInterns <= b) {
            filteredCompanies.push_back(companies[i]);
        }
    }

    sort(filteredCompanies.begin(), filteredCompanies.end(), compareInterns);

    for (int i = 0; i < filteredCompanies.size(); ++i) {
        
        cout << "Ngày thành lập: " << filteredCompanies[i].getFormattedDate() << endl;
        
    }

    return 0;
}
