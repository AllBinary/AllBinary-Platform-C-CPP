
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_H
        #define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class Animation;
class AnimationBehavior;
class NullAnimationFactory;
class TextAnimation;
class BasicColor;
class StringUtil;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
class CaptionAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CaptionAnimationHelper: public CaptionAnimationHelperBase {

    private: TimeDelayHelper* timeHelper;

    private: TextAnimation* textAnimation;

    private: Animation* captionAnimation;

    private: Animation* animation;

public: CaptionAnimationHelper(Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);

    public: bool isShowing();

    public: void tick();

    public: void update(std::string message, BasicColor* basicColor);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/animation/text/TextAnimation.h>)
#include <org/allbinary/animation/text/TextAnimation.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/animation/caption/CaptionAnimationHelperBase.h")
#include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
#endif
#if __has_include("org/allbinary/animation/caption/CaptionAnimation.h")
#include "org/allbinary/animation/caption/CaptionAnimation.h"
#endif

        #endif
    
