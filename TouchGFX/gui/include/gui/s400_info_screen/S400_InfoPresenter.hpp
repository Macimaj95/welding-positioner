#ifndef S400_INFOPRESENTER_HPP
#define S400_INFOPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class S400_InfoView;

class S400_InfoPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    S400_InfoPresenter(S400_InfoView& v);

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

    virtual ~S400_InfoPresenter() {}

private:
    S400_InfoPresenter();

    S400_InfoView& view;
};

#endif // S400_INFOPRESENTER_HPP
