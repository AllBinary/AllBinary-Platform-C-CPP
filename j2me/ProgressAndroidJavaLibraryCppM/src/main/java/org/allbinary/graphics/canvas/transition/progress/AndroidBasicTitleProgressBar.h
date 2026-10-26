
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

            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/Integer.h"
        
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

class AndroidBasicTitleProgressBar: public ProgressCanvas, public DisplayChangeEventListener {

    public: static const std::string RESOURCE = "ProgressImage";

    private: static int32_t background= 0;

    public: static void setBackgroundResource(int32_t background);

    private: ARunnable showTitleProgressBarRunnable = NullRunnable::getInstance();

    private: ARunnable dismissTitleProgressBarRunnable = NullRunnable::getInstance();

    private: ARunnable titleProgressDialogPortionSetProgressRunnable = NullRunnable::getInstance();

    private: ARunnable titleProgressDialogSetProgressRunnable = NullRunnable::getInstance();

    private: Activity midletActivity = AndroidUtil::NULL_ACTIVITY;

    private: int32_t portion = 0;

    private: const std::vector<Image> IMAGE = std::vector<Image>(4);

    private: Image image = NullImage::NULL_IMAGE;

    private: Animation animation = NullAnimationFactory::getFactoryInstance().getInstance(0);

: AndroidBasicTitleProgressBar(std::string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    private: void init();

    public: void initActivity(Activity activity);

    private: void updateCurrent();

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

    private: void loadProgressImages();

    public: bool isInitialized();

    public: void start();

    public: void end();

    public: void addEarlyPortion(int32_t value, std::string text, int32_t index);

    public: void addPortion(int32_t value, std::string text, int32_t index);

    public: void addNormalPortion(int32_t value, std::string text);

    protected: void setValue(int32_t value);

    public: void waitUntilDisplayed();

                //@Throws(Exception.constructor)
            
    private: void setImages(int32_t index, int32_t lastWidth, int32_t lastHeight);

                //@Throws(Exception.constructor)
            
    public: void initOpenGL(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public: void update(Graphics graphics);

                //@Throws(Exception.constructor)
            
    private: Image getImage(int32_t index);

    public: void paint2(Graphics graphics);

    protected: void setBackground(bool background);

    protected: void setPortion(int32_t portion);

    protected: int32_t getPortion();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDBASICTITLEPROGRESSBAR_H
