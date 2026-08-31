
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

    public static ImageModifierUtil getInstanceOrCreate();

    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

    public setBasicColorP(BasicColor basicColor);

    private: const colorArray: std::vector<int32_t> = new Array(1);

    public setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor);

    public changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor);

    public setAlpha(Image unusedOriginalImage, Image image, int32_t imageIndex, int32_t alphaInt);

    public std::vector<Image> getImageArray(std::vector<Image> originalImageArray);

    public handleImage(std::vector<Image> imageArray, int32_t index, Image image);

    public reset();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
