#include <iostream>

// Lab 7 — Emiliano Sanchez
// CIS 5 Week 07 · Two arrays

int main()
{
  const int N = 5;
  int quiz[N] = {70, 67, 98, 50, 89};
  int lab[N] = {71, 56, 98, 19, 100};
  int highestQuiz = quiz[0];
  int highestLab = lab[0];
  int sum = 0;

  std::cout << "Quiz" << "\n";
  for (int i = 0; i < N; ++i)
  {
    std::cout << "[" << i << "] " << quiz[i] << "\n";
    sum += quiz[i];
    if (quiz[i] > highestQuiz)
    {
      highestQuiz = quiz[i];
    }
  }
  std::cout << "Sum: " << sum << "\n";
  std::cout << "High: " << highestQuiz << "\n";

  sum = 0;
  std::cout << "Lab" << "\n";
  for (int i = 0; i < N; ++i)
  {
    std::cout << "[" << i << "] " << lab[i] << "\n";
    sum += lab[i];
    if (lab[i] > highestLab)
    {
      highestLab = lab[i];
    }
  }
  std::cout << "Sum: " << sum << "\n";
  std::cout << "High: " << highestLab << "\n";
  return 0;
}
