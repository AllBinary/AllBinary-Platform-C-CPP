
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
        
#include <java/awt/image/BufferedImage.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/microemu/device/j2se/J2SEImmutableImage.h>

      
#include <org/microemu/device/j2se/J2SEMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageJ2SERotationUtil.h"
#include "ImageCreationUtil.h"

class ImageRotationUtil
            : public Object
         {

    private: static ImageRotationUtil instance() { return ImageRotationUtil(); }

    public: static ImageRotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageRotationUtil::instance();
    
}


    private: const ImageJ2SERotationUtil imageJ2SERotationUtil = ImageJ2SERotationUtil::getInstance();

private: ImageRotationUtil(){
}


    public: void rotateImage(Image originalImage, Image image, int32_t totalAngle){

                        if(image.isMutable())
                        
                                    {
                                    
    J2SEMutableImage j2seImage = image;;
    

    BufferedImage newBufferedImage = j2seImage.getImage();;
    

    java::awt::Image originalAwtImage = 
                null
            ;;
    

                        if(originalImage.isMutable())
                        
                                    {
                                    
    J2SEMutableImage originalJ2SEImage = originalImage;;
    
originalAwtImage= originalJ2SEImage.getImage();
    

                                    }
                                
                        else {
                            
    J2SEImmutableImage originalJ2SEImage = originalImage;;
    
originalAwtImage= originalJ2SEImage.getImage();
    

                        }
                            
this->imageJ2SERotationUtil.rotateImage(originalAwtImage, newBufferedImage, totalAngle);
    

                                    }
                                
                        else {
                            PreLogUtil::putOE("Not Mutable", this, "getRotatedImage", Exception());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: Image createRotatedImage(Image originalImage, int32_t rotationInDegrees){

    Image image = ImageCreationUtil::getInstance().createImageWH(originalImage.getWidth(), originalImage.getHeight());;
    

                        if(image.isMutable())
                        
                                    {
                                    
    java::awt::Image originalAwtImage = 
                null
            ;;
    

                        if(originalImage.isMutable())
                        
                                    {
                                    
    J2SEMutableImage originalJ2SEImage = originalImage;;
    
originalAwtImage= originalJ2SEImage.getImage();
    

                                    }
                                
                        else {
                            
    J2SEImmutableImage originalJ2SEImage = originalImage;;
    
originalAwtImage= originalJ2SEImage.getImage();
    

                        }
                            

    J2SEMutableImage j2seImage = image;;
    

    BufferedImage newBufferedImage = j2seImage.getImage();;
    

    BufferedImage bufferedImage = this->imageJ2SERotationUtil.createRotatedImage(originalAwtImage, newBufferedImage, rotationInDegrees);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Mutable");
                    

                        }
                            
}


};

            

