
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
class Graphics;
class NullProgressActivity;
class ProgressActivityInterface;
class BasicColor;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
//class ShowTitleProgressBarRunnable;
//class DismissTitleProgressBarRunnable;
//class TitleProgressBarPortionSetProgressRunnable;
//class TitleProgressBarSetProgressRunnable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidTitleProgressBar: public ProgressCanvas {
public: class TitleProgressBarSetProgressRunnable;
public: class TitleProgressBarPortionSetProgressRunnable;
public: class ShowTitleProgressBarRunnable;
public: class DismissTitleProgressBarRunnable;

//inner= member=true isStatic=
public: class TitleProgressBarSetProgressRunnable
            : public virtual Object
        , public Runnable {

    public: AndroidTitleProgressBar* outer = nullptr;

    private: AndroidTitleProgressBar* androidTitleProgressBar;

public: TitleProgressBarSetProgressRunnable(AndroidTitleProgressBar* androidTitleProgressBar);

    public: void run();

};

            
//inner= member=true isStatic=
public: class TitleProgressBarPortionSetProgressRunnable
            : public virtual Object
        , public Runnable {

    public: AndroidTitleProgressBar* outer = nullptr;

    private: AndroidTitleProgressBar* androidTitleProgressBar;

public: TitleProgressBarPortionSetProgressRunnable(AndroidTitleProgressBar* androidTitleProgressBar);

    public: void run();

};

            
//inner= member=true isStatic=
public: class ShowTitleProgressBarRunnable
            : public virtual Object
        , public Runnable {

    public: AndroidTitleProgressBar* outer = nullptr;

    private: AndroidTitleProgressBar* androidTitleProgressBar;

public: ShowTitleProgressBarRunnable(AndroidTitleProgressBar* androidTitleProgressBar);

    public: void run();

};

            
//inner= member=true isStatic=
public: class DismissTitleProgressBarRunnable
            : public virtual Object
        , public Runnable {

    public: AndroidTitleProgressBar* outer = nullptr;

    private: AndroidTitleProgressBar* androidTitleProgressBar;

public: DismissTitleProgressBarRunnable(AndroidTitleProgressBar* androidTitleProgressBar);

    public: void run();

};

            
    private: ShowTitleProgressBarRunnable* showTitleProgressBarRunnable;

    private: DismissTitleProgressBarRunnable* dismissTitleProgressBarRunnable;

    private: TitleProgressBarPortionSetProgressRunnable* progressDialogPortionSetProgressRunnable;

    private: TitleProgressBarSetProgressRunnable* progressDialogSetProgressRunnable;

    private: ProgressActivityInterface* progressActivity;

    private: int32_t portion = 0;

/*protected*/ public: AndroidTitleProgressBar(std::string title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void init(ProgressActivityInterface* activity);

    public: bool isInitialized();

    public: void start();

    public: void end();

    public: void addPortion(int32_t value, std::string text, int32_t index);

    public: void addNormalPortion(int32_t value, std::string text);

    /*protected*/ public: void setValue(int32_t value);

    public: void waitUntilDisplayed();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/android/activity/NullProgressActivity.h>)
#include <org/allbinary/android/activity/NullProgressActivity.h>
#endif
#if __has_include(<org/allbinary/android/activity/ProgressActivityInterface.h>)
#include <org/allbinary/android/activity/ProgressActivityInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif

        #endif
    
