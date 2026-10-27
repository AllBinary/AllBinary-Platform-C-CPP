
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageScaleUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCopyUtil.h"

auto ImageScaleUtil::instance_owner() -> ImageScaleUtil* { static std::unique_ptr<ImageScaleUtil> value(new ImageScaleUtil()); return value.get(); }
ImageScaleUtil* ImageScaleUtil::instance = ImageScaleUtil::instance_owner();

    auto ImageScaleUtil::getInstance() -> ImageScaleUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageScaleUtil::instance;
    
}


ImageScaleUtil::ImageScaleUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageCopyUtil(ImageCopyUtil::getInstance()), gameFeatureFactory(GameFeatureFactory::getInstance()), features(Features::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ImageScaleUtil::createImage2(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage3(imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageScaleUtil::createImage3(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable_) -> Image*{

                        if(!this->features->isFeature(this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil->putF(this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    int32_t width = originalImage->getWidth();;
    

    int32_t height = originalImage->getHeight();;
    

    float scaleX = scaleNominatorX /scaleDenominatorX;;
    

    float scaleY = scaleNominatorY /scaleDenominatorY;;
    

    Image* scaledImage = this->imageCopyUtil->createImageWH(originalImage, static_cast<int32_t>((scaleX *width)), static_cast<int32_t>((scaleY *height)), mutable_);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageScaleUtil::scale2(Image* originalImage, std::vector<Image*> originalImageArray, std::vector<Image*> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY) -> void{
this->scale(originalImage, originalImageArray, ximageToShowArray, unused, scaleX, scaleY, maxScaleX, maxScaleY, true);
    
}


                //@Throws(Exception.constructor)
            
    auto ImageScaleUtil::scale(Image* originalImage, std::vector<Image*> originalImageArray, std::vector<Image*> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY, bool mutable_) -> void{

    int32_t width = originalImage->getWidth();;
    

    int32_t height = originalImage->getHeight();;
    

    Image* scaledImage = this->imageCopyUtil->createImageWH(originalImage, static_cast<int32_t>((scaleX *width)), static_cast<int32_t>((scaleY *height)), mutable_);;
    
originalImageArray[0]= scaledImage;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_CPP
