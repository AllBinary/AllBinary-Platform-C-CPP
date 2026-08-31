
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H

#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/DisposalUtil.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/microemu/device/swt/SwtImmutableImage.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLBitmap: public PlatformBitmapBase {
        

    public const image: Image;

public constructor (any = {} bitmap);

    public Image getImage();

    public int32_t getDepth();

    public getPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);

    public setPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);

    public int32_t getWidth();

    public int32_t getHeight();

    public recycle();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
