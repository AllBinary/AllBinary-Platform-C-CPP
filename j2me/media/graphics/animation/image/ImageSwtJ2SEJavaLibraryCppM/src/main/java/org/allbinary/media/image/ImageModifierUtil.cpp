
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
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
        

    private: static const instance: ImageModifierUtil = new ImageModifierUtil();

    public static ImageModifierUtil getInstanceOrCreate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageModifierUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const imageCopyUtil: ImageCopyUtil = ImageCopyUtil.getInstance()!;

    private: const features: Features = Features.getInstance()!;

    public setBasicColorP(BasicColor basicColor){
}


    public setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){

    newBufferedImage: org.eclipse.swt.graphics.Image;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    swtImage: SwtMutableImage = image as SwtMutableImage;;
    
newBufferedImage= swtImage!.getImage() as org.eclipse.swt.graphics.Image;
    

                                    }
                                
                        else {
                            
    swtImage: SwtImmutableImage = image as SwtImmutableImage;;
    
newBufferedImage= swtImage!.getImage() as org.eclipse.swt.graphics.Image;
    

                        }
                            

    r: int16_t = basicColor!.red;;
    

    g: int16_t = basicColor!.green;;
    

    b: int16_t = basicColor!.blue;;
    

    width: int32_t = image.getWidth()!;;
    

    height: int32_t = image.getHeight()!;;
    

    imageData: ImageData = newBufferedImage!.getImageData()!;;
    

                        if(imageData!.depth == 24)
                        
                                    {
                                    
    rx: int32_t= 0;;
    

    gx: int32_t= 0;;
    

    bx: int32_t= 0;;
    

    index3: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < width; index++)
        {




                        for (
    index2: int32_t = 0;index2 < height; index2++)
        {
index3= (index2 *imageData!.bytesPerLine) +(index *4);
    
rx= (imageData!.data[index3]&0xFF)<<16;
    
gx= (imageData!.data[index3 +1]&0xFF)<<8;
    
bx= (imageData!.data[index3 +2]&0xFF);
    

                        if(rx != 0 || gx != 0 || bx != 0)
                        
                                    {
                                    imageData!.data[index3]= r;
    
imageData!.data[index3 +1]= g;
    
imageData!.data[index3 +2]= b;
    

                                    }
                                
}

}


                                    }
                                
}


    public changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){

                        if(this.features.isFeature(OpenGLFeatureFactory.getInstance()!.OPENGL))
                        
                                    {
                                    
                        if(image.getType() >= OpenGLESImage.TYPE)
                        
                                    {
                                    
    openGLESImage: OpenGLESImage = (image as OpenGLESImage);;
    
openGLESImage!.imageProcessor= ModifierOpenGLESImageProcessor.getInstance();
    
openGLESImage!.openGLESImageProperties!.redf= basicColor!.getRedComponent();
    
openGLESImage!.openGLESImageProperties!.greenf= basicColor!.getGreenComponent();
    
openGLESImage!.openGLESImageProperties!.bluef= basicColor!.getBlueComponent();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                                    }
                                

    newBufferedImage: org.eclipse.swt.graphics.Image;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    swtImage: SwtMutableImage = image as SwtMutableImage;;
    
newBufferedImage= swtImage!.getImage() as org.eclipse.swt.graphics.Image;
    

                                    }
                                
                        else {
                            
    swtImage: SwtImmutableImage = image as SwtImmutableImage;;
    
newBufferedImage= swtImage!.getImage() as org.eclipse.swt.graphics.Image;
    

                        }
                            

    MAX: float = 255;;
    

    r: float = (basicColor!.red) /MAX;;
    

    g: float = (basicColor!.green) /MAX;;
    

    b: float = (basicColor!.blue) /MAX;;
    

    rx: int32_t= 0;;
    

    gx: int32_t= 0;;
    

    bx: int32_t= 0;;
    

    imageData: ImageData = newBufferedImage!.getImageData()!;;
    

                        if(imageData!.depth == 24)
                        
                                    {
                                    
    size: int32_t = imageData!.data.length;;
    




                        for (
    index: int32_t = 0;index < size; )
        {
rx= (imageData!.data[index]&0xFF)<<16;
    
gx= (imageData!.data[index +1]&0xFF)<<8;
    
bx= (imageData!.data[index +2]&0xFF);
    
rx *= r;
    
gx *= g;
    
bx *= b;
    
imageData!.data[index]= rx;
    
imageData!.data[index +1]= gx;
    
imageData!.data[index +2]= bx;
    
}


                                    }
                                
}


    public setAlpha(Image unusedOriginalImage, Image image, int32_t imageIndex, int32_t alphaInt){

                        if(this.features.isFeature(OpenGLFeatureFactory.getInstance()!.OPENGL))
                        
                                    {
                                    
                        if(image.getType() >= OpenGLESImage.TYPE)
                        
                                    {
                                    
    openGLESImage: OpenGLESImage = (image as OpenGLESImage);;
    
openGLESImage!.imageProcessor= ModifierOpenGLESImageProcessor.getInstance();
    
openGLESImage!.openGLESImageProperties!.alphaf= (alphaInt) /255;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                                    }
                                
this.setAlphaSWT(image, alphaInt);
    
}


    public setAlphaSWT(Image image, int32_t alphaInt){

    alpha: int8_t = alphaInt;;
    

    newBufferedImage: org.eclipse.swt.graphics.Image;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    swtImage: SwtMutableImage = image as SwtMutableImage;;
    
newBufferedImage= swtImage!.getImage() as org.eclipse.swt.graphics.Image;
    

                                    }
                                
                        else {
                            
    swtImage: SwtImmutableImage = image as SwtImmutableImage;;
    
newBufferedImage= swtImage!.getImage() as org.eclipse.swt.graphics.Image;
    

                        }
                            
newBufferedImage!.getImageData()!.alpha= alpha;
    
}


    public std::vector<Image> getImageArray(std::vector<Image> originalImageArray){

        try {
            
    newImageArray: std::vector<Image> = new Array(originalImageArray!.length);;
    

    size: int32_t = newImageArray!.length
                ;;
    

    originalImage: Image;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
originalImage= originalImageArray[index]!;
    

    image: Image = this.imageCopyUtil!.createImage(originalImage)!;;
    
newImageArray[index]= image;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newImageArray;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.putOE(commonStrings!.EXCEPTION, this, "getImageArray", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImageArray;
    
}

}


    public handleImage(std::vector<Image> imageArray, int32_t index, Image image){
}


    public reset(){
}


};

            

