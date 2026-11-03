
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

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESDeviceImageTranslate.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESImageProperties.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
#include <org/microemu/app/ui/swt/SwtDeviceComponent.h>

      
#include <org/microemu/device/swt/PostLoadSwtImmutableImageProcessor.h>

      
#include <org/microemu/device/swt/PostLoadSwtMutableImageProcessor.h>

      
#include <org/microemu/device/swt/SwtImmutableImage.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ImageCopyUtil::instance_owner() -> ImageCopyUtil* { static std::unique_ptr<ImageCopyUtil> value(new ImageCopyUtil()); return value.get(); }
ImageCopyUtil* ImageCopyUtil::instance = ImageCopyUtil::instance_owner();

    auto ImageCopyUtil::getInstance() -> ImageCopyUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageCopyUtil::instance;
    
}


ImageCopyUtil::ImageCopyUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), gameFeatureFactory(GameFeatureFactory::getInstance()), features(Features::getInstance()), openGLFeatureFactory(OpenGLFeatureFactory::getInstance()), openGLUtil(OpenGLUtil::getInstance()), openGLESImageExclusionUtil(OpenGLESImageExclusionUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ImageCopyUtil::createImageForRotation(Image* originalImage) -> Image*{

                        if(this->features->isFeature(this->openGLFeatureFactory->OPENGL))
                        
                                    {
                                    
    Image* image = originalImage;;
    
image= this->openGLUtil->addImage(image);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->createImage(originalImage);;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto ImageCopyUtil::createImage(Image* originalImage) -> Image*{

                        if(!this->features->isFeature(this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil->putF(this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return originalImage;
    

                                    }
                                

    Image* originalImage2 = originalImage;;
    

                        if(this->features->isFeature(this->openGLFeatureFactory->OPENGL))
                        
                                    {
                                    
                        if(originalImage->getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage* openGLESImage = (dynamic_cast<OpenGLESImage*>(originalImage));;
    
originalImage2= openGLESImage->openGLBitmap->getImage();
    

                                    }
                                

                                    }
                                

    Image* image = 
                null
            ;;
    

                        if(originalImage2->isMutable())
                        
                                    {
                                    
    SwtMutableImage* originalMutableImage = dynamic_cast<SwtMutableImage*>(originalImage2);;
    
image= new SwtMutableImage(SwtDeviceComponent::createImage(originalMutableImage->image->getImageData()));
    

                                    }
                                
                        else {
                            
    SwtImmutableImage* originalImmutableImage = dynamic_cast<SwtImmutableImage*>(originalImage2);;
    
image= new SwtMutableImage(SwtDeviceComponent::createImage(originalImmutableImage->image->getImageData()));
    

                        }
                            
image= this->openGLUtil->addImage(image);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCopyUtil::createImageWH(Image* originalImage, int32_t width, int32_t height, bool mutable_) -> Image*{

    Image* originalImage2 = originalImage;;
    

                        if(!this->features->isFeature(this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil->putF(this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return originalImage;
    

                                    }
                                

                        if(this->features->isFeature(this->openGLFeatureFactory->OPENGL))
                        
                                    {
                                    
                        if(this->openGLESImageExclusionUtil->isCustomScaling(originalImage))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->createImage2(originalImage, width, height, mutable_);;
    

                                    }
                                

                        if(originalImage->getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage* openGLESImage = (dynamic_cast<OpenGLESImage*>(originalImage));;
    
originalImage2= openGLESImage->openGLBitmap->getImage();
    

                                    }
                                

                                    }
                                

    Image* image = 
                null
            ;;
    

                        if(originalImage2->isMutable() && mutable_)
                        
                                    {
                                    
    SwtMutableImage* originalMutableImage = dynamic_cast<SwtMutableImage*>(originalImage2);;
    

                        if(originalMutableImage->getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
    ImageData* imageData2 = originalMutableImage->image->getImageData();;
    

    ImageData* imageData = imageData2->scaledTo(width, height);;
    
image= new SwtMutableImage(SwtDeviceComponent::createImage(imageData));
    

                                    }
                                
                        else {
                            image= new SwtMutableImage(originalMutableImage->getName(), new PostLoadSwtMutableImageProcessor(originalMutableImage));
    

                        }
                            

                                    }
                                
                        else {
                            
    SwtImmutableImage* originalImmutableImage = dynamic_cast<SwtImmutableImage*>(originalImage2);;
    

                        if(originalImmutableImage->getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
    ImageData* imageData2 = originalImmutableImage->image->getImageData();;
    

                        if(width > 0 && height > 0)
                        
                                    {
                                    
    ImageData* imageData = imageData2->scaledTo(width, height);;
    
image= new SwtImmutableImage(originalImage->getName(), SwtDeviceComponent::createImage(imageData));
    

                                    }
                                
                        else {
                            this->logUtil->putF(UNABLE, this, this->commonStrings->CONSTRUCTOR);
    
image= new SwtImmutableImage(originalImmutableImage->getName(), new PostLoadSwtImmutableImageProcessor(originalImmutableImage));
    

                        }
                            

                                    }
                                
                        else {
                            image= new SwtImmutableImage(originalImmutableImage->getName(), new PostLoadSwtImmutableImageProcessor(originalImmutableImage));
    

                        }
                            

                        }
                            
image= this->openGLUtil->addImage(image);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCopyUtil::createImage2(Image* originalImage, int32_t width, int32_t height, bool mutable_) -> Image*{

    Image* originalImage2 = originalImage;;
    

                        if(!this->features->isFeature(this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil->putF(this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return originalImage;
    

                                    }
                                

    Image* image = 
                null
            ;;
    

                        if(this->features->isFeature(this->openGLFeatureFactory->OPENGL))
                        
                                    {
                                    
    DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    

                        if(originalImage->getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage* openGLESImage = (dynamic_cast<OpenGLESImage*>(originalImage));;
    

    OpenGLESImageProperties* openGLESImageProperties = openGLESImage->openGLESImageProperties;;
    

    int32_t openGLWidth = openGLESImage->openGLBitmap->getWidth();;
    

    int32_t openGLHeight = openGLESImage->openGLBitmap->getHeight();;
    
openGLESImageProperties->scaleX= openGLESImageProperties->scaleX2= ((width) /openGLWidth);
    
openGLESImageProperties->scaleY= openGLESImageProperties->scaleY2= ((height) /openGLHeight);
    
openGLESImageProperties->scaleX= openGLESImageProperties->scaleX *0.75;
    
openGLESImageProperties->scaleY= openGLESImageProperties->scaleY *0.75;
    

                        if(originalImage->getHeight() % 2 != 0)
                        
                                    {
                                    openGLESImageProperties->scaleX2 += 1.0 /openGLWidth;
    
openGLESImageProperties->scaleY2 += 1.0 /openGLHeight;
    

                                    }
                                
image= openGLESImage;
    

                                    }
                                
                        else {
                            image= originalImage;
    

    OpenGLESImage* openGLESImage = dynamic_cast<OpenGLESImage*>(this->openGLUtil->addImage(image));;
    

    OpenGLESImageProperties* openGLESImageProperties = openGLESImage->openGLESImageProperties;;
    
openGLESImageProperties->scaleX= openGLESImageProperties->scaleX2= ((width) /openGLESImage->getWidth());
    
openGLESImageProperties->scaleY= openGLESImageProperties->scaleY2= ((height) /openGLESImage->getHeight());
    

                        if(JavaString::startsWith(image->getName(), this->INFORMATION))
                        
                                    {
                                    openGLESImage->openGLESImageTranslate= new OpenGLESDeviceImageTranslate();
    

    OpenGLESDeviceImageTranslate* openGLESDeviceImageTranslate = dynamic_cast<OpenGLESDeviceImageTranslate*>(openGLESImage->openGLESImageTranslate);;
    
openGLESDeviceImageTranslate->translateX= displayInfoSingleton->getLastWidth() /1.4 /openGLESImageProperties->scaleX;
    
openGLESDeviceImageTranslate->translateY= displayInfoSingleton->getLastHeight() /4 /openGLESImageProperties->scaleY;
    
openGLESImageProperties->scaleX= openGLESImageProperties->scaleX *0.25;
    
openGLESImageProperties->scaleY= openGLESImageProperties->scaleY *0.25;
    

                                    }
                                
                        else {
                            openGLESImageProperties->scaleX= openGLESImageProperties->scaleX *0.75;
    
openGLESImageProperties->scaleY= openGLESImageProperties->scaleY *0.75;
    

                        if(JavaString::startsWith(image->getName(), this->LEADERBOARD))
                        
                                    {
                                    openGLESImage->openGLESImageTranslate= new OpenGLESDeviceImageTranslate();
    

    OpenGLESDeviceImageTranslate* openGLESDeviceImageTranslate = dynamic_cast<OpenGLESDeviceImageTranslate*>(openGLESImage->openGLESImageTranslate);;
    
openGLESDeviceImageTranslate->translateX=  -displayInfoSingleton->getLastWidth() /40 /openGLESImageProperties->scaleX;
    

                                    }
                                

                        if(JavaString::startsWith(image->getName(), this->LEADERBOARD))
                        
                                    {
                                    
                                    }
                                
                        else {
                            openGLESImageProperties->scaleX= 1.0;
    
openGLESImageProperties->scaleY= 1.0;
    

                        }
                            

                        }
                            
image= openGLESImage;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(originalImage2->isMutable() && mutable_)
                        
                                    {
                                    
    SwtMutableImage* originalMutableImage = dynamic_cast<SwtMutableImage*>(originalImage2);;
    

                        if(originalMutableImage->getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
    ImageData* imageData2 = originalMutableImage->image->getImageData();;
    

    ImageData* imageData = imageData2->scaledTo(width, height);;
    
image= new SwtMutableImage(SwtDeviceComponent::createImage(imageData));
    

                                    }
                                
                        else {
                            image= new SwtMutableImage(originalMutableImage->getName(), new PostLoadSwtMutableImageProcessor(originalMutableImage));
    

                        }
                            

                                    }
                                
                        else {
                            
    SwtImmutableImage* originalImmutableImage = dynamic_cast<SwtImmutableImage*>(originalImage2);;
    

                        if(originalImmutableImage->getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
    ImageData* imageData2 = originalImmutableImage->image->getImageData();;
    

    ImageData* imageData = imageData2->scaledTo(width, height);;
    
image= new SwtImmutableImage(originalImage->getName(), SwtDeviceComponent::createImage(imageData));
    

                                    }
                                
                        else {
                            image= new SwtImmutableImage(originalImmutableImage->getName(), new PostLoadSwtImmutableImageProcessor(originalImmutableImage));
    

                        }
                            

                        }
                            
image= this->openGLUtil->addImage(image);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCopyUtil::createImageScale(Image* originalImage, float canvasScale, bool resize) -> Image*{

                        if(!this->features->isFeature(this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil->putF(this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
    



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
                                

    Image* image = this->createImageWH(originalImage, newWidth, newHeight, true);;
    

                        if(image->isMutable())
                        
                                    {
                                    
    ImageData* originalImageData = (getImage)).getImageData();;
    

    SwtMutableImage* mutableImage2 = dynamic_cast<SwtMutableImage*>(image);;
    

    int32_t halfWidthDelta = (newWidth -originalImage->getWidth()) /2;;
    

    int32_t halfHeightDelta = (newHeight -originalImage->getHeight()) /2;;
    

    std::vector<int32_t> originalPixelArray = std::vector<int32_t>(originalImage->getWidth() *originalImage->getHeight());;
    

    std::vector<int32_t> newPixelArray = std::vector<int32_t>(image->getWidth() *image->getHeight());;
    

    int32_t width = originalImage->getWidth();;
    

    int32_t height = originalImage->getHeight();;
    




                        for (
    int32_t i = 0;i < height; i++)
        {
originalImageData->getPixels(0, i, width, originalPixelArray, (i *width));
    
}





                        for (
    int32_t index = halfWidthDelta;index < width; index++)
        {




                        for (
    int32_t index2 = halfHeightDelta;index2 < height; index2++)
        {
newPixelArray[index +(index2 *width)]= originalPixelArray[(index -halfWidthDelta) +((index2 -halfHeightDelta) *width)];
    
}

}

getImage = dynamic_cast<org::eclipse::swt::graphics::Image*>(mutableImage2->getImage()getImage)
getImage.
                    getImageData()->setPixels(0, 0, image->getWidth(), newPixelArray, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    

                                    }
                                
                        else {
                            
    SwtImmutableImage* originalImmutableImage = dynamic_cast<SwtImmutableImage*>(image);;
    

    ImageData* originalImageData = (getImage)).getImageData();;
    

    int32_t halfWidthDelta = (newWidth -originalImage->getWidth()) /2;;
    

    int32_t halfHeightDelta = (newHeight -originalImage->getHeight()) /2;;
    

    std::vector<int32_t> originalPixelArray = std::vector<int32_t>(originalImage->getWidth() *originalImage->getHeight());;
    

    std::vector<int32_t> newPixelArray = std::vector<int32_t>(image->getWidth() *image->getHeight());;
    

    int32_t width = originalImage->getWidth();;
    

    int32_t height = originalImage->getHeight();;
    




                        for (
    int32_t i = 0;i < height; i++)
        {
originalImageData->getPixels(0, i, width, originalPixelArray, (i *width));
    
}





                        for (
    int32_t index = halfWidthDelta;index < width; index++)
        {




                        for (
    int32_t index2 = halfHeightDelta;index2 < height; index2++)
        {
newPixelArray[index +(index2 *width)]= originalPixelArray[(index -halfWidthDelta) +((index2 -halfHeightDelta) *width)];
    
}

}

getImage = dynamic_cast<org::eclipse::swt::graphics::Image*>(originalImmutableImage->getImage()getImage)
getImage.
                    getImageData()->setPixels(0, 0, image->getWidth(), newPixelArray, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_CPP
