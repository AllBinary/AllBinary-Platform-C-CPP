
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Bitmap;
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H_COMPLETE
        #if __has_include(<android/graphics/Bitmap.h>)
#include <android/graphics/Bitmap.h>
#endif
#if __has_include(<org/allbinary/platform/graphics/PlatformBitmapBase.h>)
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>
#endif

        #endif
    
