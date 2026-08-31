
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/CanvasImage.h>

      
#include <playn/core/CanvasSurface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageModifierUtil
            : public Object
         {
        

    private: static const instance: ImageModifierUtil = new ImageModifierUtil();

    public static ImageModifierUtil getInstanceOrCreate();

    public setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor);

    public changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor);

    public setAlpha(Image originalImage, Image image, int32_t imageIndex, int32_t alphaInt);

    public std::vector<Image> getImageArray(std::vector<Image> originalImageArray);

    public handleImage(std::vector<Image> imageArray, int32_t index, Image image);

    public reset();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
