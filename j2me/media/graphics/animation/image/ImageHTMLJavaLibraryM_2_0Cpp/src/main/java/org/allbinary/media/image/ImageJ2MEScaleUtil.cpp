
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/Canvas.h>

      
#include <playn/core/CoreImage.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/core/PlayN.h>

      
#include <playn/html/HtmlGraphics.h>

      
#include <playn/html/HtmlImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageJ2MEScaleUtil
            : public Object
         {

    private: static ImageJ2MEScaleUtil* instance() { static std::unique_ptr<ImageJ2MEScaleUtil> value(new ImageJ2MEScaleUtil()); return value.get(); }

    public: static ImageJ2MEScaleUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2MEScaleUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: ImageJ2MEScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::vector<Image*> scaleArray(std::vector<Image*> images, int32_t width, int32_t height){

    std::vector<Image*> scaledImages = std::vector<Image*>(images.length);;
    




                        for (
    int32_t index = images.size();--index >= 0; )
        {
scaledImages[index]= this->scale(images[index], width, height);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImages;
    
}


                //@Throws(Exception.constructor)
            
    public: Image* scale(Image* image, int32_t width, int32_t height){

    CoreImage* originalPlayNImage = 
                null
            ;;
    

                        if(image->isMutable())
                        
                                    {
                                    
    PlaynMutableImage* originalHTMLImage = dynamic_cast<PlaynMutableImage*>(image);;
    
originalPlayNImage= dynamic_cast<CoreImage*>(originalHTMLImage->getImage());
    

                                    }
                                
                        else {
                            
    PlaynImmutableImage* originalHTMLImage = dynamic_cast<PlaynImmutableImage*>(image);;
    
originalPlayNImage= dynamic_cast<CoreImage*>(originalHTMLImage->getImage());
    

                        }
                            

    Image* scaledImage = Image::createImageWH(width, height);;
    

    PlaynMutableImage* htmlImage = dynamic_cast<PlaynMutableImage*>(scaledImage);;
    

    ImageImpl* scaledPlayNImage = dynamic_cast<ImageImpl*>(htmlImage->getImage());;
    

    Canvas* canvas = (graphics)).get(dynamic_cast<HtmlImage*>(scaledPlayNImage));;
    
originalPlayNImage = dynamic_cast<ImageImpl*>(originalPlayNImageoriginalPlayNImage)
originalPlayNImage.
                    draw(canvas->gc(), 0, 0, scaledImage->getWidth(), scaledImage->getHeight(), 0, 0, image->getWidth(), image->getHeight());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    
}


};

            

