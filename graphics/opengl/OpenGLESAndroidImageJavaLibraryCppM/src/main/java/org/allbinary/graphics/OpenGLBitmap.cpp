
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/OpenGLBitmap.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <android/graphics/Bitmap.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLBitmap::OpenGLBitmap(Object* bitmap){
this->bitmap= dynamic_cast<Bitmap*>(bitmap);
    
}


    auto OpenGLBitmap::getPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) -> void{
this->bitmap->getPixels(pixels, offset, stride, x, y, width, height);
    
}


    auto OpenGLBitmap::setPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) -> void{
this->bitmap->setPixels(pixels, offset, stride, x, y, width, height);
    
}


    auto OpenGLBitmap::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->bitmap->getWidth();;
    
}


    auto OpenGLBitmap::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->bitmap->getHeight();;
    
}


    auto OpenGLBitmap::recycle() -> void{
this->bitmap->recycle();
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_CPP
