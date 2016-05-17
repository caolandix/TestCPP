#ifndef APPLICATION_H
#define APPLICATION_H

// This is a class to demonstrate abstraction

#include "commondefs.h"

// Wrapper class for the entire application. It creates a singleton instance of the app class and instantiates the command pattern structure
class Application {
protected:
    vector<string *> m_argv;
    virtual int verifyCmdArgs() = 0;
public:
    Application(const int, char **);
    virtual ~Application();

    virtual int run() = 0;
    int numArgs () const { return m_argv.size(); }
    vector<string *> argv() const { return m_argv; }
};

#endif // APPLICATION_H
