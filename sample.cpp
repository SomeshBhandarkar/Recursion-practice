#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

class Student{
private:
    int id;
    string name;
public:
    Student(int id, string name){
        this->id = id;
        this->name = name;
    }
    int id_getter(){
        return id;
    }
    string name_getter(){
        return name;
    } 

};

class Course{
private:
    int course_id;
    string course_name;
    int8_t grade;
public:
    Course(int id, string name, int8_t grade){
        this->course_id = id;
        this->course_name = name;
        this->grade = grade;
    }
    int courseId_getter(){
        return course_id;
    }
    string courseName_getter(){
        return course_name;
    }
    int8_t grade_getter(){
        return grade;
    }
};

class Grade{
private:
    int student_id;
    int course_id;
    char grade;
public:
    Grade(int student_id, int course_id, char grade){
        this->student_id = student_id;
        this->course_id = course_id;
        this->grade = grade;
    }
    int stu_id_getter(){
        return student_id;
    }
    int course_id_getter(){
        return course_id;
    }
    char grade_getter(){
        return grade;
    }
};



int main()
{
    Student my_student(12, "somesh");
    Course my_course(10, "computer engineering", 4);
    Grade my_grade(12,7,'B');

    cout << "Student : " << my_student.name_getter() << endl;
    cout << "Course : " << my_course.courseName_getter() << endl;
    cout << "Grade : " << my_grade.grade_getter() << endl;

    return 0;
}