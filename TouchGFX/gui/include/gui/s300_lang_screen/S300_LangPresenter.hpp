#ifndef S300_LANGPRESENTER_HPP
#define S300_LANGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class S300_LangView;

class S300_LangPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    S300_LangPresenter(S300_LangView& v);

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

    virtual ~S300_LangPresenter() {}

private:
    S300_LangPresenter();

    S300_LangView& view;
};

#endif // S300_LANGPRESENTER_HPP
