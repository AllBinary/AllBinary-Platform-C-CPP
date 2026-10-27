
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/Canvas.h>

      
#include <playn/core/CoreImage.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/html/HTMLPlaynUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCreationUtil.h"

class ImageScaleUtil
            : public Object
         {

    private: static ImageScaleUtil* instance() { static std::unique_ptr<ImageScaleUtil> value(new ImageScaleUtil()); return value.get(); }

    public: static ImageScaleUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageScaleUtil::instance();
    
}


    private: HTMLPlaynUtil* playnUtil = HTMLPlaynUtil::getInstance();

private: ImageScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    public: Image* createImage2(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage3(imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);;
    
}


                //@Throws(Exception.constructor)
            
    public: Image* createImage3(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable_){

    float scaleX = scaleNominatorX /scaleDenominatorX;;
    

    float scaleY = scaleNominatorY /scaleDenominatorY;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage(imageCache, originalImage, scaleX, scaleY, cached);;
    
}


                //@Throws(Exception.constructor)
            
    public: Image* createImage(ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, bool cached){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImageInternal(originalImage, scaleX, scaleY);;
    
}


                //@Throws(Exception.constructor)
            
    public: Image* createImageInternal(Image* originalImage, float scaleX, float scaleY){

    Image* image = ImageCreationUtil::getInstance()->createImageWH(static_cast<int32_t>((originalImage->getWidth() *scaleX)), static_cast<int32_t>((originalImage->getHeight() *scaleY)));;
    

                        if(image->isMutable())
                        
                                    {
                                    
    CoreImage* originalPlayNImage = 
                null
            ;;
    

                        if(originalImage->isMutable())
                        
                                    {
                                    
    PlaynMutableImage* originalHTMLImage = dynamic_cast<PlaynMutableImage*>(originalImage);;
    
originalPlayNImage= dynamic_cast<CoreImage*>(originalHTMLImage->getImage());
    

                                    }
                                
                        else {
                            
    PlaynImmutableImage* originalHTMLImage = dynamic_cast<PlaynImmutableImage*>(originalImage);;
    
originalPlayNImage= dynamic_cast<CoreImage*>(originalHTMLImage->getImage());
    

                        }
                            

    PlaynMutableImage* htmlImage = dynamic_cast<PlaynMutableImage*>(image);;
    

    ImageImpl* canvasImage = dynamic_cast<ImageImpl*>(htmlImage->getImage());;
    

    Canvas* canvas = this->playnUtil->getCanvas(canvasImage);;
    
canvas->drawScale(originalPlayNImage, 0, 0, image->getWidth(), image->getHeight(), 0, 0, originalImage->getWidth(), originalImage->getHeight());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Not Mutable");
                    

                        }
                            
}


};

            

