#ifndef S100_HOMEPRESENTER_HPP
#define S100_HOMEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class S100_HomeView;

class S100_HomePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    S100_HomePresenter(S100_HomeView& v);

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

    virtual ~S100_HomePresenter() {}

private:
    S100_HomePresenter();

    S100_HomeView& view;
};

#endif // S100_HOMEPRESENTER_HPP
