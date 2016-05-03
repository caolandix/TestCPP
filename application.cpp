#include "application.h"


bool Application::m_created = false;
Application *Application::m_pSelf = NULL;

Application *Application::getInstance() {
    if (!m_created) {
        m_pSelf = new Application();
        m_created = true;
    }
    return m_pSelf;
}
