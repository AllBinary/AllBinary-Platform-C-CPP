
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
        

    private: static const instance: ImageCopyUtil = new ImageCopyUtil();

    public static ImageCopyUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCopyUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const gameFeatureFactory: GameFeatureFactory = GameFeatureFactory.getInstance()!;

    private: const features: Features = Features.getInstance()!;

    private: const openGLFeatureFactory: OpenGLFeatureFactory = OpenGLFeatureFactory.getInstance()!;

    private: const openGLUtil: OpenGLUtil = OpenGLUtil.getInstance()!;

    private: const openGLESImageExclusionUtil: OpenGLESImageExclusionUtil = OpenGLESImageExclusionUtil.getInstance()!;

    private: const NO_COPY: string = "SWT should not copy images after initial loading as the alpha is not honored";

    private: const UNABLE: string = "Unable to scale image without dimensions";

                //@Throws(Exception.constructor)
            
    public Image createImageForRotation(Image originalImage){

                        if(this.features.isFeature(this.openGLFeatureFactory!.OPENGL))
                        
                                    {
                                    
    image: Image = originalImage;;
    
image= this.openGLUtil!.addImage(image);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createImage(originalImage);;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public Image createImage(Image originalImage){

                        if(!this.features.isFeature(this.gameFeatureFactory!.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this.logUtil!.putF(this.NO_COPY, this, this.commonStrings!.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    originalImage2: Image = originalImage;;
    

                        if(this.features.isFeature(this.openGLFeatureFactory!.OPENGL))
                        
                                    {
                                    
                        if(originalImage!.getType() >= OpenGLESImage.TYPE)
                        
                                    {
                                    
    openGLESImage: OpenGLESImage = (originalImage as OpenGLESImage);;
    
originalImage2= openGLESImage!.openGLBitmap!.getImage();
    

                                    }
                                

                                    }
                                

    image: Image = 
                null
            ;;
    

                        if(originalImage2!.isMutable())
                        
                                    {
                                    
    originalMutableImage: SwtMutableImage = originalImage2 as SwtMutableImage;;
    
image= new SwtMutableImage(SwtDeviceComponent.createImage(originalMutableImage!.image.getImageData()));
    

                                    }
                                
                        else {
                            
    originalImmutableImage: SwtImmutableImage = originalImage2 as SwtImmutableImage;;
    
image= new SwtMutableImage(SwtDeviceComponent.createImage(originalImmutableImage!.image.getImageData()));
    

                        }
                            
image= this.openGLUtil!.addImage(image);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public Image createImageWH(Image originalImage, int32_t width, int32_t height, bool mutable){

    originalImage2: Image = originalImage;;
    

                        if(!this.features.isFeature(this.gameFeatureFactory!.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this.logUtil!.putF(this.NO_COPY, this, this.commonStrings!.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

                        if(this.features.isFeature(this.openGLFeatureFactory!.OPENGL))
                        
                                    {
                                    
                        if(this.openGLESImageExclusionUtil!.isCustomScaling(originalImage))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createImage2(originalImage, width, height, mutable);;
    

                                    }
                                

                        if(originalImage!.getType() >= OpenGLESImage.TYPE)
                        
                                    {
                                    
    openGLESImage: OpenGLESImage = (originalImage as OpenGLESImage);;
    
originalImage2= openGLESImage!.openGLBitmap!.getImage();
    

                                    }
                                

                                    }
                                

    image: Image = 
                null
            ;;
    

                        if(originalImage2!.isMutable() && mutable)
                        
                                    {
                                    
    originalMutableImage: SwtMutableImage = originalImage2 as SwtMutableImage;;
    

                        if(originalMutableImage!.getImage() != 
                                    null
                                )
                        
                                    {
                                    
    imageData2: ImageData = originalMutableImage!.image.getImageData()!;;
    

    imageData: ImageData = imageData2!.scaledTo(width, height)!;;
    
image= new SwtMutableImage(SwtDeviceComponent.createImage(imageData));
    

                                    }
                                
                        else {
                            image= new SwtMutableImage(originalMutableImage!.getName(), new PostLoadSwtMutableImageProcessor(originalMutableImage));
    

                        }
                            

                                    }
                                
                        else {
                            
    originalImmutableImage: SwtImmutableImage = originalImage2 as SwtImmutableImage;;
    

                        if(originalImmutableImage!.getImage() != 
                                    null
                                )
                        
                                    {
                                    
    imageData2: ImageData = originalImmutableImage!.image.getImageData()!;;
    

                        if(width > 0 && height > 0)
                        
                                    {
                                    
    imageData: ImageData = imageData2!.scaledTo(width, height)!;;
    
image= new SwtImmutableImage(originalImage!.getName(), SwtDeviceComponent.createImage(imageData));
    

                                    }
                                
                        else {
                            this.logUtil!.putF(UNABLE, this, this.commonStrings!.CONSTRUCTOR);
    
image= new SwtImmutableImage(originalImmutableImage!.getName(), new PostLoadSwtImmutableImageProcessor(originalImmutableImage));
    

                        }
                            

                                    }
                                
                        else {
                            image= new SwtImmutableImage(originalImmutableImage!.getName(), new PostLoadSwtImmutableImageProcessor(originalImmutableImage));
    

                        }
                            

                        }
                            
image= this.openGLUtil!.addImage(image);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    private: const INFORMATION: string = "about_";

    private: const LEADERBOARD: string = "leaderboard";

                //@Throws(Exception.constructor)
            
    public Image createImage2(Image originalImage, int32_t width, int32_t height, bool mutable){

    originalImage2: Image = originalImage;;
    

                        if(!this.features.isFeature(this.gameFeatureFactory!.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this.logUtil!.putF(this.NO_COPY, this, this.commonStrings!.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    image: Image = 
                null
            ;;
    

                        if(this.features.isFeature(this.openGLFeatureFactory!.OPENGL))
                        
                                    {
                                    
    displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

                        if(originalImage!.getType() >= OpenGLESImage.TYPE)
                        
                                    {
                                    
    openGLESImage: OpenGLESImage = (originalImage as OpenGLESImage);;
    

    openGLESImageProperties: OpenGLESImageProperties = openGLESImage!.openGLESImageProperties;;
    

    openGLWidth: int32_t = openGLESImage!.openGLBitmap!.getWidth()!;;
    

    openGLHeight: int32_t = openGLESImage!.openGLBitmap!.getHeight()!;;
    
openGLESImageProperties!.scaleX= openGLESImageProperties!.scaleX2= ((width) /openGLWidth);
    
openGLESImageProperties!.scaleY= openGLESImageProperties!.scaleY2= ((height) /openGLHeight);
    
openGLESImageProperties!.scaleX= openGLESImageProperties!.scaleX *0.75;
    
openGLESImageProperties!.scaleY= openGLESImageProperties!.scaleY *0.75;
    

                        if(originalImage!.getHeight() % 2 != 0)
                        
                                    {
                                    openGLESImageProperties!.scaleX2 += 1.0 /openGLWidth;
    
openGLESImageProperties!.scaleY2 += 1.0 /openGLHeight;
    

                                    }
                                
image= openGLESImage;
    

                                    }
                                
                        else {
                            image= originalImage;
    

    openGLESImage: OpenGLESImage = this.openGLUtil!.addImage(image) as OpenGLESImage;;
    

    openGLESImageProperties: OpenGLESImageProperties = openGLESImage!.openGLESImageProperties;;
    
openGLESImageProperties!.scaleX= openGLESImageProperties!.scaleX2= ((width) /openGLESImage!.getWidth());
    
openGLESImageProperties!.scaleY= openGLESImageProperties!.scaleY2= ((height) /openGLESImage!.getHeight());
    

                        if(image.getName()!.startsWith(this.INFORMATION))
                        
                                    {
                                    openGLESImage!.openGLESImageTranslate= new OpenGLESDeviceImageTranslate();
    

    openGLESDeviceImageTranslate: OpenGLESDeviceImageTranslate = openGLESImage!.openGLESImageTranslate as OpenGLESDeviceImageTranslate;;
    
openGLESDeviceImageTranslate!.translateX= displayInfoSingleton!.getLastWidth() /1.4 /openGLESImageProperties!.scaleX;
    
openGLESDeviceImageTranslate!.translateY= displayInfoSingleton!.getLastHeight() /4 /openGLESImageProperties!.scaleY;
    
openGLESImageProperties!.scaleX= openGLESImageProperties!.scaleX *0.25;
    
openGLESImageProperties!.scaleY= openGLESImageProperties!.scaleY *0.25;
    

                                    }
                                
                        else {
                            openGLESImageProperties!.scaleX= openGLESImageProperties!.scaleX *0.75;
    
openGLESImageProperties!.scaleY= openGLESImageProperties!.scaleY *0.75;
    

                        if(image.getName()!.startsWith(this.LEADERBOARD))
                        
                                    {
                                    openGLESImage!.openGLESImageTranslate= new OpenGLESDeviceImageTranslate();
    

    openGLESDeviceImageTranslate: OpenGLESDeviceImageTranslate = openGLESImage!.openGLESImageTranslate as OpenGLESDeviceImageTranslate;;
    
openGLESDeviceImageTranslate!.translateX=  -displayInfoSingleton!.getLastWidth() /40 /openGLESImageProperties!.scaleX;
    

                                    }
                                

                        if(image.getName()!.startsWith(this.LEADERBOARD))
                        
                                    {
                                    
                                    }
                                
                        else {
                            openGLESImageProperties!.scaleX= 1.0;
    
openGLESImageProperties!.scaleY= 1.0;
    

                        }
                            

                        }
                            
image= openGLESImage;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(originalImage2!.isMutable() && mutable)
                        
                                    {
                                    
    originalMutableImage: SwtMutableImage = originalImage2 as SwtMutableImage;;
    

                        if(originalMutableImage!.getImage() != 
                                    null
                                )
                        
                                    {
                                    
    imageData2: ImageData = originalMutableImage!.image.getImageData()!;;
    

    imageData: ImageData = imageData2!.scaledTo(width, height)!;;
    
image= new SwtMutableImage(SwtDeviceComponent.createImage(imageData));
    

                                    }
                                
                        else {
                            image= new SwtMutableImage(originalMutableImage!.getName(), new PostLoadSwtMutableImageProcessor(originalMutableImage));
    

                        }
                            

                                    }
                                
                        else {
                            
    originalImmutableImage: SwtImmutableImage = originalImage2 as SwtImmutableImage;;
    

                        if(originalImmutableImage!.getImage() != 
                                    null
                                )
                        
                                    {
                                    
    imageData2: ImageData = originalImmutableImage!.image.getImageData()!;;
    

    imageData: ImageData = imageData2!.scaledTo(width, height)!;;
    
image= new SwtImmutableImage(originalImage!.getName(), SwtDeviceComponent.createImage(imageData));
    

                                    }
                                
                        else {
                            image= new SwtImmutableImage(originalImmutableImage!.getName(), new PostLoadSwtImmutableImageProcessor(originalImmutableImage));
    

                        }
                            

                        }
                            
image= this.openGLUtil!.addImage(image);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public Image createImageScale(Image originalImage, float canvasScale, bool resize){

                        if(!this.features.isFeature(this.gameFeatureFactory!.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this.logUtil!.putF(this.NO_COPY, this, this.commonStrings!.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    

                                    }
                                

    newWidth: int32_t = static_cast<int32_t>((originalImage!.getWidth() *canvasScale));;
    

    newHeight: int32_t = static_cast<int32_t>((originalImage!.getHeight() *canvasScale));;
    

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
                                

    image: Image = this.createImageWH(originalImage, newWidth, newHeight, true)!;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    originalImageData: ImageData = (getImage as org.eclipse.swt.graphics.Image).getImageData()!;;
    

    mutableImage2: SwtMutableImage = image as SwtMutableImage;;
    

    halfWidthDelta: int32_t = (newWidth -originalImage!.getWidth()) /2;;
    

    halfHeightDelta: int32_t = (newHeight -originalImage!.getHeight()) /2;;
    

    originalPixelArray: std::vector<int32_t> = new Array(originalImage!.getWidth() *originalImage!.getHeight());;
    

    newPixelArray: std::vector<int32_t> = new Array(image.getWidth() *image.getHeight());;
    

    width: int32_t = originalImage!.getWidth()!;;
    

    height: int32_t = originalImage!.getHeight()!;;
    




                        for (
    i: int32_t = 0;i < height; i++)
        {
originalImageData!.getPixels(0, i, width, originalPixelArray, (i *width));
    
}





                        for (
    index: int32_t = halfWidthDelta;index < width; index++)
        {




                        for (
    index2: int32_t = halfHeightDelta;index2 < height; index2++)
        {
newPixelArray[index +(index2 *width)]= originalPixelArray[(index -halfWidthDelta) +((index2 -halfHeightDelta) *width)]!;
    
}

}

getImage = mutableImage2!.getImage()getImage as org.eclipse.swt.graphics.Image
getImage.
                    getImageData()!.setPixels(0, 0, image.getWidth(), newPixelArray, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            
    originalImmutableImage: SwtImmutableImage = image as SwtImmutableImage;;
    

    originalImageData: ImageData = (getImage as org.eclipse.swt.graphics.Image).getImageData()!;;
    

    halfWidthDelta: int32_t = (newWidth -originalImage!.getWidth()) /2;;
    

    halfHeightDelta: int32_t = (newHeight -originalImage!.getHeight()) /2;;
    

    originalPixelArray: std::vector<int32_t> = new Array(originalImage!.getWidth() *originalImage!.getHeight());;
    

    newPixelArray: std::vector<int32_t> = new Array(image.getWidth() *image.getHeight());;
    

    width: int32_t = originalImage!.getWidth()!;;
    

    height: int32_t = originalImage!.getHeight()!;;
    




                        for (
    i: int32_t = 0;i < height; i++)
        {
originalImageData!.getPixels(0, i, width, originalPixelArray, (i *width));
    
}





                        for (
    index: int32_t = halfWidthDelta;index < width; index++)
        {




                        for (
    index2: int32_t = halfHeightDelta;index2 < height; index2++)
        {
newPixelArray[index +(index2 *width)]= originalPixelArray[(index -halfWidthDelta) +((index2 -halfHeightDelta) *width)]!;
    
}

}

getImage = originalImmutableImage!.getImage()getImage as org.eclipse.swt.graphics.Image
getImage.
                    getImageData()!.setPixels(0, 0, image.getWidth(), newPixelArray, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                        }
                            
}


};

            

