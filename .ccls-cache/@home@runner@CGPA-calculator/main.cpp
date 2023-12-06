#include <iomanip>
#include <iostream>
#include <vector>

int main() {
  std::vector<float> grades;
  std::vector<int> credits;
  float total = 0, cred_sum = 0;
  int n;
  std::cout << "How many subjects do you have? ";
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    float grade;
    int credit;
    std::cout << "Enter grade for subject " << i + 1 << " : ";
    std::cin >> grade;
    std::cout << "Enter credit for subject : ";
    std::cin >> credit;
    std::cout << std::endl;

    grades.push_back(grade);
    credits.push_back(credit);
    total += grade * credit;
    cred_sum += credit;
  }
  float CGPA, CGPA_percentage;
  CGPA = total / (cred_sum * 10);
  CGPA_percentage = CGPA * 9.5;

  std::cout << std::endl << std::fixed << std::setprecision(2);
  std::cout << "Your CGPA is: " << CGPA << std::endl;
  std::cout << "Your CGPA percentage is: " << CGPA_percentage << std::endl;

  return 0;
}