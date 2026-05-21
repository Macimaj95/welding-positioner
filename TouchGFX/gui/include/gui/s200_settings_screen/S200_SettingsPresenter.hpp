#ifndef S200_SETTINGSPRESENTER_HPP
#define S200_SETTINGSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class S200_SettingsView;

class S200_SettingsPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    S200_SettingsPresenter(S200_SettingsView& v);

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

    virtual ~S200_SettingsPresenter() {}

private:
    S200_SettingsPresenter();

    S200_SettingsView& view;
};

#endif // S200_SETTINGSPRESENTER_HPP
