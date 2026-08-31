
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

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Runnable.h"
        
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
        

    private: const androidTitleProgressBar: AndroidTitleProgressBar;

 constructor (AndroidTitleProgressBar androidTitleProgressBar);

    public run();

};

            
//inner= member=true isStatic=
class TitleProgressBarPortionSetProgressRunnable
            : public Object
        : public Runnable {
        

    private: const androidTitleProgressBar: AndroidTitleProgressBar;

 constructor (AndroidTitleProgressBar androidTitleProgressBar);

    public run();

};

            
//inner= member=true isStatic=
class ShowTitleProgressBarRunnable
            : public Object
        : public Runnable {
        

    private: const androidTitleProgressBar: AndroidTitleProgressBar;

 constructor (AndroidTitleProgressBar androidTitleProgressBar);

    public run();

};

            
//inner= member=true isStatic=
class DismissTitleProgressBarRunnable
            : public Object
        : public Runnable {
        

    private: const androidTitleProgressBar: AndroidTitleProgressBar;

 constructor (AndroidTitleProgressBar androidTitleProgressBar);

    public run();

};

            
    private: showTitleProgressBarRunnable = new this.ShowTitleProgressBarRunnable(this);

    private: dismissTitleProgressBarRunnable = new this.DismissTitleProgressBarRunnable(this);

    private: progressDialogPortionSetProgressRunnable = new this.TitleProgressBarPortionSetProgressRunnable(this);

    private: progressDialogSetProgressRunnable = new this.TitleProgressBarSetProgressRunnable(this);

    private: progressActivity: ProgressActivityInterface = NullProgressActivity.NULL_PROGRESS_ACTIVITY;

    private: portion: int32_t = 0;

protected constructor (string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public init(ProgressActivityInterface activity);

    public bool isInitialized();

    public start();

    public end();

    public addPortion(int32_t value, string text, int32_t index);

    public addNormalPortion(int32_t value, string text);

    setValue(int32_t value);

    public waitUntilDisplayed();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDTITLEPROGRESSBAR_H
