
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEROTATIONUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEROTATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageJ2SERotationUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Math.h"
        
#include <java/awt/Graphics2D.h>

      
#include <java/awt/Image.h>

      
#include <java/awt/image/BufferedImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/ImageJ2SEUtil.h"

auto ImageJ2SERotationUtil::instance_owner() -> ImageJ2SERotationUtil* { static std::unique_ptr<ImageJ2SERotationUtil> value(new ImageJ2SERotationUtil()); return value.get(); }
ImageJ2SERotationUtil* ImageJ2SERotationUtil::instance = ImageJ2SERotationUtil::instance_owner();

    auto ImageJ2SERotationUtil::getInstance() -> ImageJ2SERotationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageJ2SERotationUtil::instance;
    
}


ImageJ2SERotationUtil::ImageJ2SERotationUtil() : imageUtil(ImageUtil::getInstance()), imageJ2SEUtil(ImageJ2SEUtil::getInstance()), TWO_PIE(2 *Math::PI){
}


    auto ImageJ2SERotationUtil::getRotatedImage(Image* bufferedImage, int32_t totalAngle) -> BufferedImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getRotatedImageRadians(bufferedImage, TWO_PIE *totalAngle /360);;
    
}


    auto ImageJ2SERotationUtil::getRotatedImageRadians(Image* bufferedImage, double radians) -> BufferedImage*{

    BufferedImage* newBufferedImage = this->imageUtil->create(bufferedImage->getWidth(
                            nullptr), bufferedImage->getHeight(
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->drawRotatedImageRadians(bufferedImage, newBufferedImage, newBufferedImage->createGraphics(), radians);;
    
}


    auto ImageJ2SERotationUtil::drawRotatedImageRadians(Image* bufferedImage, BufferedImage* newBufferedImage, Graphics2D* g, double radians) -> BufferedImage*{
g->rotate(radians, newBufferedImage->getWidth(
                            nullptr) /2, newBufferedImage->getHeight(
                            nullptr) /2);
    
g->drawImage(bufferedImage, 0, 0, bufferedImage->getWidth(
                            nullptr), bufferedImage->getHeight(
                            nullptr), 
                            nullptr);
    
g->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newBufferedImage;
    
}


    auto ImageJ2SERotationUtil::rotateImage(Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle) -> BufferedImage*{

    Graphics2D* g = newBufferedImage->createGraphics();;
    
g->setBackground(this->imageJ2SEUtil->TRANSPARENT_COLOR);
    
g->clearRect(0, 0, newBufferedImage->getWidth(), newBufferedImage->getHeight());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->drawRotatedImageRadians(bufferedImage, newBufferedImage, g, TWO_PIE *totalAngle /360);;
    
}


    auto ImageJ2SERotationUtil::createRotatedImage(Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle) -> BufferedImage*{

    Graphics2D* g = newBufferedImage->createGraphics();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->drawRotatedImageRadians(bufferedImage, newBufferedImage, g, TWO_PIE *totalAngle /360);;
    
}


    auto ImageJ2SERotationUtil::getRotatedImages(Image* bufferedImage, int32_t numberOfFrames, int32_t totalAngle) -> std::vector<BufferedImage*>{

    std::vector<BufferedImage*> bufferedImageArray = std::vector<BufferedImage*>(numberOfFrames);;
    

    double arc = () *totalAngle /360;;
    

    int32_t size = bufferedImageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    double radians = (arc /size) *index;;
    
bufferedImageArray[index]= this->getRotatedImageRadians(bufferedImage, radians);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return bufferedImageArray;
    
}


    auto ImageJ2SERotationUtil::createSpriteImage(std::vector<BufferedImage*> bufferedImageArray) -> BufferedImage*{

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
                                

    BufferedImage* firstBufferedImage = bufferedImageArray[0];;
    

    BufferedImage* bufferedImage = this->imageUtil->create(firstBufferedImage->getWidth(
                            nullptr) *columns, firstBufferedImage->getHeight(
                            nullptr) *rows);;
    

    Graphics2D* g = bufferedImage->createGraphics();;
    

    int32_t columnIndex = 0;;
    

    int32_t rowIndex = 0;;
    

    BufferedImage* nextBufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(index /9 != 0 && index % 9 == 0)
                        
                                    {
                                    rowIndex++;
    
columnIndex= 0;
    

                                    }
                                
nextBufferedImage= bufferedImageArray[index];
    
g->drawImage(nextBufferedImage, nextBufferedImage->getWidth(
                            nullptr) *columnIndex, nextBufferedImage->getHeight(
                            nullptr) *rowIndex, nextBufferedImage->getWidth(
                            nullptr), nextBufferedImage->getHeight(
                            nullptr), 
                            nullptr);
    
columnIndex++;
    
}

g->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return bufferedImage;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEROTATIONUTIL_CPP
