#ifndef S000_MAINVIEW_HPP
#define S000_MAINVIEW_HPP

#include <gui_generated/s000_main_screen/S000_MainViewBase.hpp>
#include <gui/s000_main_screen/S000_MainPresenter.hpp>

class S000_MainView : public S000_MainViewBase
{
public:
    S000_MainView();
    virtual ~S000_MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // S000_MAINVIEW_HPP
