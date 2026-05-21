#ifndef S200_SETTINGSVIEW_HPP
#define S200_SETTINGSVIEW_HPP

#include <gui_generated/s200_settings_screen/S200_SettingsViewBase.hpp>
#include <gui/s200_settings_screen/S200_SettingsPresenter.hpp>

class S200_SettingsView : public S200_SettingsViewBase
{
public:
    S200_SettingsView();
    virtual ~S200_SettingsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // S200_SETTINGSVIEW_HPP
