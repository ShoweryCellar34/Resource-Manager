#include <RS/error.hpp>

namespace RS::error {
    exception::exception(const std::string& message) : m_message(message) {
    }

    const char* exception::what() const throw() {
        return m_message.c_str();
    }
}
