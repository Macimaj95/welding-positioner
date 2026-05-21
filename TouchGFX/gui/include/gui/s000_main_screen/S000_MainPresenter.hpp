#ifndef S000_MAINPRESENTER_HPP
#define S000_MAINPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class S000_MainView;

class S000_MainPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    S000_MainPresenter(S000_MainView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~S000_MainPresenter() {}

private:
    S000_MainPresenter();

    S000_MainView& view;
};

#endif // S000_MAINPRESENTER_HPP
