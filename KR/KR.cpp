#include <iostream>
#include <string>

// Базовий клас "Персона"
class Person {
public:
    std::string name;
    int age;
    std::string gender;

    // Конструктор
    Person(const std::string& n, int a, const std::string& g)
        : name(n), age(a), gender(g) {}

    // Віртуальний деструктор
    virtual ~Person() {
        std::cout << "Deleted object of Person" << std::endl;
    }
};

// Похідний клас "Студент"
class Student : public Person {
public:
    int studentID;
    std::string major;
    double gpa; //Середній бал

    // Конструктор
    Student(const std::string& n, int a, const std::string& g, int id, const std::string& m, double gp)
        : Person(n, a, g), studentID(id), major(m), gpa(gp) {}

    // Деструктор
    ~Student() {
        std::cout << "Deleted object of Student" << std::endl;
    }
};

// Похідний клас "Викладач"
class Teacher : public Person {
public:
    std::string subject;
    std::string department;
    int yearsOfExperience;

    // Конструктор
    Teacher(const std::string& n, int a, const std::string& g, const std::string& sub, const std::string& dep, int y)
        : Person(n, a, g), subject(sub), department(dep), yearsOfExperience(y) {}

    // Деструктор
    ~Teacher() {
        std::cout << "Deleted object of Teacher" << std::endl;
    }
};

// Похідний клас "Завкафедрою"
class DepartmentHead : public Teacher {
public:
    int numberOfPublications;
    bool isTenured;
    std::string officeLocation;

    // Конструктор
    DepartmentHead(const std::string& n, int a, const std::string& g, const std::string& sub, const std::string& dep, int y, int num, bool ten, const std::string& loc)
        : Teacher(n, a, g, sub, dep, y), numberOfPublications(num), isTenured(ten), officeLocation(loc) {}

    // Деструктор
    ~DepartmentHead() {
        std::cout << "Deleted object of DepartmentHead" << std::endl;
    }
};

int main() {
    // Створення об'єктів
    Person* person = new Person("Іван Іванович", 50, "чоловік");
    Person* student = new Student("Петро Петрович", 20, "чоловік", 12345, "Комп'ютерні науки", 3.7);
    Person* teacher = new Teacher("Марія Маріївна", 40, "жінка", "Математика", "Фізико-математичний факультет", 15);
    Person* head = new DepartmentHead("Олександр Олександрович", 45, "чоловік", "Фізика", "Фізичний факультет", 20, 50, true, "Кабінет 101");

    // Видалення об'єктів
    delete person;
    delete student;
    delete teacher;
    delete head;

    return 0;
}
