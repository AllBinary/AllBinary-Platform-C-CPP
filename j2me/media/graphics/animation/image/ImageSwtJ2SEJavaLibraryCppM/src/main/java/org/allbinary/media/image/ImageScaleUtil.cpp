
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
        



            #include <vector>
        
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

    private: static ImageScaleUtil instance() { return ImageScaleUtil(); }

    public: static ImageScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageScaleUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ImageCopyUtil imageCopyUtil = ImageCopyUtil::getInstance();

    private: const GameFeatureFactory gameFeatureFactory = GameFeatureFactory::getInstance();

    private: const Features features = Features::getInstance();

    private: const std::string NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";

private: ImageScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    public: Image createImage2(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage3(imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);;
    
}


                //@Throws(Exception.constructor)
            
    public: Image createImage3(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable){

                        if(!this->features.isFeature(this->gameFeatureFactory.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil.putF(this->NO_COPY, this, this->commonStrings.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    int32_t width = originalImage.getWidth();;
    

    int32_t height = originalImage.getHeight();;
    

    float scaleX = scaleNominatorX /scaleDenominatorX;;
    

    float scaleY = scaleNominatorY /scaleDenominatorY;;
    

    Image scaledImage = this->imageCopyUtil.createImageWH(originalImage, static_cast<int32_t>((scaleX *width)), static_cast<int32_t>((scaleY *height)), mutable);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    
}


                //@Throws(Exception.constructor)
            
    public: void scale2(Image originalImage, std::vector<Image> originalImageArray, std::vector<Image> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY){
this->scale(originalImage, originalImageArray, ximageToShowArray, unused, scaleX, scaleY, maxScaleX, maxScaleY, true);
    
}


                //@Throws(Exception.constructor)
            
    public: void scale(Image originalImage, std::vector<Image> originalImageArray, std::vector<Image> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY, bool mutable){

    int32_t width = originalImage.getWidth();;
    

    int32_t height = originalImage.getHeight();;
    

    Image scaledImage = this->imageCopyUtil.createImageWH(originalImage, static_cast<int32_t>((scaleX *width)), static_cast<int32_t>((scaleY *height)), mutable);;
    
originalImageArray[0]= scaledImage;
    
}


};

            

