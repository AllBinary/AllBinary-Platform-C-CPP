
        /* Generated Code Do Not Modify */
        



#include <android/graphics/Bitmap.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLBitmap: public PlatformBitmapBase {
        

    public const bitmap: Bitmap;

public constructor (any = {} bitmap){

            super();
        this.bitmap= bitmap as Bitmap;
    
}


    public getPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height){
this.bitmap.getPixels(pixels, offset, stride, x, y, width, height);
    
}


    public setPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height){
this.bitmap.setPixels(pixels, offset, stride, x, y, width, height);
    
}


    public int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.bitmap.getWidth();;
    
}


    public int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.bitmap.getHeight();;
    
}


    public recycle(){
this.bitmap.recycle();
    
}


};

            

