
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
        
class ImageCopyUtil
            : public Object
         {

    private: static ImageCopyUtil instance() { return ImageCopyUtil(); }

    public: static ImageCopyUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCopyUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ImageCopyUtil(){
}


    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const GameFeatureFactory gameFeatureFactory = GameFeatureFactory::getInstance();

    private: const Features features = Features::getInstance();

    private: const OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();

    private: const OpenGLUtil openGLUtil = OpenGLUtil::getInstance();

    private: const OpenGLESImageExclusionUtil openGLESImageExclusionUtil = OpenGLESImageExclusionUtil::getInstance();

    private: const std::string NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";

    private: const std::string UNABLE = "Unable to scale image without dimensions";

                //@Throws(Exception.constructor)
            
    public: Image createImageForRotation(Image originalImage){

                        if(this->features.isFeature(this->openGLFeatureFactory.OPENGL))
                        
                                    {
                                    
    Image image = originalImage;;
    
image= this->openGLUtil.addImage(image);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage(originalImage);;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: Image createImage(Image originalImage){

                        if(!this->features.isFeature(this->gameFeatureFactory.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil.putF(this->NO_COPY, this, this->commonStrings.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    Image originalImage2 = originalImage;;
    

                        if(this->features.isFeature(this->openGLFeatureFactory.OPENGL))
                        
                                    {
                                    
                        if(originalImage.getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage openGLESImage = (originalImage as OpenGLESImage);;
    
originalImage2= openGLESImage.openGLBitmap.getImage();
    

                                    }
                                

                                    }
                                

    Image image = 
                null
            ;;
    

                        if(originalImage2.isMutable())
                        
                                    {
                                    
    SwtMutableImage originalMutableImage = originalImage2 as SwtMutableImage;;
    
image= SwtMutableImage(SwtDeviceComponent::createImage(originalMutableImage.image.getImageData()));
    

                                    }
                                
                        else {
                            
    SwtImmutableImage originalImmutableImage = originalImage2 as SwtImmutableImage;;
    
image= SwtMutableImage(SwtDeviceComponent::createImage(originalImmutableImage.image.getImageData()));
    

                        }
                            
image= this->openGLUtil.addImage(image);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public: Image createImageWH(Image originalImage, int32_t width, int32_t height, bool mutable){

    Image originalImage2 = originalImage;;
    

                        if(!this->features.isFeature(this->gameFeatureFactory.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil.putF(this->NO_COPY, this, this->commonStrings.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

                        if(this->features.isFeature(this->openGLFeatureFactory.OPENGL))
                        
                                    {
                                    
                        if(this->openGLESImageExclusionUtil.isCustomScaling(originalImage))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage2(originalImage, width, height, mutable);;
    

                                    }
                                

                        if(originalImage.getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage openGLESImage = (originalImage as OpenGLESImage);;
    
originalImage2= openGLESImage.openGLBitmap.getImage();
    

                                    }
                                

                                    }
                                

    Image image = 
                null
            ;;
    

                        if(originalImage2.isMutable() && mutable)
                        
                                    {
                                    
    SwtMutableImage originalMutableImage = originalImage2 as SwtMutableImage;;
    

                        if(originalMutableImage.getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
    ImageData imageData2 = originalMutableImage.image.getImageData();;
    

    ImageData imageData = imageData2.scaledTo(width, height);;
    
image= SwtMutableImage(SwtDeviceComponent::createImage(imageData));
    

                                    }
                                
                        else {
                            image= SwtMutableImage(originalMutableImage.getName(), PostLoadSwtMutableImageProcessor(originalMutableImage));
    

                        }
                            

                                    }
                                
                        else {
                            
    SwtImmutableImage originalImmutableImage = originalImage2 as SwtImmutableImage;;
    

                        if(originalImmutableImage.getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
    ImageData imageData2 = originalImmutableImage.image.getImageData();;
    

                        if(width > 0 && height > 0)
                        
                                    {
                                    
    ImageData imageData = imageData2.scaledTo(width, height);;
    
image= SwtImmutableImage(originalImage.getName(), SwtDeviceComponent::createImage(imageData));
    

                                    }
                                
                        else {
                            this->logUtil.putF(UNABLE, this, this->commonStrings.CONSTRUCTOR);
    
image= SwtImmutableImage(originalImmutableImage.getName(), PostLoadSwtImmutableImageProcessor(originalImmutableImage));
    

                        }
                            

                                    }
                                
                        else {
                            image= SwtImmutableImage(originalImmutableImage.getName(), PostLoadSwtImmutableImageProcessor(originalImmutableImage));
    

                        }
                            

                        }
                            
image= this->openGLUtil.addImage(image);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    private: const std::string INFORMATION = "about_";

    private: const std::string LEADERBOARD = "leaderboard";

                //@Throws(Exception.constructor)
            
    public: Image createImage2(Image originalImage, int32_t width, int32_t height, bool mutable){

    Image originalImage2 = originalImage;;
    

                        if(!this->features.isFeature(this->gameFeatureFactory.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil.putF(this->NO_COPY, this, this->commonStrings.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    Image image = 
                null
            ;;
    

                        if(this->features.isFeature(this->openGLFeatureFactory.OPENGL))
                        
                                    {
                                    
    DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    

                        if(originalImage.getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage openGLESImage = (originalImage as OpenGLESImage);;
    

    OpenGLESImageProperties openGLESImageProperties = openGLESImage.openGLESImageProperties;;
    

    int32_t openGLWidth = openGLESImage.openGLBitmap.getWidth();;
    

    int32_t openGLHeight = openGLESImage.openGLBitmap.getHeight();;
    
openGLESImageProperties.scaleX= openGLESImageProperties.scaleX2= ((width) /openGLWidth);
    
openGLESImageProperties.scaleY= openGLESImageProperties.scaleY2= ((height) /openGLHeight);
    
openGLESImageProperties.scaleX= openGLESImageProperties.scaleX *0.75;
    
openGLESImageProperties.scaleY= openGLESImageProperties.scaleY *0.75;
    

                        if(originalImage.getHeight() % 2 != 0)
                        
                                    {
                                    openGLESImageProperties.scaleX2 += 1.0 /openGLWidth;
    
openGLESImageProperties.scaleY2 += 1.0 /openGLHeight;
    

                                    }
                                
image= openGLESImage;
    

                                    }
                                
                        else {
                            image= originalImage;
    

    OpenGLESImage openGLESImage = this->openGLUtil.addImage(image) as OpenGLESImage;;
    

    OpenGLESImageProperties openGLESImageProperties = openGLESImage.openGLESImageProperties;;
    
openGLESImageProperties.scaleX= openGLESImageProperties.scaleX2= ((width) /openGLESImage.getWidth());
    
openGLESImageProperties.scaleY= openGLESImageProperties.scaleY2= ((height) /openGLESImage.getHeight());
    

                        if(image.getName().startsWith(this->INFORMATION))
                        
                                    {
                                    openGLESImage.openGLESImageTranslate= OpenGLESDeviceImageTranslate();
    

    OpenGLESDeviceImageTranslate openGLESDeviceImageTranslate = openGLESImage.openGLESImageTranslate as OpenGLESDeviceImageTranslate;;
    
openGLESDeviceImageTranslate.translateX= displayInfoSingleton.getLastWidth() /1.4 /openGLESImageProperties.scaleX;
    
openGLESDeviceImageTranslate.translateY= displayInfoSingleton.getLastHeight() /4 /openGLESImageProperties.scaleY;
    
openGLESImageProperties.scaleX= openGLESImageProperties.scaleX *0.25;
    
openGLESImageProperties.scaleY= openGLESImageProperties.scaleY *0.25;
    

                                    }
                                
                        else {
                            openGLESImageProperties.scaleX= openGLESImageProperties.scaleX *0.75;
    
openGLESImageProperties.scaleY= openGLESImageProperties.scaleY *0.75;
    

                        if(image.getName().startsWith(this->LEADERBOARD))
                        
                                    {
                                    openGLESImage.openGLESImageTranslate= OpenGLESDeviceImageTranslate();
    

    OpenGLESDeviceImageTranslate openGLESDeviceImageTranslate = openGLESImage.openGLESImageTranslate as OpenGLESDeviceImageTranslate;;
    
openGLESDeviceImageTranslate.translateX=  -displayInfoSingleton.getLastWidth() /40 /openGLESImageProperties.scaleX;
    

                                    }
                                

                        if(image.getName().startsWith(this->LEADERBOARD))
                        
                                    {
                                    
                                    }
                                
                        else {
                            openGLESImageProperties.scaleX= 1.0;
    
openGLESImageProperties.scaleY= 1.0;
    

                        }
                            

                        }
                            
image= openGLESImage;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(originalImage2.isMutable() && mutable)
                        
                                    {
                                    
    SwtMutableImage originalMutableImage = originalImage2 as SwtMutableImage;;
    

                        if(originalMutableImage.getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
    ImageData imageData2 = originalMutableImage.image.getImageData();;
    

    ImageData imageData = imageData2.scaledTo(width, height);;
    
image= SwtMutableImage(SwtDeviceComponent::createImage(imageData));
    

                                    }
                                
                        else {
                            image= SwtMutableImage(originalMutableImage.getName(), PostLoadSwtMutableImageProcessor(originalMutableImage));
    

                        }
                            

                                    }
                                
                        else {
                            
    SwtImmutableImage originalImmutableImage = originalImage2 as SwtImmutableImage;;
    

                        if(originalImmutableImage.getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
    ImageData imageData2 = originalImmutableImage.image.getImageData();;
    

    ImageData imageData = imageData2.scaledTo(width, height);;
    
image= SwtImmutableImage(originalImage.getName(), SwtDeviceComponent::createImage(imageData));
    

                                    }
                                
                        else {
                            image= SwtImmutableImage(originalImmutableImage.getName(), PostLoadSwtImmutableImageProcessor(originalImmutableImage));
    

                        }
                            

                        }
                            
image= this->openGLUtil.addImage(image);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public: Image createImageScale(Image originalImage, float canvasScale, bool resize){

                        if(!this->features.isFeature(this->gameFeatureFactory.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this->logUtil.putF(this->NO_COPY, this, this->commonStrings.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    int32_t newWidth = static_cast<int32_t>((originalImage.getWidth() *canvasScale));;
    

    int32_t newHeight = static_cast<int32_t>((originalImage.getHeight() *canvasScale));;
    

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
                                

    Image image = this->createImageWH(originalImage, newWidth, newHeight, true);;
    

                        if(image.isMutable())
                        
                                    {
                                    
    ImageData originalImageData = (getImage as org::eclipse::swt::graphics::Image).getImageData();;
    

    SwtMutableImage mutableImage2 = image as SwtMutableImage;;
    

    int32_t halfWidthDelta = (newWidth -originalImage.getWidth()) /2;;
    

    int32_t halfHeightDelta = (newHeight -originalImage.getHeight()) /2;;
    

    std::vector<int32_t> originalPixelArray = new Array(originalImage.getWidth() *originalImage.getHeight());;
    

    std::vector<int32_t> newPixelArray = new Array(image.getWidth() *image.getHeight());;
    

    int32_t width = originalImage.getWidth();;
    

    int32_t height = originalImage.getHeight();;
    




                        for (
    int32_t i = 0;i < height; i++)
        {
originalImageData.getPixels(0, i, width, originalPixelArray, (i *width));
    
}





                        for (
    int32_t index = halfWidthDelta;index < width; index++)
        {




                        for (
    int32_t index2 = halfHeightDelta;index2 < height; index2++)
        {
newPixelArray[index +(index2 *width)]= originalPixelArray[(index -halfWidthDelta) +((index2 -halfHeightDelta) *width)]!;
    
}

}

getImage = mutableImage2.getImage()getImage as org::eclipse::swt::graphics::Image
getImage.
                    getImageData().setPixels(0, 0, image.getWidth(), newPixelArray, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            
    SwtImmutableImage originalImmutableImage = image as SwtImmutableImage;;
    

    ImageData originalImageData = (getImage as org::eclipse::swt::graphics::Image).getImageData();;
    

    int32_t halfWidthDelta = (newWidth -originalImage.getWidth()) /2;;
    

    int32_t halfHeightDelta = (newHeight -originalImage.getHeight()) /2;;
    

    std::vector<int32_t> originalPixelArray = new Array(originalImage.getWidth() *originalImage.getHeight());;
    

    std::vector<int32_t> newPixelArray = new Array(image.getWidth() *image.getHeight());;
    

    int32_t width = originalImage.getWidth();;
    

    int32_t height = originalImage.getHeight();;
    




                        for (
    int32_t i = 0;i < height; i++)
        {
originalImageData.getPixels(0, i, width, originalPixelArray, (i *width));
    
}





                        for (
    int32_t index = halfWidthDelta;index < width; index++)
        {




                        for (
    int32_t index2 = halfHeightDelta;index2 < height; index2++)
        {
newPixelArray[index +(index2 *width)]= originalPixelArray[(index -halfWidthDelta) +((index2 -halfHeightDelta) *width)]!;
    
}

}

getImage = originalImmutableImage.getImage()getImage as org::eclipse::swt::graphics::Image
getImage.
                    getImageData().setPixels(0, 0, image.getWidth(), newPixelArray, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                        }
                            
}


};

            

