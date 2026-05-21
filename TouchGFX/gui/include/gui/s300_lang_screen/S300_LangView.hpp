#ifndef S300_LANGVIEW_HPP
#define S300_LANGVIEW_HPP

#include <gui_generated/s300_lang_screen/S300_LangViewBase.hpp>
#include <gui/s300_lang_screen/S300_LangPresenter.hpp>

class S300_LangView : public S300_LangViewBase
{
public:
    S300_LangView();
    virtual ~S300_LangView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // S300_LANGVIEW_HPP
