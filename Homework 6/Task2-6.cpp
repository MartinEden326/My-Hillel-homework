// 2. Напишіть програму, яка оголошує клас з ім'ям Employee (Службовці)
//    з такими змінними-членами: age (вік), yearsOfService (стаж роботи)
//    та Salary (зарплата).

// 3. Перепишіть клас Employee, щоб зробити дані - члени закритими і забезпечити
//    відкриті методі доступу для читання і встановлення всіх даних-членів.

// 4. Напишіть програму з використанням класу Employee, яка створює два об'єкти
//    класу Employee; встановлює дані-члени age, Years0fService та Salary,
//    а потім виводить їх значення.

// 5. На основі програми з вправи 3 створіть метод класу Employee, який повідомляє,
//    скільки тисяч доларів заробляє службовець, округляючи відповідь до 10 доларів.

// 6. Змініть клас Employee так, щоб можна було ініціалізувати дані-члени age,
//    YearsofService і Salary у процесі "створення" службовця.

#include <iostream>

class Employee
{
public:
    int GetAge() const;
    void SetAge(int itsAge);
    int GetYearsOfService() const;
    void SetYearsOfService(int itsYearsOfService);
    int GetSalary() const;
    void SetSalary(int itsSalary);

private:
    int age;
    int yearsOfService;
    int Salary;
};

int Employee::GetAge() const
{
    return age;
}
void Employee::SetAge(int itsAge)
{
    age = itsAge;
}
int Employee::GetYearsOfService() const
{
    return yearsOfService;
}
void Employee::SetYearsOfService(int itsYearsOfService)
{
    yearsOfService = itsYearsOfService;
}
int Employee::GetSalary() const
{
    return Salary - (Salary % 10);
}
void Employee::SetSalary(int itsSalary)
{
    Salary = itsSalary;
}

int main()
{
    int itsAge, itsYearsOfService, itsSalary;
    Employee firstWorker,secondWorker;

    std::cout << "\nEnter first worker age: ";
    std::cin >> itsAge;
    firstWorker.SetAge(itsAge);
    std::cout << "Enter first worker years of service: ";
    std::cin >> itsYearsOfService;
    firstWorker.SetYearsOfService(itsYearsOfService);
    std::cout << "Enter first worker salary: ";
    std::cin >> itsSalary;
    firstWorker.SetSalary(itsSalary);

    std::cout << "\nEnter second worker age: ";
    std::cin >> itsAge;
    secondWorker.SetAge(itsAge);
    std::cout << "Enter second worker years of service: ";
    std::cin >> itsYearsOfService;
    secondWorker.SetYearsOfService(itsYearsOfService);
    std::cout << "Enter second worker salary: ";
    std::cin >> itsSalary;
    secondWorker.SetSalary(itsSalary);

    std::cout << "\nFirst worker age: " << firstWorker.GetAge();
    std::cout << "\nFirst worker years of service: " << firstWorker.GetYearsOfService();
    std::cout << "\nFirst worker salary: " << firstWorker.GetSalary();
    std::cout << "\n\nSecond worker age: " << secondWorker.GetAge();
    std::cout << "\nSecond worker years of service: " << secondWorker.GetYearsOfService();
    std::cout << "\nSecond worker salary: " << secondWorker.GetSalary();

    return 0;
}