
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/graphics/form/item/CustomTextBox.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/canvas/ABToGBUtil.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomTextBox2.h"
#include "CustomTextBoxIndexedAnimation.h"

class CustomTextBoxIndexedAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: ScaleProperties scaleProperties;

    private: int32_t maxLength;

public: CustomTextBoxIndexedAnimationFactory(int32_t fontSize, int32_t maxLength);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

    public: void setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATIONFACTORY_H
