
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullImage.h"
#include "Image.h"
#include "Graphics.h"
//PlatformNullImageJavaLibrary
class PlatformImage
            : public Object
         {
        

    public any getImage(any = {} graphicsSurface2){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage.NULL_IMAGE;
    
}


    public int32_t getSurfaceWidth(any = {} graphicsSurface2, int32_t width){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return width;
    
}


    public int32_t getSurfaceHeight(any = {} graphicsSurface2, int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return height;
    
}


    public int32_t getWidth(Image image, int32_t width){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return width;
    
}


    public int32_t getHeight(Image image, int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return height;
    
}


    public javax.microedition.lcdui.Graphics getGraphics(any = {} graphicsSurface, int32_t width, int32_t height, Image image){



                            throw new RuntimeException();
                    
}


    public drawImage(Image image, int32_t x, int32_t y, int32_t anchor, javax.microedition.lcdui.Graphics g2, any = {} g){
}


    public drawRegion(Image image, int32_t x_src, int32_t y_src, int32_t width, int32_t height, int32_t transform, int32_t x_dst, int32_t y_dst, int32_t anchor, javax.microedition.lcdui.Graphics g){
}


    public getRGB(std::vector<int32_t> argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image image){
}


    public setRGB(std::vector<int32_t> argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image image){
}


    public std::vector<int32_t> getData(Image image){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_INT_ARRAY;
    
}


};

            

