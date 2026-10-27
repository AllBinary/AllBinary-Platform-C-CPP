
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <android/graphics/Bitmap.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLBitmap: public PlatformBitmapBase {

    public: Bitmap* bitmap;

public: OpenGLBitmap(Object* bitmap);

    public: void getPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);

    public: void setPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);

    public: int32_t getWidth();

    public: int32_t getHeight();

    public: void recycle();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
