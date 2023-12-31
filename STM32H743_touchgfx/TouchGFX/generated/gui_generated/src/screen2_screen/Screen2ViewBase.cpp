/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen2ViewBase::Screen2ViewBase() :
    buttonCallback(this, &Screen2ViewBase::buttonCallbackHandler),
    sliderValueChangedCallback(this, &Screen2ViewBase::sliderValueChangedCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 1024, 600);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_LIGHT_THEME_IMAGES_BACKGROUNDS_1024X600_SHATTERED_RAIN_ID));
    add(image1);

    button1.setXY(914, 550);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_DISABLED_ID));
    button1.setAction(buttonCallback);
    add(button1);

    gauge1.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_MEDIUM_BACKGROUNDS_ACTIVE_ID));
    gauge1.setPosition(122, 25, 240, 240);
    gauge1.setCenter(120, 120);
    gauge1.setStartEndAngle(-113, 112);
    gauge1.setRange(0, 100);
    gauge1.setValue(50);
    gauge1.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_MEDIUM_NEEDLES_SMOOTH_ID, 7, 67);
    gauge1.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    add(gauge1);

    gauge2.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_MEDIUM_BACKGROUNDS_ACTIVE_ID));
    gauge2.setPosition(665, 25, 240, 240);
    gauge2.setCenter(120, 120);
    gauge2.setStartEndAngle(-113, 112);
    gauge2.setRange(0, 100);
    gauge2.setValue(50);
    gauge2.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_MEDIUM_NEEDLES_SMOOTH_ID, 7, 67);
    gauge2.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge2.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    add(gauge2);

    slider1.setXY(669, 449);
    slider1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_TRACK_SMALL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_FILLER_SMALL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_ROUNDED_ACTIVE_ID));
    slider1.setupHorizontalSlider(16, 11, 0, 0, 200);
    slider1.setValueRange(0, 100);
    slider1.setValue(0);
    slider1.setNewValueCallback(sliderValueChangedCallback);
    add(slider1);

    textProgress1.setXY(698, 339);
    textProgress1.setProgressIndicatorPosition(12, 10, 150, 30);
    textProgress1.setRange(0, 100);
    textProgress1.setColor(touchgfx::Color::getColorFromRGB(12, 27, 55));
    textProgress1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_QG8U));
    textProgress1.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TEXTPROGRESS_BACKGROUNDS_ROUNDED_LIGHT_ID));
    textProgress1.setValue(0);
    add(textProgress1);

    dynamicGraph1.setPosition(76, 282, 358, 293);
    dynamicGraph1.setScale(1);
    dynamicGraph1.setGraphAreaMargin(0, 0, 0, 0);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(0, 100);
    dynamicGraph1Area1Painter.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1Area1.setPainter(dynamicGraph1Area1Painter);
    dynamicGraph1Area1.setBaseline(0);
    dynamicGraph1.addGraphElement(dynamicGraph1Area1);


    dynamicGraph1.addDataPoint(53.24652f);
    dynamicGraph1.addDataPoint(60.82245f);
    dynamicGraph1.addDataPoint(69.12584f);
    dynamicGraph1.addDataPoint(75.29079f);
    dynamicGraph1.addDataPoint(76.8735f);
    dynamicGraph1.addDataPoint(72.48791f);
    dynamicGraph1.addDataPoint(62.18483f);
    dynamicGraph1.addDataPoint(47.48028f);
    dynamicGraph1.addDataPoint(31.02446f);
    dynamicGraph1.addDataPoint(15.99076f);
    dynamicGraph1.addDataPoint(5.33291f);
    dynamicGraph1.addDataPoint(1.09075f);
    dynamicGraph1.addDataPoint(3.9136f);
    dynamicGraph1.addDataPoint(12.91672f);
    dynamicGraph1.addDataPoint(25.90568f);
    dynamicGraph1.addDataPoint(39.91324f);
    dynamicGraph1.addDataPoint(51.91734f);
    dynamicGraph1.addDataPoint(59.56477f);
    dynamicGraph1.addDataPoint(61.72396f);
    dynamicGraph1.addDataPoint(58.73247f);
    dynamicGraph1.addDataPoint(52.27986f);
    dynamicGraph1.addDataPoint(44.95581f);
    dynamicGraph1.addDataPoint(39.57589f);
    dynamicGraph1.addDataPoint(38.45136f);
    dynamicGraph1.addDataPoint(42.78374f);
    dynamicGraph1.addDataPoint(52.33368f);
    dynamicGraph1.addDataPoint(65.44682f);
    dynamicGraph1.addDataPoint(79.43155f);
    dynamicGraph1.addDataPoint(91.19737f);
    dynamicGraph1.addDataPoint(97.99822f);
    dynamicGraph1.addDataPoint(98.09946f);
    dynamicGraph1.addDataPoint(91.20534f);
    dynamicGraph1.addDataPoint(78.5422f);
    dynamicGraph1.addDataPoint(62.57666f);
    dynamicGraph1.addDataPoint(46.43691f);
    dynamicGraph1.addDataPoint(33.17801f);
    dynamicGraph1.addDataPoint(25.0696f);
    dynamicGraph1.addDataPoint(23.07917f);
    dynamicGraph1.addDataPoint(26.67573f);
    dynamicGraph1.addDataPoint(34.00047f);
    dynamicGraph1.addDataPoint(42.3608f);
    dynamicGraph1.addDataPoint(48.92546f);
    dynamicGraph1.addDataPoint(51.44899f);
    dynamicGraph1.addDataPoint(48.84696f);
    dynamicGraph1.addDataPoint(41.48f);
    dynamicGraph1.addDataPoint(31.07663f);
    dynamicGraph1.addDataPoint(20.31298f);
    dynamicGraph1.addDataPoint(12.15245f);
    dynamicGraph1.addDataPoint(9.10712f);
    dynamicGraph1.addDataPoint(12.60216f);
    dynamicGraph1.addDataPoint(22.59986f);
    dynamicGraph1.addDataPoint(37.5762f);
    dynamicGraph1.addDataPoint(54.85719f);
    dynamicGraph1.addDataPoint(71.23397f);
    dynamicGraph1.addDataPoint(83.7077f);
    dynamicGraph1.addDataPoint(90.18348f);
    dynamicGraph1.addDataPoint(89.94503f);
    dynamicGraph1.addDataPoint(83.79538f);
    dynamicGraph1.addDataPoint(73.83063f);
    dynamicGraph1.addDataPoint(62.90314f);
    dynamicGraph1.addDataPoint(53.90678f);
    dynamicGraph1.addDataPoint(49.05967f);
    dynamicGraph1.addDataPoint(49.3605f);
    dynamicGraph1.addDataPoint(54.35151f);
    dynamicGraph1.addDataPoint(62.24588f);
    dynamicGraph1.addDataPoint(70.38773f);
    dynamicGraph1.addDataPoint(75.93118f);
    dynamicGraph1.addDataPoint(76.57113f);
    dynamicGraph1.addDataPoint(71.1454f);
    dynamicGraph1.addDataPoint(59.95937f);
    dynamicGraph1.addDataPoint(44.75198f);
    dynamicGraph1.addDataPoint(28.30987f);
    dynamicGraph1.addDataPoint(13.82239f);
    dynamicGraph1.addDataPoint(4.13417f);
    dynamicGraph1.addDataPoint(1.07656f);
    dynamicGraph1.addDataPoint(5.04087f);
    dynamicGraph1.addDataPoint(14.89679f);
    dynamicGraph1.addDataPoint(28.27549f);
    dynamicGraph1.addDataPoint(42.14784f);
    dynamicGraph1.addDataPoint(53.55621f);
    dynamicGraph1.addDataPoint(60.32111f);
    dynamicGraph1.addDataPoint(61.55034f);
    dynamicGraph1.addDataPoint(57.827f);
    dynamicGraph1.addDataPoint(51.03141f);
    dynamicGraph1.addDataPoint(43.84221f);
    dynamicGraph1.addDataPoint(39.04f);
    dynamicGraph1.addDataPoint(38.78593f);
    dynamicGraph1.addDataPoint(44.05325f);
    dynamicGraph1.addDataPoint(54.35272f);
    dynamicGraph1.addDataPoint(67.82049f);
    dynamicGraph1.addDataPoint(81.64821f);
    dynamicGraph1.addDataPoint(92.75108f);
    dynamicGraph1.addDataPoint(98.5112f);
    dynamicGraph1.addDataPoint(97.41443f);
    dynamicGraph1.addDataPoint(89.42533f);
    dynamicGraph1.addDataPoint(76.0079f);
    dynamicGraph1.addDataPoint(59.78676f);
    dynamicGraph1.addDataPoint(43.93092f);
    dynamicGraph1.addDataPoint(31.40983f);
    dynamicGraph1.addDataPoint(24.3028f);
    add(dynamicGraph1);
}

Screen2ViewBase::~Screen2ViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1)
    {
        //Interaction1
        //When button1 clicked change screen to Screen1
        //Go to Screen1 with no screen transition
        application().gotoScreen1ScreenNoTransition();
    }
}

void Screen2ViewBase::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &slider1)
    {
        //Interaction2
        //When slider1 value changed execute C++ code
        //Execute C++ code
        textProgress1.setValue(value);
    }
}
