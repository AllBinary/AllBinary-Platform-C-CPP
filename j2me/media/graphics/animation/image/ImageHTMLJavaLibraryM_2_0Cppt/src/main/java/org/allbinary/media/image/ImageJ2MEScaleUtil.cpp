
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2023 AllBinary
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
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/ImageImpl.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageJ2MEScaleUtil
            : public Object
         {
        

    private: static const instance: ImageJ2MEScaleUtil = new ImageJ2MEScaleUtil();

    public static ImageJ2MEScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2MEScaleUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public std::vector<Image> scaleArray(std::vector<Image> images, int32_t width, int32_t height){

    scaledImages: std::vector<Image> = new Array(images.length);;
    




                        for (
    index: int32_t = images.length
                ;--index >= 0; )
        {
scaledImages[index]= this.scale(images[index]!, width, height);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImages;
    
}


                //@Throws(Exception.constructor)
            
    public Image scale(Image image, int32_t width, int32_t height){

    originalPlayNImage: playn.core.Image = 
                null
            ;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    originalHTMLImage: PlaynMutableImage = image as PlaynMutableImage;;
    
originalPlayNImage= originalHTMLImage!.getImage() as playn.core.Image;
    

                                    }
                                
                        else {
                            
    originalHTMLImage: PlaynImmutableImage = image as PlaynImmutableImage;;
    
originalPlayNImage= originalHTMLImage!.getImage() as playn.core.Image;
    

                        }
                            

    scaledImage: Image = Image.createImageWH(width, height)!;;
    

    htmlImage: PlaynMutableImage = scaledImage as PlaynMutableImage;;
    

    canvasImage: ImageImpl = htmlImage!.getImage() as ImageImpl;;
    
canvasImage!.draw(originalPlayNImage, 0, 0, scaledImage!.getWidth(), scaledImage!.getHeight(), 0, 0, image.getWidth(), image.getHeight());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    
}


};

            

