
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageModifierUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/ColorModel.h>

      
#include <java/awt/image/WritableRaster.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/ImageCreationUtil.h"


ImageModifierUtil::ImageModifierUtil() : imageUtil(ImageUtil::getInstance()), colorArray(std::vector<int32_t>(1)) {
        }
        auto ImageModifierUtil::instance_owner() -> ImageModifierUtil* { static std::unique_ptr<ImageModifierUtil> value(new ImageModifierUtil()); return value.get(); }
ImageModifierUtil* ImageModifierUtil::instance = ImageModifierUtil::instance_owner();

    auto ImageModifierUtil::getInstanceOrCreate() -> ImageModifierUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageModifierUtil::instance;
    
}


    auto ImageModifierUtil::setBasicColorP(BasicColor* basicColor) -> void{
}


    auto ImageModifierUtil::setColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) -> void{

    BufferedImage* newBufferedImage = this->imageUtil->getBufferedImage(image);;
    

    int16_t r = basicColor->red;;
    

    int16_t g = basicColor->green;;
    

    int16_t b = basicColor->blue;;
    

    int32_t width = image->getWidth();;
    

    int32_t height = image->getHeight();;
    

    ColorModel* colorModel;;
    

    Object* dataElements;;
    

    int32_t ax= 0;;
    

    int32_t rx= 0;;
    

    int32_t gx= 0;;
    

    int32_t bx= 0;;
    




                        for (
    int32_t index = 0;index < width; index++)
        {




                        for (
    int32_t index2 = 0;index2 < height; index2++)
        {
colorModel= newBufferedImage->getColorModel();
    
dataElements= newBufferedImage->getRaster()->getDataElements(index, index2, 
                            nullptr);
    
ax= colorModel->getAlpha(dataElements);
    
rx= colorModel->getRed(dataElements);
    
gx= colorModel->getGreen(dataElements);
    
bx= colorModel->getBlue(dataElements);
    

                        if(rx != 0 || gx != 0 || bx != 0)
                        
                                    {
                                    newBufferedImage->setRGB(index, index2, (ax<<24) | (r<<16) | (g<<8) | (b));
    

                                    }
                                
}

}

}


    auto ImageModifierUtil::changeColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) -> void{

    BufferedImage* newBufferedImage = this->imageUtil->getBufferedImage(image);;
    

    float MAX = 255;;
    

    float r = (basicColor->red) /MAX;;
    

    float g = (basicColor->green) /MAX;;
    

    float b = (basicColor->blue) /MAX;;
    

    int32_t width = image->getWidth();;
    

    int32_t height = image->getHeight();;
    

    ColorModel* colorModel;;
    

    Object* dataElements;;
    

    int32_t ax= 0;;
    

    int32_t rx= 0;;
    

    int32_t gx= 0;;
    

    int32_t bx= 0;;
    




                        for (
    int32_t index = 0;index < width; index++)
        {




                        for (
    int32_t index2 = 0;index2 < height; index2++)
        {
colorModel= newBufferedImage->getColorModel();
    
dataElements= newBufferedImage->getRaster()->getDataElements(index, index2, 
                            nullptr);
    
ax= colorModel->getAlpha(dataElements);
    
rx= colorModel->getRed(dataElements);
    
gx= colorModel->getGreen(dataElements);
    
bx= colorModel->getBlue(dataElements);
    
rx *= r;
    
gx *= g;
    
bx *= b;
    
newBufferedImage->setRGB(index, index2, (ax<<24) | (rx<<16) | (gx<<8) | (bx));
    
}

}

}


    auto ImageModifierUtil::setAlpha(Image* unusedOriginalImage, Image* image, int32_t imageIndex, int32_t alphaInt) -> void{

    int8_t alpha = alphaInt;;
    

    BufferedImage* newBufferedImage = this->imageUtil->getBufferedImage(image);;
    

    int32_t width = image->getWidth();;
    

    int32_t height = image->getHeight();;
    

    WritableRaster* raster = newBufferedImage->getAlphaRaster();;
    




                        for (
    int32_t index = 0;index < width; index++)
        {




                        for (
    int32_t index2 = 0;index2 < height; index2++)
        {
raster->getPixel(index, index2, this->colorArray);
    
this->colorArray[0]= alpha&this->colorArray[0];
    
raster->setPixel(index, index2, this->colorArray);
    
}

}

}


    auto ImageModifierUtil::getImageArray(std::vector<Image*> originalImageArray) -> std::vector<Image*>{

        try {
            
    std::vector<Image*> newImageArray = std::vector<Image*>(originalImageArray.length);;
    

    int32_t size = newImageArray.size();;
    

    Image* originalImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
originalImage= originalImageArray[index];
    

    Image* image = ImageCreationUtil::getInstance()->createImageWH(originalImage->getWidth(), originalImage->getHeight());;
    
image->getGraphics()->drawImage(originalImage, 0, 0, Anchor::TOP_LEFT);
    
newImageArray[index]= image;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newImageArray;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings->EXCEPTION, this, "getImageArray", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImageArray;
    
}

}


    auto ImageModifierUtil::handleImage(std::vector<Image*> imageArray, int32_t index, Image* image) -> void{
}


    auto ImageModifierUtil::reset() -> void{
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_CPP
