#include "application.h"

Application::Application(const int argc, char **argv) {
    for (int i = 0; i < argc; i++)
        m_argv.push_back(new string(argv[i]));
}

Application::~Application() {
    if (m_argv.size() > 0)
        m_argv.clear();
}
