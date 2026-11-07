
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageModifierUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
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

      
#include <playn/core/CoreImage.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/html/HTMLPlaynUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //#include "org/allbinary/media/image/ImageCopyCallback.h"


ImageModifierUtil::ImageModifierUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), resourceCallbackStrings(ResourceCallbackStrings::getInstance()), playnUtil(HTMLPlaynUtil::getInstance()) {
        }
        
    auto ImageModifierUtil::getInstanceOrCreate() -> ImageModifierUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ImageModifierUtil();
    
}


    auto ImageModifierUtil::setColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) -> void{
}


    auto ImageModifierUtil::changeColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) -> void{
}


    auto ImageModifierUtil::setAlpha(Image* originalImage, Image* image, int32_t imageIndex, int32_t alpha) -> void{

    float alphaF = alpha;;
    

    float alphaFloat = alphaF /255;;
    
this->setAlphaF(originalImage, image, imageIndex, alphaFloat);
    
}


    auto ImageModifierUtil::setAlphaF(Image* originalImage, Image* image, int32_t imageIndex, float alpha) -> void{

                        if(this->alphaArray[imageIndex])
                        
                                    {
                                    this->alphaArray[imageIndex]= false;
    
this->setAlpha2(originalImage, image, imageIndex, alpha);
    

                                    }
                                
}


    auto ImageModifierUtil::setAlpha2(Image* originalImage, Image* image, int32_t imageIndex, float alpha) -> void{

    PlaynImage* htmlImage = dynamic_cast<PlaynImage*>(image);;
    

    ImageImpl* canvasImage = dynamic_cast<ImageImpl*>(htmlImage->getImage());;
    

    CoreImage* originalPlaynImage = dynamic_cast<CoreImage*>((originalImage)).getImage());;
    

    Canvas* canvas = this->playnUtil->getCanvas(canvasImage);;
    
canvas->clear();
    
canvas->setAlpha(alpha);
    
canvas->draw(originalPlaynImage, 0, 0);
    
}


    auto ImageModifierUtil::setAlpha3(Image* image, float alpha) -> void{

    float alphaF = alpha;;
    

    float alphaFloat = alphaF /255;;
    

    PlaynImage* htmlImage = dynamic_cast<PlaynImage*>(image);;
    

    ImageImpl* canvasImage = dynamic_cast<ImageImpl*>(htmlImage->getImage());;
    

    Canvas* canvas = this->playnUtil->getCanvas(canvasImage);;
    
canvas->setAlpha(alphaFloat);
    
}


    auto ImageModifierUtil::getImageArray(std::vector<Image*> originalImageArray) -> std::vector<Image*>{

    int32_t size = originalImageArray.size();;
    
this->alphaArray= std::vector<bool>(size);
    

    std::vector<Image*> imageArray = std::vector<Image*>(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
imageArray[index]= originalImageArray[index];
    
this->handleImage(imageArray, index, originalImageArray[index]);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return imageArray;
    
}


ImageModifierUtil::ImageCopyCallback::ImageCopyCallback(ImageModifierUtil* imageModifierUtil, std::vector<Image*> imageArray, int32_t index, Image* image, CoreImage* image3){
this->imageModifierUtil= imageModifierUtil;
    
this->imageArray= imageArray;
    
this->index= index;
    
this->image= image;
    
this->image3= image3;
    
}


    auto ImageModifierUtil::ImageCopyCallback::onSuccess(Object* resource) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    ResourceCallbackStrings* resourceCallbackStrings = this->imageModifierUtil->resourceCallbackStrings;;
    
logUtil->putF(resourceCallbackStrings->DONE +this->image->getName(), this, resourceCallbackStrings->HANDLE_IMAGE);
    
this->imageModifierUtil->copy(this->imageArray, this->index, this->image, this->image3);
    
}


    auto ImageModifierUtil::ImageCopyCallback::onFailure(Throwable* e) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    ResourceCallbackStrings* resourceCallbackStrings = this->imageModifierUtil->resourceCallbackStrings;;
    
logUtil->put(JavaString::valueOf((new StringMaker())->append(this->imageModifierUtil->commonStrings->EXCEPTION_LABEL)->append(resourceCallbackStrings->ERROR)->append(this->image->getName())), this, resourceCallbackStrings->HANDLE_IMAGE, e);
    
}


    auto ImageModifierUtil::handleImage(std::vector<Image*> imageArray, int32_t index, Image* image) -> void{

    CoreImage* image3 = dynamic_cast<CoreImage*>((image)).getImage());;
    

                        if(image3 != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(image3->isReady() || image3->width() +image3->height() <= 0 || image->getName() == this->resourceCallbackStrings->FROM_DATA)
                        
                                    {
                                    this->copy(imageArray, index, image, image3);
    

                                    }
                                
                        else {
                            
    Callback* callback = javaInner(new ImageCopyCallback(this, imageArray, index, image, image3), this);;
    
image3->addCallback(callback);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF(this->resourceCallbackStrings->NULL +image->isMutable(), this, this->resourceCallbackStrings->HANDLE_IMAGE);
    

                        }
                            
}


    auto ImageModifierUtil::copy(std::vector<Image*> imageArray, int32_t index, Image* image, CoreImage* image3) -> void{

        try {
            
    Image* image2 = Image::createImageWH(static_cast<int32_t>(image3->width()), static_cast<int32_t>(image3->height()));;
    

    Graphics* graphics = image2->getGraphics();;
    
graphics->drawImage(image, 0, 0, Anchor::TOP_LEFT);
    
imageArray[index]= image2;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->putF(this->commonStrings->EXCEPTION_LABEL +resourceCallbackStrings->DONE, this, resourceCallbackStrings->HANDLE_IMAGE);
    
}

}


    auto ImageModifierUtil::reset() -> void{

    int32_t size = this->alphaArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->alphaArray[index]= true;
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_CPP
