
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDBASICTITLEPROGRESSBAR_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDBASICTITLEPROGRESSBAR_H

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/IllegalArgumentException.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <android/app/Activity.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/image/PreResourceImageUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/media/image/ImageScaleUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/image/ImageAnimation.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/thread/ARunnable.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressCanvas.h"
#include "ShowTitleProgressBarRunnable.h"
#include "DismissTitleProgressBarRunnable.h"
#include "TitleProgressBarSetProgressRunnable.h"
#include "TitleProgressBarPortionSetProgressRunnable.h"

class AndroidBasicTitleProgressBar: public ProgressCanvas: public DisplayChangeEventListener {
        

    public static const RESOURCE: string = "ProgressImage";

    private: static background: int32_t= 0;

    public static setBackgroundResource(int32_t background);

    private: showTitleProgressBarRunnable: ARunnable = NullRunnable.getInstance()!;

    private: dismissTitleProgressBarRunnable: ARunnable = NullRunnable.getInstance()!;

    private: titleProgressDialogPortionSetProgressRunnable: ARunnable = NullRunnable.getInstance()!;

    private: titleProgressDialogSetProgressRunnable: ARunnable = NullRunnable.getInstance()!;

    private: midletActivity: Activity = AndroidUtil.NULL_ACTIVITY;

    private: portion: int32_t = 0;

    private: const IMAGE: std::vector<Image> = new Array(4);

    private: image: Image = NullImage.NULL_IMAGE;

    private: animation: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

 constructor (string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    init();

    public initActivity(Activity activity);

    updateCurrent();

    public onEvent(AllBinaryEventObject eventObject);

    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

    loadProgressImages();

    public bool isInitialized();

    public start();

    public end();

    public addEarlyPortion(int32_t value, string text, int32_t index);

    public addPortion(int32_t value, string text, int32_t index);

    public addNormalPortion(int32_t value, string text);

    setValue(int32_t value);

    public waitUntilDisplayed();

                //@Throws(Exception.constructor)
            
    setImages(int32_t index, int32_t lastWidth, int32_t lastHeight);

                //@Throws(Exception.constructor)
            
    public initOpenGL(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public update(Graphics graphics);

                //@Throws(Exception.constructor)
            
    Image getImage(int32_t index);

    public paint2(Graphics graphics);

    setBackground(bool background);

    setPortion(int32_t portion);

    int32_t getPortion();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDBASICTITLEPROGRESSBAR_H
