
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
        

    private: static const instance: ImageRotationUtil = new ImageRotationUtil();

    public static ImageRotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageRotationUtil.instance;
    
}


    private: const imageJ2SERotationUtil: ImageJ2SERotationUtil = ImageJ2SERotationUtil.getInstance()!;

private constructor (){

            super();
        }


    public rotateImage(Image originalImage, Image image, int32_t totalAngle){

                        if(image.isMutable())
                        
                                    {
                                    
    j2seImage: J2SEMutableImage = image as J2SEMutableImage;;
    

    newBufferedImage: BufferedImage = j2seImage!.getImage() as BufferedImage;;
    

    originalAwtImage: java.awt.Image = 
                null
            ;;
    

                        if(originalImage!.isMutable())
                        
                                    {
                                    
    originalJ2SEImage: J2SEMutableImage = originalImage as J2SEMutableImage;;
    
originalAwtImage= originalJ2SEImage!.getImage() as java.awt.Image;
    

                                    }
                                
                        else {
                            
    originalJ2SEImage: J2SEImmutableImage = originalImage as J2SEImmutableImage;;
    
originalAwtImage= originalJ2SEImage!.getImage() as java.awt.Image;
    

                        }
                            
this.imageJ2SERotationUtil!.rotateImage(originalAwtImage, newBufferedImage, totalAngle);
    

                                    }
                                
                        else {
                            PreLogUtil.putOE("Not Mutable", this, "getRotatedImage", new Exception());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public Image createRotatedImage(Image originalImage, int32_t rotationInDegrees){

    image: Image = ImageCreationUtil.getInstance()!.createImageWH(originalImage!.getWidth(), originalImage!.getHeight())!;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    originalAwtImage: java.awt.Image = 
                null
            ;;
    

                        if(originalImage!.isMutable())
                        
                                    {
                                    
    originalJ2SEImage: J2SEMutableImage = originalImage as J2SEMutableImage;;
    
originalAwtImage= originalJ2SEImage!.getImage() as java.awt.Image;
    

                                    }
                                
                        else {
                            
    originalJ2SEImage: J2SEImmutableImage = originalImage as J2SEImmutableImage;;
    
originalAwtImage= originalJ2SEImage!.getImage() as java.awt.Image;
    

                        }
                            

    j2seImage: J2SEMutableImage = image as J2SEMutableImage;;
    

    newBufferedImage: BufferedImage = j2seImage!.getImage() as BufferedImage;;
    

    bufferedImage: BufferedImage = this.imageJ2SERotationUtil!.createRotatedImage(originalAwtImage, newBufferedImage, rotationInDegrees)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Not Mutable");
                    

                        }
                            
}


};

            

