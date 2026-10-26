
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/opengles/ModifierOpenGLESImageProcessor.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
#include <org/microemu/device/swt/SwtImmutableImage.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCopyUtil.h"

class ImageModifierUtil
            : public Object
         {

    private: static ImageModifierUtil instance() { return ImageModifierUtil(); }

    public: static ImageModifierUtil getInstanceOrCreate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageModifierUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const ImageCopyUtil imageCopyUtil = ImageCopyUtil::getInstance();

    private: const Features features = Features::getInstance();

    public: void setBasicColorP(BasicColor basicColor){
}


    public: void setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){

    org::eclipse::swt::graphics::Image newBufferedImage;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    SwtMutableImage swtImage = image;;
    
newBufferedImage= swtImage.getImage();
    

                                    }
                                
                        else {
                            
    SwtImmutableImage swtImage = image;;
    
newBufferedImage= swtImage.getImage();
    

                        }
                            

    int16_t r = basicColor.red;;
    

    int16_t g = basicColor.green;;
    

    int16_t b = basicColor.blue;;
    

    int32_t width = image.getWidth();;
    

    int32_t height = image.getHeight();;
    

    ImageData imageData = newBufferedImage.getImageData();;
    

                        if(imageData.depth == 24)
                        
                                    {
                                    
    int32_t rx= 0;;
    

    int32_t gx= 0;;
    

    int32_t bx= 0;;
    

    int32_t index3= 0;;
    




                        for (
    int32_t index = 0;index < width; index++)
        {




                        for (
    int32_t index2 = 0;index2 < height; index2++)
        {
index3= (index2 *imageData.bytesPerLine) +(index *4);
    
rx= (imageData.data[index3]&0xFF)<<16;
    
gx= (imageData.data[index3 +1]&0xFF)<<8;
    
bx= (imageData.data[index3 +2]&0xFF);
    

                        if(rx != 0 || gx != 0 || bx != 0)
                        
                                    {
                                    imageData.data[index3]= r;
    
imageData.data[index3 +1]= g;
    
imageData.data[index3 +2]= b;
    

                                    }
                                
}

}


                                    }
                                
}


    public: void changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){

                        if(this->features.isFeature(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    
                        if(image.getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage openGLESImage = (image);;
    
openGLESImage.imageProcessor= ModifierOpenGLESImageProcessor::getInstance();
    
openGLESImage.openGLESImageProperties.redf= basicColor.getRedComponent();
    
openGLESImage.openGLESImageProperties.greenf= basicColor.getGreenComponent();
    
openGLESImage.openGLESImageProperties.bluef= basicColor.getBlueComponent();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                                    }
                                

    org::eclipse::swt::graphics::Image newBufferedImage;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    SwtMutableImage swtImage = image;;
    
newBufferedImage= swtImage.getImage();
    

                                    }
                                
                        else {
                            
    SwtImmutableImage swtImage = image;;
    
newBufferedImage= swtImage.getImage();
    

                        }
                            

    float MAX = 255;;
    

    float r = (basicColor.red) /MAX;;
    

    float g = (basicColor.green) /MAX;;
    

    float b = (basicColor.blue) /MAX;;
    

    int32_t rx= 0;;
    

    int32_t gx= 0;;
    

    int32_t bx= 0;;
    

    ImageData imageData = newBufferedImage.getImageData();;
    

                        if(imageData.depth == 24)
                        
                                    {
                                    
    int32_t size = imageData.data.length;;
    




                        for (
    int32_t index = 0;index < size; )
        {
rx= (imageData.data[index]&0xFF)<<16;
    
gx= (imageData.data[index +1]&0xFF)<<8;
    
bx= (imageData.data[index +2]&0xFF);
    
rx *= r;
    
gx *= g;
    
bx *= b;
    
imageData.data[index]= rx;
    
imageData.data[index +1]= gx;
    
imageData.data[index +2]= bx;
    
}


                                    }
                                
}


    public: void setAlpha(Image unusedOriginalImage, Image image, int32_t imageIndex, int32_t alphaInt){

                        if(this->features.isFeature(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    
                        if(image.getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage openGLESImage = (image);;
    
openGLESImage.imageProcessor= ModifierOpenGLESImageProcessor::getInstance();
    
openGLESImage.openGLESImageProperties.alphaf= (alphaInt) /255;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                                    }
                                
this->setAlphaSWT(image, alphaInt);
    
}


    public: void setAlphaSWT(Image image, int32_t alphaInt){

    int8_t alpha = alphaInt;;
    

    org::eclipse::swt::graphics::Image newBufferedImage;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    SwtMutableImage swtImage = image;;
    
newBufferedImage= swtImage.getImage();
    

                                    }
                                
                        else {
                            
    SwtImmutableImage swtImage = image;;
    
newBufferedImage= swtImage.getImage();
    

                        }
                            
newBufferedImage.getImageData().alpha= alpha;
    
}


    public: std::vector<Image> getImageArray(std::vector<Image> originalImageArray){

        try {
            
    std::vector<Image> newImageArray = std::vector<Image>(originalImageArray.length);;
    

    int32_t size = newImageArray.size();;
    

    Image originalImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
originalImage= originalImageArray[index];
    

    Image image = this->imageCopyUtil.createImage(originalImage);;
    
newImageArray[index]= image;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newImageArray;
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings.EXCEPTION, this, "getImageArray", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImageArray;
    
}

}


    public: void handleImage(std::vector<Image> imageArray, int32_t index, Image image){
}


    public: void reset(){
}


};

            

