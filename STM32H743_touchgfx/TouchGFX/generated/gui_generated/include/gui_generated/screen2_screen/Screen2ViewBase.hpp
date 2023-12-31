/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN2VIEWBASE_HPP
#define SCREEN2VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/Gauge.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/containers/progress_indicators/TextProgress.hpp>
#include <touchgfx/widgets/graph/GraphWrapAndClear.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>

class Screen2ViewBase : public touchgfx::View<Screen2Presenter>
{
public:
    Screen2ViewBase();
    virtual ~Screen2ViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::Button button1;
    touchgfx::Gauge gauge1;
    touchgfx::Gauge gauge2;
    touchgfx::Slider slider1;
    touchgfx::TextProgress textProgress1;
    touchgfx::GraphWrapAndClear<100> dynamicGraph1;
    touchgfx::GraphElementArea dynamicGraph1Area1;
    touchgfx::PainterRGB565 dynamicGraph1Area1Painter;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 15360;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen2ViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<Screen2ViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);

};

#endif // SCREEN2VIEWBASE_HPP
