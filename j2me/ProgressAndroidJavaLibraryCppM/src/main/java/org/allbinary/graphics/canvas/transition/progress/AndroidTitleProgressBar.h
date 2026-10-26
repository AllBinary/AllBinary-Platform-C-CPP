
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

            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/android/activity/NullProgressActivity.h>

      
#include <org/allbinary/android/activity/ProgressActivityInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressCanvas.h"
//#include "ShowTitleProgressBarRunnable.h"
//#include "DismissTitleProgressBarRunnable.h"
//#include "TitleProgressBarPortionSetProgressRunnable.h"
//#include "TitleProgressBarSetProgressRunnable.h"

class AndroidTitleProgressBar: public ProgressCanvas {

//inner= member=true isStatic=
class TitleProgressBarSetProgressRunnable
            : public Object
        : public Runnable {

    private: AndroidTitleProgressBar androidTitleProgressBar;

: TitleProgressBarSetProgressRunnable(AndroidTitleProgressBar androidTitleProgressBar);

    public: void run();

};

            
//inner= member=true isStatic=
class TitleProgressBarPortionSetProgressRunnable
            : public Object
        : public Runnable {

    private: AndroidTitleProgressBar androidTitleProgressBar;

: TitleProgressBarPortionSetProgressRunnable(AndroidTitleProgressBar androidTitleProgressBar);

    public: void run();

};

            
//inner= member=true isStatic=
class ShowTitleProgressBarRunnable
            : public Object
        : public Runnable {

    private: AndroidTitleProgressBar androidTitleProgressBar;

: ShowTitleProgressBarRunnable(AndroidTitleProgressBar androidTitleProgressBar);

    public: void run();

};

            
//inner= member=true isStatic=
class DismissTitleProgressBarRunnable
            : public Object
        : public Runnable {

    private: AndroidTitleProgressBar androidTitleProgressBar;

: DismissTitleProgressBarRunnable(AndroidTitleProgressBar androidTitleProgressBar);

    public: void run();

};

            
    private: showTitleProgressBarRunnable = ShowTitleProgressBarRunnable(this);

    private: dismissTitleProgressBarRunnable = DismissTitleProgressBarRunnable(this);

    private: progressDialogPortionSetProgressRunnable = TitleProgressBarPortionSetProgressRunnable(this);

    private: progressDialogSetProgressRunnable = TitleProgressBarSetProgressRunnable(this);

    private: ProgressActivityInterface progressActivity = NullProgressActivity::NULL_PROGRESS_ACTIVITY;

    private: int32_t portion = 0;

protected: AndroidTitleProgressBar(std::string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public: void init(ProgressActivityInterface activity);

    public: bool isInitialized();

    public: void start();

    public: void end();

    public: void addPortion(int32_t value, std::string text, int32_t index);

    public: void addNormalPortion(int32_t value, std::string text);

    protected: void setValue(int32_t value);

    public: void waitUntilDisplayed();

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_H
