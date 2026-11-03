
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/Integer.h"
        
class Graphics;
class Image;
class NullImage;
class Activity;
class AndroidUtil;
class GameFeatureImageCacheFactory;
class PreResourceImageUtil;
class ForcedLogUtil;
class ExceptionUtil;
class Animation;
class NullAnimationFactory;
class Features;
class MainFeatureFactory;
class BasicColor;
class DisplayInfoSingleton;
class DisplayChangeEvent;
class DisplayChangeEventHandler;
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>
class ImageCacheFactory;
class ImageScaleUtil;
class AllBinaryEventObject;
class AnimationBehavior;
class ImageAnimation;
class ResourceUtil;
class EventStrings;
class ARunnable;
class NullRunnable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
class ShowTitleProgressBarRunnable;
class DismissTitleProgressBarRunnable;
class TitleProgressBarSetProgressRunnable;
class TitleProgressBarPortionSetProgressRunnable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidBasicTitleProgressBar: public ProgressCanvas, public virtual DisplayChangeEventListener {

    public: static inline const std::string RESOURCE = "ProgressImage";

    private: static inline int32_t background= 0;

    public: static void setBackgroundResource(int32_t background);

    private: ARunnable* showTitleProgressBarRunnable;

    private: ARunnable* dismissTitleProgressBarRunnable;

    private: ARunnable* titleProgressDialogPortionSetProgressRunnable;

    private: ARunnable* titleProgressDialogSetProgressRunnable;

    private: Activity* midletActivity;

    private: int32_t portion = 0;

    private: std::vector<Image*> IMAGE;

    private: Image* image;

    private: Animation* animation;

public: AndroidBasicTitleProgressBar(std::string title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    private: void init();

    public: void initActivity(Activity* activity);

    private: void updateCurrent();

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent);

    private: void loadProgressImages();

    public: bool isInitialized();

    public: void start();

    public: void end();

    public: void addEarlyPortion(int32_t value, std::string text, int32_t index);

    public: void addPortion(int32_t value, std::string text, int32_t index);

    public: void addNormalPortion(int32_t value, std::string text);

    /*protected*/ public: void setValue(int32_t value);

    public: void waitUntilDisplayed();

                //@Throws(Exception.constructor)
            
    private: void setImages(int32_t index, int32_t lastWidth, int32_t lastHeight);

                //@Throws(Exception.constructor)
            
    public: void initOpenGL(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void update(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    private: Image* getImage(int32_t index);

    public: void paint2(Graphics* graphics);

    /*protected*/ public: void setBackground(bool background);

    /*protected*/ public: void setPortion(int32_t portion);

    /*protected*/ public: int32_t getPortion();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDBASICTITLEPROGRESSBAR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDBASICTITLEPROGRESSBAR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_ANDROIDBASICTITLEPROGRESSBAR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/image/GameFeatureImageCacheFactory.h>)
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/image/PreResourceImageUtil.h>)
#include <org/allbinary/image/PreResourceImageUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/exception/ExceptionUtil.h>)
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/MainFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>
#endif
#if __has_include(<org/allbinary/image/ImageCacheFactory.h>)
#include <org/allbinary/image/ImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageScaleUtil.h>)
#include <org/allbinary/media/image/ImageScaleUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/image/ImageAnimation.h>)
#include <org/allbinary/animation/image/ImageAnimation.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<org/allbinary/thread/NullRunnable.h>)
#include <org/allbinary/thread/NullRunnable.h>
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ShowTitleProgressBarRunnable.h")
#include "org/allbinary/graphics/canvas/transition/progress/ShowTitleProgressBarRunnable.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/DismissTitleProgressBarRunnable.h")
#include "org/allbinary/graphics/canvas/transition/progress/DismissTitleProgressBarRunnable.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/TitleProgressBarSetProgressRunnable.h")
#include "org/allbinary/graphics/canvas/transition/progress/TitleProgressBarSetProgressRunnable.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/TitleProgressBarPortionSetProgressRunnable.h")
#include "org/allbinary/graphics/canvas/transition/progress/TitleProgressBarPortionSetProgressRunnable.h"
#endif

        #endif
    
