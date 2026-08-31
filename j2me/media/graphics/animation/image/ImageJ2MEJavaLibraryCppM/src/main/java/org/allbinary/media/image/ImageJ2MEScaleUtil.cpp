
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2023 AllBinary
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageJ2MEScaleUtil
            : public Object
         {
        

    private: static const instance: ImageJ2MEScaleUtil = new ImageJ2MEScaleUtil();

    public static ImageJ2MEScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2MEScaleUtil.instance;
    
}


private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public std::vector<Image> scaleArray(std::vector<Image> images, int32_t width, int32_t height){

    scaledImages: std::vector<Image> = new Array(images.length);;
    




                        for (
    index: int32_t = images.length
                ;--index >= 0; )
        {
scaledImages[index]= this.scale(images[index]!, width, height);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImages;
    
}


                //@Throws(Exception.constructor)
            
    public Image scale(Image image, int32_t width, int32_t height){

    sourceWidth: int32_t = image.getWidth()!;;
    

    sourceHeight: int32_t = image.getHeight()!;;
    

    originalData: std::vector<int32_t> = new Array(image.getWidth() *image.getHeight());;
    
image.getRGB(originalData, 0, image.getWidth(), 0, 0, image.getWidth(), image.getHeight());
    

    scaledData: std::vector<int32_t> = new Array(width *height);;
    

    heightRatioFactor: int32_t = (8 *sourceHeight) /height;;
    

    widthRatioFactor: int32_t = (8 *sourceWidth) /width;;
    

    scaledIndex: int32_t = scaledData!.length -1;;
    

    dx: int32_t= 0;;
    

    dy: int32_t= 0;;
    




                        for (
    index: int32_t = height;--index >= 0; )
        {
dy= (index *heightRatioFactor)>>3;
    




                        for (
    index2: int32_t = width;--index2 >= 0; )
        {
dx= (index2 *widthRatioFactor)>>3;
    
scaledData[scaledIndex--]= originalData[(sourceWidth *dy) +dx]!;
    
}

}


    scaledImage: Image = Image.createRGBImage(scaledData, width, height, true)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    
}


};

            

