#ifndef S400_INFOVIEW_HPP
#define S400_INFOVIEW_HPP

#include <gui_generated/s400_info_screen/S400_InfoViewBase.hpp>
#include <gui/s400_info_screen/S400_InfoPresenter.hpp>

class S400_InfoView : public S400_InfoViewBase
{
public:
    S400_InfoView();
    virtual ~S400_InfoView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // S400_INFOVIEW_HPP
