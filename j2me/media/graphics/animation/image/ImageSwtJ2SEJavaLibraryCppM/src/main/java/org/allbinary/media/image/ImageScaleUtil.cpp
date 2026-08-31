
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCopyUtil.h"

class ImageScaleUtil
            : public Object
         {
        

    private: static const instance: ImageScaleUtil = new ImageScaleUtil();

    public static ImageScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageScaleUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageCopyUtil: ImageCopyUtil = ImageCopyUtil.getInstance()!;

    private: const gameFeatureFactory: GameFeatureFactory = GameFeatureFactory.getInstance()!;

    private: const features: Features = Features.getInstance()!;

    private: const NO_COPY: string = "SWT should not copy images after initial loading as the alpha is not honored";

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public Image createImage2(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createImage3(imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);;
    
}


                //@Throws(Exception.constructor)
            
    public Image createImage3(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable){

                        if(!this.features.isFeature(this.gameFeatureFactory!.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this.logUtil!.putF(this.NO_COPY, this, this.commonStrings!.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    width: int32_t = originalImage!.getWidth()!;;
    

    height: int32_t = originalImage!.getHeight()!;;
    

    scaleX: float = scaleNominatorX /scaleDenominatorX;;
    

    scaleY: float = scaleNominatorY /scaleDenominatorY;;
    

    scaledImage: Image = this.imageCopyUtil!.createImageWH(originalImage, static_cast<int32_t>((scaleX *width)), static_cast<int32_t>((scaleY *height)), mutable)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    
}


                //@Throws(Exception.constructor)
            
    public scale2(Image originalImage, std::vector<Image> originalImageArray, std::vector<Image> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY){
this.scale(originalImage, originalImageArray, ximageToShowArray, unused, scaleX, scaleY, maxScaleX, maxScaleY, true);
    
}


                //@Throws(Exception.constructor)
            
    public scale(Image originalImage, std::vector<Image> originalImageArray, std::vector<Image> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY, bool mutable){

    width: int32_t = originalImage!.getWidth()!;;
    

    height: int32_t = originalImage!.getHeight()!;;
    

    scaledImage: Image = this.imageCopyUtil!.createImageWH(originalImage, static_cast<int32_t>((scaleX *width)), static_cast<int32_t>((scaleY *height)), mutable)!;;
    
originalImageArray[0]= scaledImage;
    
}


};

            

