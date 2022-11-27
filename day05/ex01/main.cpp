#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>


int main()
{
    Bureaucrat mark("Mark", 50);
    Form form1("form1", 100, 100);
    std::cout << form1;
//    Form wrongForm1("form1", 0, 100);
//    Form wrongForm2("form2", 0, 199);
    mark.signForm(form1);
    form1.beSigned(mark);
    std::cout << form1;
    return 0;
}
