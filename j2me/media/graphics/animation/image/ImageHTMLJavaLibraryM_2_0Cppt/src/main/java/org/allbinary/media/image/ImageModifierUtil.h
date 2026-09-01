
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

            #include <vector>
        
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

      
#include <playn/core/Callback.h>

      
#include <playn/core/Canvas.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/core/PlayN.h>

      
#include <playn/html/HtmlGraphics.h>

      
#include <playn/html/HtmlImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageModifierUtil
            : public Object
         {

    public: static ImageModifierUtil getInstanceOrCreate();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ResourceCallbackStrings resourceCallbackStrings = ResourceCallbackStrings::getInstance();

    private: std::vector<bool> alphaArray;

    public: void setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor);

    public: void changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor);

    public: void setAlpha(Image originalImage, Image image, int32_t imageIndex, int32_t alpha);

    public: void setAlphaF(Image originalImage, Image image, int32_t imageIndex, float alpha);

    public: void setAlpha2(Image originalImage, Image image, int32_t imageIndex, float alpha);

    public: void setAlpha3(Image image, float alpha);

    public: std::vector<Image> getImageArray(std::vector<Image> originalImageArray);

    public: void handleImage(std::vector<Image> imageArray, int32_t index, Image image);

    public: void copy(std::vector<Image> imageArray, int32_t index, Image image, playn::core::Image image3);

    public: void reset();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
