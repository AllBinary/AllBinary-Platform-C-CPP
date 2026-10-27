
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Font;
class TextField;
class CustomTextBox;
class Animation;
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
class ABToGBUtil;
class AllBinaryGameCanvas;
class LogUtil;

class StringUtil;
class ScaleProperties;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CustomTextBox2;
class CustomTextBoxIndexedAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomTextBoxIndexedAnimationFactory
            : public virtual Object
        , public AnimationInterfaceFactoryInterface {

    /*protected*/ public: LogUtil* logUtil;

    public: ScaleProperties* scaleProperties;

    private: int32_t maxLength;

public: CustomTextBoxIndexedAnimationFactory(int32_t fontSize, int32_t maxLength);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/TextField.h>)
#include <javax/microedition/lcdui/TextField.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/CustomTextBox.h>)
#include <org/allbinary/graphics/form/item/CustomTextBox.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/canvas/ABToGBUtil.h>)
#include <org/allbinary/game/canvas/ABToGBUtil.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif

#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include("org/allbinary/animation/text/CustomTextBox2.h")
#include "org/allbinary/animation/text/CustomTextBox2.h"
#endif
#if __has_include("org/allbinary/animation/text/CustomTextBoxIndexedAnimation.h")
#include "org/allbinary/animation/text/CustomTextBoxIndexedAnimation.h"
#endif

        #endif
    
