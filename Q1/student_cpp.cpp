#include <iostream>
#include <map>
#include <cstring>

struct Node {
    int middleTest_score;
    int finalTest_score;
};

int main() {
    int student_count;
    std::cout << "학생 수 입력: ";
    std::cin >> student_count;

    std::map<std::string, Node> student_map;

    for (int i = 0; i < student_count; ++i) {
        std::string name;
        Node student_data;

        std::cout << "학생 이름, 중간, 기말 점수를 입력: ";
        std::cin >> name >> student_data.middleTest_score >> student_data.finalTest_score;

        auto result = student_map.insert({name, student_data});

        std::cout << "\"" << name << "\"";

        if (result.second)
            std::cout << " 맵에 추가" << std::endl;
        else
            std::cout << " 이미 존재" << std::endl;
    }

    for (const auto& entry : student_map) {
        std::cout << "이름 = " << entry.first
                  << ", 중간 = " << entry.second.middleTest_score
                  << ", 기말 = " << entry.second.finalTest_score << std::endl;
    }

    return 0;
}
