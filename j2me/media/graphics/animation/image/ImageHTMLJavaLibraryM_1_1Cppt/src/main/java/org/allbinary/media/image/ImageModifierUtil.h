
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
        
            #include "../../../../java/lang/Throwable.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/microemu/device/playn/PlaynImage.h>

      
#include <org/microemu/device/ResourceCallbackStrings.h>

      
#include <playn/core/Canvas.h>

      
#include <playn/core/CanvasImage.h>

      
#include <playn/core/util/Callback.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageModifierUtil
            : public Object
         {
        

    public static ImageModifierUtil getInstanceOrCreate();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const resourceCallbackStrings: ResourceCallbackStrings = ResourceCallbackStrings.getInstance()!;

    private: alphaArray: std::vector<bool>;

    public setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor);

    public changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor);

    public setAlpha(Image originalImage, Image image, int32_t imageIndex, int32_t alpha);

    public setAlphaF(Image originalImage, Image image, int32_t imageIndex, float alpha);

    public setAlpha2(Image originalImage, Image image, int32_t imageIndex, float alpha);

    public setAlpha3(Image image, float alpha);

    public std::vector<Image> getImageArray(std::vector<Image> originalImageArray);

    public handleImage(std::vector<Image> imageArray, int32_t index, Image image);

    public copy(std::vector<Image> imageArray, int32_t index, Image image, playn.core.Image image3);

    public reset();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
