//
// Created by Marleen Maryjane on 1/15/22.
//

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreation", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), 145, 137, src.getTarget())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	_target = rhs._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!(this->isSigned()))
        throw FormIsNotSignedException();
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();
    std::ofstream oFile(this->getTarget() + ".txt");
    if (!oFile) {
        std::cerr << "File couldn't be opened for writing" << std::endl;
        return;
    }
    oFile << "      # #### ####" << std::endl
          << "    ### /#|### |/####" << std::endl
          << "    ##/#/ ||/##/_/##/_#" << std::endl
          << "  ###  /###|/ / # ###" << std::endl
          << " ##__#_## | #/###_/_####" << std::endl
          << "## #### #  #| /  #### ##/##" << std::endl
          << " __#_--###`  |{,###---###-~" << std::endl
          << "            }{" << std::endl
          << "            }}{" << std::endl
          << "            }}{" << std::endl
          << "            {{}" << std::endl
          << "       -=-~{ .-^- _" << std::endl;
}
