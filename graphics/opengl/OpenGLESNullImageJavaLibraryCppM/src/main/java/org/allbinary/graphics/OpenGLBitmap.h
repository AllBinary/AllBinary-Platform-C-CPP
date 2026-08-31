
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H

#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLBitmap: public PlatformBitmapBase {
        

    public const bitmap: any;

public constructor (any = {} bitmap);

    public getPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);

    public setPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);

    public recycle();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
