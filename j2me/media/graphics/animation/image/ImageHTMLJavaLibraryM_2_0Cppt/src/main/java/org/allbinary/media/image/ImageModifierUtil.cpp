
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
        
class ImageModifierUtil
            : public Object
         {

    public: static ImageModifierUtil getInstanceOrCreate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageModifierUtil();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ResourceCallbackStrings resourceCallbackStrings = ResourceCallbackStrings::getInstance();

    private: const HTMLPlaynUtil playnUtil = HTMLPlaynUtil::getInstance();

    private: std::vector<bool> alphaArray;

    public: void setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){
}


    public: void changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){
}


    public: void setAlpha(Image originalImage, Image image, int32_t imageIndex, int32_t alpha){

    float alphaF = alpha;;
    

    float alphaFloat = alphaF /255;;
    
this->setAlphaF(originalImage, image, imageIndex, alphaFloat);
    
}


    public: void setAlphaF(Image originalImage, Image image, int32_t imageIndex, float alpha){

                        if(this->alphaArray[imageIndex])
                        
                                    {
                                    this->alphaArray[imageIndex]= false;
    
this->setAlpha2(originalImage, image, imageIndex, alpha);
    

                                    }
                                
}


    public: void setAlpha2(Image originalImage, Image image, int32_t imageIndex, float alpha){

    PlaynImage htmlImage = image;;
    

    ImageImpl canvasImage = htmlImage.getImage();;
    

    CoreImage originalPlaynImage = (originalImage).getImage();;
    

    Canvas canvas = this->playnUtil.getCanvas(canvasImage);;
    
canvas.clear();
    
canvas.setAlpha(alpha);
    
canvas.draw(originalPlaynImage, 0, 0);
    
}


    public: void setAlpha3(Image image, float alpha){

    float alphaF = alpha;;
    

    float alphaFloat = alphaF /255;;
    

    PlaynImage htmlImage = image;;
    

    ImageImpl canvasImage = htmlImage.getImage();;
    

    Canvas canvas = this->playnUtil.getCanvas(canvasImage);;
    
canvas.setAlpha(alphaFloat);
    
}


    public: std::vector<Image> getImageArray(std::vector<Image> originalImageArray){

    int32_t size = originalImageArray.size();;
    
this->alphaArray= std::vector<bool>(size);
    

    std::vector<Image> imageArray = std::vector<Image>(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
imageArray[index]= originalImageArray[index];
    
this->handleImage(imageArray, index, originalImageArray[index]);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageArray;
    
}


    public: void handleImage(std::vector<Image> imageArray, int32_t index, Image image){

    CoreImage image3 = (image).getImage();;
    

                        if(image3 != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(image3.isReady() || image3.width() +image3.height() <= 0 || image.getName() == this->resourceCallbackStrings.FROM_DATA)
                        
                                    {
                                    this->copy(imageArray, index, image, image3);
    

                                    }
                                
                        else {
                            
    Callback callback = class extends Callback
                                {
                                
    public: void onSuccess(Object* resource){

    LogUtil logUtil = LogUtil::getInstance();;
    
logUtil.putF(resourceCallbackStrings.DONE +image.getName(), this, resourceCallbackStrings.HANDLE_IMAGE);
    
copy(imageArray, index, image, image3);
    
}

    public: void onFailure(Throwable e){

    LogUtil logUtil = LogUtil::getInstance();;
    
logUtil.put(StringMaker().append(commonStrings.EXCEPTION_LABEL).append(resourceCallbackStrings.ERROR).append(image.getName()).toString(), this, resourceCallbackStrings.HANDLE_IMAGE, e);
    
}

                                }
                            ;;
    
image3.addCallback(callback);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil.putF(this->resourceCallbackStrings.NULL +image.isMutable(), this, this->resourceCallbackStrings.HANDLE_IMAGE);
    

                        }
                            
}


    public: void copy(std::vector<Image> imageArray, int32_t index, Image image, CoreImage image3){

        try {
            
    Image image2 = Image::createImageWH(static_cast<int32_t>(image3.width()), static_cast<int32_t>(image3.height()));;
    

    Graphics graphics = image2.getGraphics();;
    
graphics.drawImage(image, 0, 0, Anchor::TOP_LEFT);
    
imageArray[index]= image2;
    

                //: 
} catch(e) 
            {
this->logUtil.putF(this->commonStrings.EXCEPTION_LABEL +resourceCallbackStrings.DONE, this, resourceCallbackStrings.HANDLE_IMAGE);
    
}

}


    public: void reset(){

    int32_t size = this->alphaArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->alphaArray[index]= true;
    
}

}


};

            

