#include <ios>
#include <iostream>
#include <fstream>
#include <string>
#include "proto-gen/Student.pb.h"

int main() {

    // 링크 될 protobuf 버전이, 컴파일 된 proto 버전과 호환되는지 assert
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    student::Student *new_student = new student::Student();
    new_student->set_studentid(2015112391);
    new_student->set_name("4whomtbts");
    new_student->set_dept("Department of computer");
    new_student->set_major("Computer science");
    new_student->set_gpa("3.0");
    new_student->PhoneType_Name(student::Student_PhoneType_MOBILE);

    student::Student::PhoneNumber* cell_phone = new_student->add_phones();
    cell_phone->set_number("010-1234-5678");
    student::Student::PhoneNumber* lab_phone = new_student->add_phones();
    lab_phone->set_number("02-2260-1234");

    std::cout << new_student->SerializeAsString() << std::endl;
    // 선택적 : libprotobuf 라이브러리로 인해 만들어진 모든 전역 객체를 삭제
    // 필수적이지는 않지만, 대부분의 프로그램에서 필요할 일이 없는 것 이기 때문에
    // 아래의 코드를 호출함으로써, 자원을 save할 수 있습니다.
    std::cout << "사용되는 메모리 : " << new_student->SpaceUsedLong() << std::endl;

    std::fstream output("hello.raftlog", std::ios::out | std::ios::binary | std::ios::trunc);
    std::ifstream input("hello.raftlog");
    if(!new_student->SerializeToOstream(&output)) {
        std::cout << "Failed to write address book"<<std::endl;
        return -1;
    }
     output.close();

    std::cout << "스트링 변환 : " << new_student->SerializeAsString() << std::endl;

    student::Student deserialized_student;
    deserialized_student.ParseFromIstream(&input);
    std::cout << "파일에서 읽은 proto message : " << deserialized_student.SerializeAsString() << std::endl;
    input.close();

    return 0;
}