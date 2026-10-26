
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

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/eclipse/swt/graphics/GC.h>

      
#include <org/microemu/device/swt/SwtImmutableImage.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageSwtRotationUtil.h"

class ImageRotationUtil
            : public Object
         {

    private: static ImageRotationUtil instance() { return ImageRotationUtil(); }

    public: static ImageRotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageRotationUtil::instance();
    
}


    private: const ImageSwtRotationUtil imageSwtRotationUtil = ImageSwtRotationUtil::getInstance();

private: ImageRotationUtil(){
}


    private: const Features features = Features::getInstance();

    public: void rotateImage(Image originalImage, Image image, int32_t totalAngle){

    Image originalImage2 = originalImage;;
    

                        if(this->features.isFeature(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    
                        if(image.getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage openGLESImage = (image);;
    
openGLESImage.openGLESImageProperties.angle= totalAngle;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            PreLogUtil::put("OpenGL but image is: " +image +" type: " +image.getType(), this, "rotateImage");
    

                        }
                            

                                    }
                                

    org::eclipse::swt::graphics::Image originalSwtImage = (originalImage2.getImage());;
    

    GC gc = 
                null
            ;;
    

    org::eclipse::swt::graphics::Image copySwtImage = 
                null
            ;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    SwtMutableImage swtImage = image;;
    
copySwtImage= swtImage.getImage();
    
gc= swtImage.getGc();
    
this->imageSwtRotationUtil.rotateImage(originalSwtImage, copySwtImage, gc, totalAngle);
    

                                    }
                                
                        else {
                            PreLogUtil::put("No rotation for: " +image.toString(), this, "rotateImage");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: Image createRotatedImage(Image originalImage, int32_t rotationInDegrees){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImage;
    
}


};

            

