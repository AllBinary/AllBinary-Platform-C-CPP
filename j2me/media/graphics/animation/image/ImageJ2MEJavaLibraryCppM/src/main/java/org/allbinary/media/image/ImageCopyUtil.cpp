
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageCopyUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCreationUtil.h"

auto ImageCopyUtil::instance_owner() -> ImageCopyUtil* { static std::unique_ptr<ImageCopyUtil> value(new ImageCopyUtil()); return value.get(); }
ImageCopyUtil* ImageCopyUtil::instance = ImageCopyUtil::instance_owner();

    auto ImageCopyUtil::getInstance() -> ImageCopyUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCopyUtil::instance;
    
}


ImageCopyUtil::ImageCopyUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageCreationUtil(ImageCreationUtil::getInstance()), anchor(Anchor::TOP_LEFT), gameFeatureFactory(GameFeatureFactory::getInstance()), features(Features::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ImageCopyUtil::createImageForRotation(Image* originalImage) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage(originalImage);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCopyUtil::createImage(Image* originalImage) -> Image*{

                        if(!this->features->isFeature(this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil->put(this->NO_COPY, this, this->commonStrings->CONSTRUCTOR, new Exception());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    Image* image = this->imageCreationUtil->createImageWH(originalImage->getWidth(), originalImage->getHeight());;
    

                        if(image->isMutable())
                        
                                    {
                                    image->getGraphics()->drawImage(originalImage, 0, 0, this->anchor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Mutable");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto ImageCopyUtil::createImageScale(Image* originalImage, float canvasScale, bool resize) -> Image*{

                        if(!this->features->isFeature(this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil->put(this->NO_COPY, this, this->commonStrings->CONSTRUCTOR, new Exception());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    int32_t newWidth = static_cast<int32_t>((originalImage->getWidth() *canvasScale));;
    

    int32_t newHeight = static_cast<int32_t>((originalImage->getHeight() *canvasScale));;
    

                        if(resize)
                        
                                    {
                                    
                        if(newWidth < newHeight)
                        
                                    {
                                    newWidth= newHeight;
    

                                    }
                                

                        if(newHeight < newWidth)
                        
                                    {
                                    newHeight= newWidth;
    

                                    }
                                

                                    }
                                

    Image* image = this->imageCreationUtil->createImageWH(newWidth, newHeight);;
    

                        if(image->isMutable())
                        
                                    {
                                    
    int32_t halfWidthDelta = (newWidth -originalImage->getWidth()) /2;;
    

    int32_t halfHeightDelta = (newHeight -originalImage->getHeight()) /2;;
    

    Graphics* graphics = image->getGraphics();;
    
graphics->drawImage(originalImage, halfWidthDelta, halfHeightDelta, this->anchor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Mutable");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_CPP
