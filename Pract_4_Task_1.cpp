#include <iostream>
#include <forward_list>

int main() {
    // 1. ��������� ������'������ ������ � ���������� {1, 2, 3, 4, 5}
    std::forward_list<int> flist = { 1, 2, 3, 4, 5 };

    // 2. ������������ ��������� ��� �������� �������� ������
    std::cout << "Elements of list: ";
    for (auto it = flist.begin(); it != flist.end(); ++it) {
        // 3. ��������� �������� ������� ��������
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
