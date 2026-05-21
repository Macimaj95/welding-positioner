#ifndef S100_HOMEVIEW_HPP
#define S100_HOMEVIEW_HPP

#include <gui_generated/s100_home_screen/S100_HomeViewBase.hpp>
#include <gui/s100_home_screen/S100_HomePresenter.hpp>

class S100_HomeView : public S100_HomeViewBase
{
public:
    S100_HomeView();
    virtual ~S100_HomeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // S100_HOMEVIEW_HPP
