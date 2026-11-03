
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Font;
class Animation;
class AnimationBehaviorFactory;
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
class BasicColor;
class BasicColorFactory;
class LogUtil;
class ScaleProperties;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CustomTextAnimation;
class AdjustCustomTextAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomTextAnimationFactory
            : public virtual Object
        , public virtual AnimationInterfaceFactoryInterface {

    public: static CustomTextAnimationFactory* createDXY(std::string text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

    /*protected*/ public: LogUtil* logUtil;

    private: AnimationBehaviorFactory* animationBehaviorFactory;

    public: BasicColor* basicColor;

    private: std::string text;

    private: int32_t initScaleHeight;

    /*protected*/ public: int32_t dx = 0;

    /*protected*/ public: int32_t dy = 0;

    /*protected*/ public: Font* font;

    public: ScaleProperties* scaleProperties;

public: CustomTextAnimationFactory(std::string text, int32_t fontSize, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    public: void setInitialScale(ScaleProperties* scaleProperties);

    public: int32_t getWidth();

    public: int32_t getHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include("org/allbinary/animation/text/CustomTextAnimation.h")
#include "org/allbinary/animation/text/CustomTextAnimation.h"
#endif
#if __has_include("org/allbinary/animation/text/AdjustCustomTextAnimation.h")
#include "org/allbinary/animation/text/AdjustCustomTextAnimation.h"
#endif

        #endif
    
