
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCreationUtil.h"

class ImageCopyUtil
            : public Object
         {
        

    private: static const instance: ImageCopyUtil = new ImageCopyUtil();

    public static ImageCopyUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageCreationUtil: ImageCreationUtil = ImageCreationUtil.getInstance()!;

private constructor ();

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: const gameFeatureFactory: GameFeatureFactory = GameFeatureFactory.getInstance()!;

    private: const features: Features = Features.getInstance()!;

    private: const NO_COPY: string = "J2ME does not need to copy images after initial loading";

                //@Throws(Exception.constructor)
            
    public Image createImageForRotation(Image originalImage);

                //@Throws(Exception.constructor)
            
    public Image createImage(Image originalImage);

                //@Throws(Exception.constructor)
            
    public Image createImageScale(Image originalImage, float canvasScale, bool resize);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H
