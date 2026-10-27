
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTROTATIONUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTROTATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageSwtRotationUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/eclipse/swt/SWT.h>

      
#include <org/eclipse/swt/graphics/GC.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/Image.h"

auto ImageSwtRotationUtil::instance_owner() -> ImageSwtRotationUtil* { static std::unique_ptr<ImageSwtRotationUtil> value(new ImageSwtRotationUtil()); return value.get(); }
ImageSwtRotationUtil* ImageSwtRotationUtil::instance = ImageSwtRotationUtil::instance_owner();

    auto ImageSwtRotationUtil::getInstance() -> ImageSwtRotationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageSwtRotationUtil::instance;
    
}


ImageSwtRotationUtil::ImageSwtRotationUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageUtil(ImageUtil::getInstance()), gameFeatureFactory(GameFeatureFactory::getInstance()), features(Features::getInstance()){
}


    auto ImageSwtRotationUtil::getRotatedImage(org::eclipse::swt::graphics::Image* bufferedImage, int32_t totalAngle) -> org::eclipse::swt::graphics::Image*{

                        if(!this->features->isFeature(this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil->putF(this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


    auto ImageSwtRotationUtil::getRotatedImage2(org::eclipse::swt::graphics::Image* bufferedImage, org::eclipse::swt::graphics::Image* newBufferedImage, GC* gc, float angle) -> org::eclipse::swt::graphics::Image*{

                        if(!this->features->isFeature(this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil->putF(this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


    auto ImageSwtRotationUtil::rotateImage(org::eclipse::swt::graphics::Image* originalSwtImage, org::eclipse::swt::graphics::Image* newSwtImage, GC* gc, int32_t totalAngle) -> org::eclipse::swt::graphics::Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRotatedImage2(originalSwtImage, newSwtImage, gc, totalAngle);;
    
}


    auto ImageSwtRotationUtil::getRotatedImageSWT(org::eclipse::swt::graphics::Image* bufferedImage, org::eclipse::swt::graphics::Image* newSwtImage, GC* gc, int32_t totalAngle) -> org::eclipse::swt::graphics::Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRotatedImage2(bufferedImage, newSwtImage, gc, totalAngle);;
    
}


    auto ImageSwtRotationUtil::getRotatedImages(org::eclipse::swt::graphics::Image* bufferedImage, int32_t numberOfFrames, int32_t totalAngle) -> std::vector<org::eclipse::swt::graphics::Image*>{

    std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray = std::vector<org::eclipse::swt::graphics::Image*>(numberOfFrames);;
    

    int32_t angle= 0;;
    

    int32_t size = bufferedImageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
angle= (totalAngle /size) *index;
    
bufferedImageArray[index]= this->getRotatedImage(bufferedImage, angle);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}


    auto ImageSwtRotationUtil::createSpriteImage(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray) -> org::eclipse::swt::graphics::Image*{

    int32_t columns = 9;;
    

    int32_t rows = 0;;
    

    int32_t size = bufferedImageArray.size();;
    

                        if(size < columns)
                        
                                    {
                                    columns= size;
    

                                    }
                                
rows= (size /columns);
    

                        if(size % columns != 0)
                        
                                    {
                                    rows++;
    

                                    }
                                

    org::eclipse::swt::graphics::Image* firstBufferedImage = bufferedImageArray[0];;
    

    ImageData* imageData = firstBufferedImage->getImageData();;
    

    org::eclipse::swt::graphics::Image* bufferedImage = this->imageUtil->create(imageData->width *columns, imageData->height *rows);;
    

    GC* gc = new GC(bufferedImage);;
    
gc->setAntialias(SWT::ON);
    
gc->setInterpolation(SWT::HIGH);
    

    int32_t columnIndex = 0;;
    

    int32_t rowIndex = 0;;
    

    org::eclipse::swt::graphics::Image* nextBufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(index /9 != 0 && index % 9 == 0)
                        
                                    {
                                    rowIndex++;
    
columnIndex= 0;
    

                                    }
                                
nextBufferedImage= bufferedImageArray[index];
    
imageData= nextBufferedImage->getImageData();
    
gc->drawImage(bufferedImage, 0, 0, bufferedImage->getBounds()->width, bufferedImage->getBounds()->height, imageData->width *columnIndex, imageData->height *rowIndex, imageData->width, imageData->height);
    
columnIndex++;
    
}

gc->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTROTATIONUTIL_CPP
