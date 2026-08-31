
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
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/ColorModel.h>

      
#include <java/awt/image/WritableRaster.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "ImageCreationUtil.h"

class ImageModifierUtil
            : public Object
         {
        

    private: static const instance: ImageModifierUtil = new ImageModifierUtil();

    public static ImageModifierUtil getInstanceOrCreate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageModifierUtil.instance;
    
}


    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

    public setBasicColorP(BasicColor basicColor){
}


    private: const colorArray: std::vector<int32_t> = new Array(1);

    public setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){

    newBufferedImage: BufferedImage = this.imageUtil!.getBufferedImage(image)!;;
    

    r: int16_t = basicColor!.red;;
    

    g: int16_t = basicColor!.green;;
    

    b: int16_t = basicColor!.blue;;
    

    width: int32_t = image.getWidth()!;;
    

    height: int32_t = image.getHeight()!;;
    

    colorModel: ColorModel;;
    

    dataElements: any;;
    

    ax: int32_t= 0;;
    

    rx: int32_t= 0;;
    

    gx: int32_t= 0;;
    

    bx: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < width; index++)
        {




                        for (
    index2: int32_t = 0;index2 < height; index2++)
        {
colorModel= newBufferedImage!.getColorModel();
    
dataElements= newBufferedImage!.getRaster()!.getDataElements(index, index2, 
                            nullptr);
    
ax= colorModel!.getAlpha(dataElements);
    
rx= colorModel!.getRed(dataElements);
    
gx= colorModel!.getGreen(dataElements);
    
bx= colorModel!.getBlue(dataElements);
    

                        if(rx != 0 || gx != 0 || bx != 0)
                        
                                    {
                                    newBufferedImage!.setRGB(index, index2, (ax<<24) | (r<<16) | (g<<8) | (b));
    

                                    }
                                
}

}

}


    public changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){

    newBufferedImage: BufferedImage = this.imageUtil!.getBufferedImage(image)!;;
    

    MAX: float = 255;;
    

    r: float = (basicColor!.red) /MAX;;
    

    g: float = (basicColor!.green) /MAX;;
    

    b: float = (basicColor!.blue) /MAX;;
    

    width: int32_t = image.getWidth()!;;
    

    height: int32_t = image.getHeight()!;;
    

    colorModel: ColorModel;;
    

    dataElements: any;;
    

    ax: int32_t= 0;;
    

    rx: int32_t= 0;;
    

    gx: int32_t= 0;;
    

    bx: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < width; index++)
        {




                        for (
    index2: int32_t = 0;index2 < height; index2++)
        {
colorModel= newBufferedImage!.getColorModel();
    
dataElements= newBufferedImage!.getRaster()!.getDataElements(index, index2, 
                            nullptr);
    
ax= colorModel!.getAlpha(dataElements);
    
rx= colorModel!.getRed(dataElements);
    
gx= colorModel!.getGreen(dataElements);
    
bx= colorModel!.getBlue(dataElements);
    
rx *= r;
    
gx *= g;
    
bx *= b;
    
newBufferedImage!.setRGB(index, index2, (ax<<24) | (rx<<16) | (gx<<8) | (bx));
    
}

}

}


    public setAlpha(Image unusedOriginalImage, Image image, int32_t imageIndex, int32_t alphaInt){

    alpha: int8_t = alphaInt;;
    

    newBufferedImage: BufferedImage = this.imageUtil!.getBufferedImage(image)!;;
    

    width: int32_t = image.getWidth()!;;
    

    height: int32_t = image.getHeight()!;;
    

    raster: WritableRaster = newBufferedImage!.getAlphaRaster()!;;
    




                        for (
    index: int32_t = 0;index < width; index++)
        {




                        for (
    index2: int32_t = 0;index2 < height; index2++)
        {
raster.getPixel(index, index2, this.colorArray);
    
this.colorArray[0]= alpha&this.colorArray[0];
    
raster.setPixel(index, index2, this.colorArray);
    
}

}

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
    

    image: Image = ImageCreationUtil.getInstance()!.createImageWH(originalImage!.getWidth(), originalImage!.getHeight())!;;
    
image.getGraphics()!.drawImage(originalImage, 0, 0, Anchor.TOP_LEFT);
    
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

            

