
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
        



        #ifndef ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H
        #define ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h>

      
#include <org/allbinary/animation/image/BaseImageAnimationFactory.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/media/image/ImageJ2MEScaleUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AnimationFactoryImageScaleUtil
            : public Object
         {
        

    private: static const instance: AnimationFactoryImageScaleUtil = new AnimationFactoryImageScaleUtil();

    public static AnimationFactoryImageScaleUtil getInstance();

    private: const imageScaleUtil: ImageJ2MEScaleUtil = ImageJ2MEScaleUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public Image createImage(Image image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight);

                //@Throws(Exception.constructor)
            
    public processAdjust(BaseImageAnimationFactory baseImageAnimationFactory);

};

            


        #endif //ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H
