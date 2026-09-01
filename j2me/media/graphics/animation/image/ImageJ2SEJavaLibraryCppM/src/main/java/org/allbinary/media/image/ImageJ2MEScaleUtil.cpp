
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
        



            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageJ2MEScaleUtil
            : public Object
         {

    private: static ImageJ2MEScaleUtil instance() { return ImageJ2MEScaleUtil(); }

    public: static ImageJ2MEScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2MEScaleUtil::instance();
    
}


private: ImageJ2MEScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::vector<Image> scaleArray(std::vector<Image> images, int32_t width, int32_t height){

    std::vector<Image> scaledImages = new Array(images.length);;
    




                        for (
    int32_t index = images.size();--index >= 0; )
        {
scaledImages[index]= this->scale(images[index]!, width, height);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImages;
    
}


                //@Throws(Exception.constructor)
            
    public: Image scale(Image image, int32_t width, int32_t height){

    int32_t sourceWidth = image.getWidth();;
    

    int32_t sourceHeight = image.getHeight();;
    

    std::vector<int32_t> originalData = new Array(image.getWidth() *image.getHeight());;
    
image.getRGB(originalData, 0, image.getWidth(), 0, 0, image.getWidth(), image.getHeight());
    

    std::vector<int32_t> scaledData = new Array(width *height);;
    

    int32_t heightRatioFactor = (8 *sourceHeight) /height;;
    

    int32_t widthRatioFactor = (8 *sourceWidth) /width;;
    

    int32_t scaledIndex = scaledData.size() -1;;
    

    int32_t dx= 0;;
    

    int32_t dy= 0;;
    




                        for (
    int32_t index = height;--index >= 0; )
        {
dy= (index *heightRatioFactor)>>3;
    




                        for (
    int32_t index2 = width;--index2 >= 0; )
        {
dx= (index2 *widthRatioFactor)>>3;
    
scaledData[scaledIndex--]= originalData[(sourceWidth *dy) +dx]!;
    
}

}


    Image scaledImage = Image::createRGBImage(scaledData, width, height, true);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    
}


};

            

