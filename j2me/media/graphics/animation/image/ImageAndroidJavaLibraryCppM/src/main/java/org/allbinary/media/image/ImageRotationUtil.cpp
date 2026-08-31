
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
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <android/graphics/Bitmap.h>

      
#include <android/graphics/Canvas.h>

      
#include <android/graphics/Matrix.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCreationUtil.h"

class ImageRotationUtil
            : public Object
         {
        

    private: static const instance: ImageRotationUtil = new ImageRotationUtil();

    public static ImageRotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageRotationUtil.instance;
    
}


    private: const matrix: Matrix = new Matrix();

private constructor (){

            super();
        }


    private: anchor: int32_t = Anchor.TOP_LEFT;

                //@Throws(Exception.constructor)
            
    public Image createRotatedImage(Image originalImage, int32_t rotationInDegrees){

    image: Image = ImageCreationUtil.getInstance()!.createImageWH(originalImage!.getWidth(), originalImage!.getHeight())!;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    bitmap: Bitmap = (image as AndroidImageInterface).getBitmap()!;;
    

    width: int32_t = bitmap.getWidth()!;;
    

    height: int32_t = bitmap.getHeight()!;;
    
this.matrix.setRotate(rotationInDegrees, (width>>1), (height>>1));
    

    canvas: Canvas = (image as AndroidImageInterface).getCanvas()!;;
    
canvas.concat(this.matrix);
    
image.getGraphics()!.drawImage(originalImage, 0, 0, this.anchor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Not Mutable");
                    

                        }
                            
}


};

            

