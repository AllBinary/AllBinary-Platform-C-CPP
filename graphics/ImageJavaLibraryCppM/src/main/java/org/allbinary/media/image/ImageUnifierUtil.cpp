
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageUnifierUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/GraphicsEnvironment.h"
#include "org/allbinary/media/image/GraphicsDevice.h"
#include "org/allbinary/media/image/GraphicsConfiguration.h"
#include "org/allbinary/media/image/Graphics2D.h"
#include "org/allbinary/media/image/ImageUnifierProperties.h"

auto ImageUnifierUtil::instance_owner() -> ImageUnifierUtil* { static std::unique_ptr<ImageUnifierUtil> value(new ImageUnifierUtil()); return value.get(); }
ImageUnifierUtil* ImageUnifierUtil::instance = ImageUnifierUtil::instance_owner();

    auto ImageUnifierUtil::getInstance() -> ImageUnifierUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageUnifierUtil::instance;
    
}


ImageUnifierUtil::ImageUnifierUtil() : logUtil(LogUtil::getInstance()), imageUtil(ImageUtil::getInstance()){
}


    auto ImageUnifierUtil::getDefaultConfiguration() -> GraphicsConfiguration*{

    GraphicsEnvironment* ge = GraphicsEnvironment::getLocalGraphicsEnvironment();;
    

    GraphicsDevice* gd = ge->getDefaultScreenDevice();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gd->getDefaultConfiguration();;
    
}


    auto ImageUnifierUtil::getImage(std::vector<BufferedImage*> bufferedImageArray, ImageUnifierProperties* imageUnifierProperties) -> BufferedImage*{

    BufferedImage* newBufferedImage = this->imageUtil->create(imageUnifierProperties->getWidth(), imageUnifierProperties->getHeight());;
    

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Setting Image - ") +JavaString::valueOf(commonLabels->WIDTH_LABEL)) +JavaString::valueOf(newBufferedImage->getWidth())) +JavaString::valueOf(commonLabels->HEIGHT_LABEL)) +JavaString::valueOf(newBufferedImage->getHeight()), this, "getImage");
    

    Graphics2D* g = newBufferedImage->createGraphics();;
    

    int32_t columnIndex = 0;;
    

    int32_t rowIndex = 0;;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    int32_t x = JavaBoxes::value<int32_t>(imageUnifierProperties->getImageUnifierCell()->getWidth()) *columnIndex++;;
    

    int32_t y = JavaBoxes::value<int32_t>(imageUnifierProperties->getImageUnifierCell()->getHeight()) *rowIndex;;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Adding Image: ") +JavaString::valueOf(index)) +JavaString::valueOf(" x: ")) +JavaString::valueOf(x)) +JavaString::valueOf(" y: ")) +JavaString::valueOf(y), this, "getImage");
    
g->drawImage(bufferedImageArray[index], x, y, JavaBoxes::value<int32_t>(imageUnifierProperties->getImageUnifierCell()->getWidth()), JavaBoxes::value<int32_t>(imageUnifierProperties->getImageUnifierCell()->getHeight()), 
                            nullptr);
    

    int32_t totalColumnsMinusOne = (JavaBoxes::value<int32_t>(imageUnifierProperties->getColumns()) -1);;
    

                        if(columnIndex > totalColumnsMinusOne)
                        
                                    {
                                    rowIndex++;
    
columnIndex= 0;
    

                                    }
                                
}

g->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERUTIL_CPP
