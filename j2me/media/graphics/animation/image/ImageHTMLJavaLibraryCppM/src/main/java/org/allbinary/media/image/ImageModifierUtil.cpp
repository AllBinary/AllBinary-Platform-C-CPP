
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
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/CanvasImage.h>

      
#include <playn/core/CanvasSurface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageModifierUtil
            : public Object
         {

    private: static ImageModifierUtil instance() { return ImageModifierUtil(); }

    public: static ImageModifierUtil getInstanceOrCreate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageModifierUtil::instance();
    
}


    public: void setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){
}


    public: void changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){
}


    public: void setAlpha(Image originalImage, Image image, int32_t imageIndex, int32_t alphaInt){
}


    public: std::vector<Image> getImageArray(std::vector<Image> originalImageArray){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImageArray;
    
}


    public: void handleImage(std::vector<Image> imageArray, int32_t index, Image image){
}


    public: void reset(){
}


};

            

