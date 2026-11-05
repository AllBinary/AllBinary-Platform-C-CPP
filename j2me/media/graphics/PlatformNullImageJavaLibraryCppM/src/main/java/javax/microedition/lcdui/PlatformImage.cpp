
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
        



        #ifndef JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_CPP
        #define JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "javax/microedition/lcdui/PlatformImage.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/NullImage.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/Graphics.h"
//PlatformNullImageJavaLibrary

PlatformImage::PlatformImage() {
        }
        
    auto PlatformImage::getImage(Object* graphicsSurface2) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(NullImage::NULL_IMAGE);
    
}


    auto PlatformImage::getSurfaceWidth(Object* graphicsSurface2, int32_t width) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return width;
    
}


    auto PlatformImage::getSurfaceHeight(Object* graphicsSurface2, int32_t height) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return height;
    
}


    auto PlatformImage::getWidth(Image* image, int32_t width) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return width;
    
}


    auto PlatformImage::getHeight(Image* image, int32_t height) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return height;
    
}


    auto PlatformImage::getGraphics(Object* graphicsSurface, int32_t width, int32_t height, Image* image) -> Graphics*{



                            throw RuntimeException();
                    
}


    auto PlatformImage::drawImage(Image* image, int32_t x, int32_t y, int32_t anchor, Graphics* g2, Object* g) -> void{
}


    auto PlatformImage::drawRegion(Image* image, int32_t x_src, int32_t y_src, int32_t width, int32_t height, int32_t transform, int32_t x_dst, int32_t y_dst, int32_t anchor, Graphics* g) -> void{
}


    auto PlatformImage::getRGB(std::vector<int32_t> argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image* image) -> void{
}


    auto PlatformImage::setRGB(std::vector<int32_t> argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image* image) -> void{
}


    auto PlatformImage::getData(Image* image) -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullUtil::getInstance()->NULL_INT_ARRAY;
    
}




        #endif //JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_CPP
