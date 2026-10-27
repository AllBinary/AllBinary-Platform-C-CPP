
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/Graphics2D.h>

      
#include <java/awt/GraphicsConfiguration.h>

      
#include <java/awt/GraphicsDevice.h>

      
#include <java/awt/GraphicsEnvironment.h>

      
#include <java/awt/Transparency.h>

      
#include <java/awt/geom/AffineTransform.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/microemu/device/j2se/J2SEImmutableImage.h>

      
#include <org/microemu/device/j2se/J2SEMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ImageUtil::instance_owner() -> ImageUtil* { static std::unique_ptr<ImageUtil> value(new ImageUtil()); return value.get(); }
ImageUtil* ImageUtil::instance = ImageUtil::instance_owner();

    auto ImageUtil::getInstance() -> ImageUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageUtil::instance;
    
}


ImageUtil::ImageUtil() : commonStrings(CommonStrings::getInstance()), commonSeps(CommonSeps::getInstance()){
}


    auto ImageUtil::getDefaultConfiguration() -> GraphicsConfiguration*{

    GraphicsEnvironment* ge = GraphicsEnvironment::getLocalGraphicsEnvironment();;
    

    GraphicsDevice* gd = ge->getDefaultScreenDevice();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gd->getDefaultConfiguration();;
    
}


    auto ImageUtil::create(int32_t width, int32_t height) -> BufferedImage*{

    GraphicsConfiguration* graphicsConfiguration = this->getDefaultConfiguration();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsConfiguration->createCompatibleImage(width, height, Transparency::TRANSLUCENT);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImageForResize(std::vector<BufferedImage*> bufferedImageArray, int32_t percent, bool scale) -> std::vector<BufferedImage*>{

    int32_t size = bufferedImageArray.size();;
    

    std::vector<BufferedImage*> scaledBufferedImageArray = std::vector<BufferedImage*>(size);;
    

    BufferedImage* bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index];
    

    int32_t newWidth = static_cast<int32_t>((bufferedImage->getWidth() *percent /100));;
    

    int32_t newHeight = static_cast<int32_t>((bufferedImage->getHeight() *percent /100));;
    
scaledBufferedImageArray[index]= this->createBufferedImage(bufferedImage, newWidth, newHeight, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImage2(std::vector<BufferedImage*> bufferedImageArray, float percent, bool scale) -> std::vector<BufferedImage*>{

    int32_t size = bufferedImageArray.size();;
    

    std::vector<BufferedImage*> scaledBufferedImageArray = std::vector<BufferedImage*>(size);;
    

    BufferedImage* bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index];
    

    int32_t newWidth = static_cast<int32_t>((bufferedImage->getWidth() *percent));;
    

    int32_t newHeight = static_cast<int32_t>((bufferedImage->getHeight() *percent));;
    
scaledBufferedImageArray[index]= this->createBufferedImage(bufferedImage, newWidth, newHeight, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImage3(std::vector<BufferedImage*> bufferedImageArray, int32_t width, int32_t height, bool scale) -> std::vector<BufferedImage*>{

    int32_t size = bufferedImageArray.size();;
    

    std::vector<BufferedImage*> scaledBufferedImageArray = std::vector<BufferedImage*>(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
scaledBufferedImageArray[index]= this->createBufferedImage(bufferedImageArray[index], width, height, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImageForSave(BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight) -> BufferedImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createBufferedImage(bufferedImage, newWidth, newHeight, true);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImage(BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale) -> BufferedImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createBufferedImageAllowTranslate(bufferedImage, newWidth, newHeight, scale, false);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImageAllowTranslate(BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate) -> BufferedImage*{

    double width = bufferedImage->getWidth();;
    

    double height = bufferedImage->getHeight();;
    

    double d_newWidth = newWidth;;
    

    double d_newHeight = newHeight;;
    

    double widthRatio = d_newWidth /width;;
    

    double heightRatio = d_newHeight /height;;
    

    double ratioX = 1.0;;
    

    double ratioY = 1.0;;
    

                        if(scale)
                        
                                    {
                                    ratioX= widthRatio;
    
ratioY= heightRatio;
    

                                    }
                                

    AffineTransform* affineTransform = AffineTransform::getScaleInstance(ratioX, ratioY);;
    

                        if(!scale && allowTranslate)
                        
                                    {
                                    
    double dx = (newWidth -width) /2;;
    

    double dy = (newHeight -height) /2;;
    
affineTransform->translate(dx, dy);
    

                                    }
                                

    BufferedImage* newBufferedImage = new BufferedImage(newWidth, newHeight, BufferedImage::TYPE_INT_ARGB_PRE);;
    

    Graphics2D* graphics = newBufferedImage->createGraphics();;
    
graphics->drawRenderedImage(bufferedImage, affineTransform);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImageWithLargerCanvas(BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight) -> BufferedImage*{

    double width = bufferedImage->getWidth();;
    

    double height = bufferedImage->getHeight();;
    

    double d_newWidth = newWidth;;
    

    double d_newHeight = newHeight;;
    

    double widthRatio = d_newWidth /width;;
    

    double heightRatio = d_newHeight /height;;
    

    int32_t dx2 = static_cast<int32_t>((newWidth -width));;
    

    int32_t dy2 = static_cast<int32_t>((newHeight -height));;
    

    int32_t dx = static_cast<int32_t>(dx2) /2;;
    

    int32_t dy = static_cast<int32_t>(dy2) /2;;
    

    int32_t dx4 = static_cast<int32_t>(dx2) /4;;
    

    int32_t dy4 = static_cast<int32_t>(dy2) /4;;
    

    BufferedImage* newBufferedImage = new BufferedImage(newWidth, newHeight, BufferedImage::TYPE_INT_ARGB_PRE);;
    

    Graphics2D* graphics = newBufferedImage->createGraphics();;
    
graphics->drawImage(bufferedImage, dx4, dy4, 
                            nullptr);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


    auto ImageUtil::convertToBufferedImage(java::awt::Image* toolkitImage) -> BufferedImage*{

                        if(toolkitImage == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                                    }
                                

    BufferedImage* bufferedImage = new BufferedImage(toolkitImage->getWidth(
                            nullptr), toolkitImage->getHeight(
                            nullptr), BufferedImage::TYPE_INT_ARGB);;
    

    Graphics2D* g2d = bufferedImage->createGraphics();;
    
g2d->drawImage(toolkitImage, 0, 0, 
                            nullptr);
    
g2d->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


    auto ImageUtil::getBufferedImage(Image* image) -> BufferedImage*{

    BufferedImage* bufferedImage;;
    

                        if(image->isMutable())
                        
                                    {
                                    
    J2SEMutableImage* j2seImage = dynamic_cast<J2SEMutableImage*>(image);;
    
bufferedImage= dynamic_cast<BufferedImage*>(j2seImage->getImage());
    

                                    }
                                
                        else {
                            
    J2SEImmutableImage* j2seImage = dynamic_cast<J2SEImmutableImage*>(image);;
    
bufferedImage= dynamic_cast<BufferedImage*>(j2seImage->getImage());
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


    auto ImageUtil::toString(BufferedImage* bufferedImage) -> std::string{

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(" BufferedImage -");
    
stringBuffer->append(commonLabels->WIDTH_LABEL);
    
stringBuffer->appendint(bufferedImage->getWidth());
    
stringBuffer->append(commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(bufferedImage->getHeight());
    
stringBuffer->append(" Type: ");
    
stringBuffer->appendint(bufferedImage->getType());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_CPP
