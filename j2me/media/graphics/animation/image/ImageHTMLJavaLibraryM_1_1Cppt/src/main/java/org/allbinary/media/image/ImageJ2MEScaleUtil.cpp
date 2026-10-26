
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/CanvasImage.h>

      
#include <playn/core/CanvasSurface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageJ2MEScaleUtil
            : public Object
         {

    private: static ImageJ2MEScaleUtil instance() { return ImageJ2MEScaleUtil(); }

    public: static ImageJ2MEScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2MEScaleUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ImageJ2MEScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::vector<Image> scaleArray(std::vector<Image> images, int32_t width, int32_t height){

    std::vector<Image> scaledImages = std::vector<Image>(images.length);;
    




                        for (
    int32_t index = images.size();--index >= 0; )
        {
scaledImages[index]= this->scale(images[index], width, height);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImages;
    
}


                //@Throws(Exception.constructor)
            
    public: Image scale(Image image, int32_t width, int32_t height){

    playn::core::Image originalPlayNImage = 
                null
            ;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    PlaynMutableImage originalHTMLImage = image;;
    
originalPlayNImage= originalHTMLImage.getImage();
    

                                    }
                                
                        else {
                            
    PlaynImmutableImage originalHTMLImage = image;;
    
originalPlayNImage= originalHTMLImage.getImage();
    

                        }
                            

    Image scaledImage = Image::createImage(width, height);;
    

    PlaynMutableImage htmlImage = scaledImage;;
    

    CanvasImage canvasImage = htmlImage.getImage();;
    

    CanvasSurface canvasSurface = htmlImage.getCanvasSurface(canvasImage);;
    
canvasSurface.drawImage(originalPlayNImage, 0, 0, scaledImage.getWidth(), scaledImage.getHeight(), 0, 0, image.getWidth(), image.getHeight());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    
}


};

            

