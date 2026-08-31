
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/image/AnimationFactoryImageScaleUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationFactoryInitializationVisitor.h"

class BaseImageAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    public static BaseImageAnimationFactory createFactoryBase(Image image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, AnimationBehaviorFactory animationBehaviorFactory);

    const animationFactoryImageScaleUtil: AnimationFactoryImageScaleUtil = AnimationFactoryImageScaleUtil.getInstance()!;

    private: const image: Image;

    public const animationBehaviorFactory: AnimationBehaviorFactory;

    private: const sequenceArray: std::vector<int32_t>;

    const animationFactoryInitializationVisitor: AnimationFactoryInitializationVisitor;

    scaleProperties: ScaleProperties = ScaleProperties.instance;

public constructor (Image image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId);

    public Image getImage();

    public std::vector<int32_t> getSequenceArray();

    public setInitialScale(ScaleProperties scaleProperties);

    public AnimationFactoryInitializationVisitor getAnimationFactoryInitializationVisitorP();

    public ScaleProperties getScalePropertiesP();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H
