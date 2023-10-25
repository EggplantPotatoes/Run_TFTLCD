/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class screen1ViewBase : public touchgfx::View<screen1Presenter>
{
public:
    screen1ViewBase();
    virtual ~screen1ViewBase();
    virtual void setupScreen();

    /*
     * Custom Actions
     */
    virtual void action1()
    {
        // Override and implement this function in Screen1
    }
    

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Button button1;
    touchgfx::TextArea textArea1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<screen1ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREEN1VIEWBASE_HPP