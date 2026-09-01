
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Math.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/CanvasImage.h>

      
#include <playn/core/CanvasSurface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCreationUtil.h"

class ImageRotationUtil
            : public Object
         {

    private: static ImageRotationUtil instance() { return ImageRotationUtil(); }

    public: static ImageRotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageRotationUtil::instance();
    
}


private: ImageRotationUtil(){
}


                //@Throws(Exception.constructor)
            
    public: Image createRotatedImage(Image originalImage, int32_t rotationInDegrees){

    Image image = ImageCreationUtil::getInstance().getInstance(originalImage.getWidth(), originalImage.getHeight());;
    

                        if(image.isMutable())
                        
                                    {
                                    
    playn::core::Image originalPlayNImage = 
                null
            ;;
    

                        if(originalImage.isMutable())
                        
                                    {
                                    
    PlaynMutableImage originalHTMLImage = originalImage as PlaynMutableImage;;
    
originalPlayNImage= originalHTMLImage.getImage() as playn::core::Image;
    

                                    }
                                
                        else {
                            
    PlaynImmutableImage originalHTMLImage = originalImage as PlaynImmutableImage;;
    
originalPlayNImage= originalHTMLImage.getImage() as playn::core::Image;
    

                        }
                            

    PlaynMutableImage htmlImage = image as PlaynMutableImage;;
    

    CanvasImage canvasImage = htmlImage.getImage() as CanvasImage;;
    

    CanvasSurface canvasSurface = htmlImage.getCanvasSurface(canvasImage);;
    
canvasSurface.translate(originalPlayNImage.width() /2, originalPlayNImage.height() /2);
    
canvasSurface.rotate(Math::toRadians(rotationInDegrees));
    
canvasSurface.drawImage(originalPlayNImage,  -originalPlayNImage.width() /2,  -originalPlayNImage.height() /2);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Mutable");
                    

                        }
                            
}


};

            

