#pragma once

#include <string>

namespace RM::error {
    class exception : std::exception {
    private:
        std::string m_message;

    public:
        exception(const std::string& message);

        const char* what() const throw();
    };
}
