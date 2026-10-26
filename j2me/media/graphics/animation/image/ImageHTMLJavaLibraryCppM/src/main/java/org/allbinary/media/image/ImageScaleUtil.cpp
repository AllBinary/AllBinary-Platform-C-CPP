
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/CanvasImage.h>

      
#include <playn/core/CanvasSurface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCreationUtil.h"

class ImageScaleUtil
            : public Object
         {

    private: static ImageScaleUtil instance() { return ImageScaleUtil(); }

    public: static ImageScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageScaleUtil::instance();
    
}


private: ImageScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    public: Image createImage2(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage3(imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);;
    
}


                //@Throws(Exception.constructor)
            
    public: Image createImage3(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable){

    float scaleX = scaleNominatorX /scaleDenominatorX;;
    

    float scaleY = scaleNominatorY /scaleDenominatorY;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage(imageCache, originalImage, scaleX, scaleY, cached);;
    
}


                //@Throws(Exception.constructor)
            
    public: Image createImage(ImageCache imageCache, Image originalImage, float scaleX, float scaleY, bool cached){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImageInternal(originalImage, scaleX, scaleY);;
    
}


                //@Throws(Exception.constructor)
            
    public: Image createImageInternal(Image originalImage, float scaleX, float scaleY){

    Image image = ImageCreationUtil::getInstance().getInstance(static_cast<int32_t>((originalImage.getWidth() *scaleX)), static_cast<int32_t>((originalImage.getHeight() *scaleY)));;
    

                        if(image.isMutable())
                        
                                    {
                                    
    playn::core::Image originalPlayNImage = 
                null
            ;;
    

                        if(originalImage.isMutable())
                        
                                    {
                                    
    PlaynMutableImage originalHTMLImage = originalImage;;
    
originalPlayNImage= originalHTMLImage.getImage();
    

                                    }
                                
                        else {
                            
    PlaynImmutableImage originalHTMLImage = originalImage;;
    
originalPlayNImage= originalHTMLImage.getImage();
    

                        }
                            

    PlaynMutableImage htmlImage = image;;
    

    CanvasImage canvasImage = htmlImage.getImage();;
    

    CanvasSurface canvasSurface = htmlImage.getCanvasSurface(canvasImage);;
    
canvasSurface.drawImage(originalPlayNImage, 0, 0, image.getWidth(), image.getHeight(), 0, 0, originalPlayNImage.width(), originalPlayNImage.height());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Mutable");
                    

                        }
                            
}


};

            

