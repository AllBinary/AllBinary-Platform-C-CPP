
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomTextAnimation.h"
#include "AdjustCustomTextAnimation.h"

class CustomTextAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {
        

    public static CustomTextAnimationFactory createDXY(string text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const animationBehaviorFactory: AnimationBehaviorFactory;

    public basicColor: BasicColor = BasicColorFactory.getInstance()!.BLACK;

    private: text: string;

    private: initScaleHeight: int32_t;

    dx: int32_t = 0;

    dy: int32_t = 0;

    font: Font;

    public scaleProperties: ScaleProperties;

public constructor (string text, int32_t fontSize, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId);

    public setInitialScale(ScaleProperties scaleProperties);

    public int32_t getWidth();

    public int32_t getHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_H
