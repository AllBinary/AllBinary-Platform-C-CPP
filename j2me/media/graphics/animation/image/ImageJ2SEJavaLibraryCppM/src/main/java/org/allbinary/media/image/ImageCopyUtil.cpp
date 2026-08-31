
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

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/microemu/device/j2se/J2SEImmutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "ImageCreationUtil.h"

class ImageCopyUtil
            : public Object
         {
        

    private: static const instance: ImageCopyUtil = new ImageCopyUtil();

    public static ImageCopyUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCopyUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

    private: const imageCreationUtil: ImageCreationUtil = ImageCreationUtil.getInstance()!;

private constructor (){

            super();
        }


    private: anchor: int32_t = Anchor.TOP_LEFT;

                //@Throws(Exception.constructor)
            
    public Image createImageForRotation(Image originalImage){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createImage(originalImage);;
    
}


                //@Throws(Exception.constructor)
            
    public Image createImage(Image originalImage){

    image: Image = this.imageCreationUtil!.createImageWH(originalImage!.getWidth(), originalImage!.getHeight())!;;
    

                        if(image.isMutable())
                        
                                    {
                                    image.getGraphics()!.drawImage(originalImage, 0, 0, this.anchor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Not Mutable");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public Image createImageScale(Image originalImage, float canvasScale, bool resize){

    newWidth: int32_t = static_cast<int32_t>((originalImage!.getWidth() *canvasScale));;
    

    newHeight: int32_t = static_cast<int32_t>((originalImage!.getHeight() *canvasScale));;
    

                        if(resize)
                        
                                    {
                                    
                        if(newWidth < newHeight)
                        
                                    {
                                    newWidth= newHeight;
    

                                    }
                                

                        if(newHeight < newWidth)
                        
                                    {
                                    newHeight= newWidth;
    

                                    }
                                

                                    }
                                

    originalBufferedImage: BufferedImage = this.imageUtil!.getBufferedImage(originalImage)!;;
    

    bufferedImage: BufferedImage = this.imageUtil!.createBufferedImageWithLargerCanvas(originalBufferedImage, newWidth, newHeight)!;;
    

    image: J2SEImmutableImage = new J2SEImmutableImage(bufferedImage);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


};

            

