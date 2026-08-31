
        /* Generated Code Do Not Modify */
        



#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/DisposalUtil.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/microemu/device/swt/SwtImmutableImage.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLBitmap: public PlatformBitmapBase {
        

    public const image: Image;

public constructor (any = {} bitmap){

            super();
        this.image= bitmap as Image;
    
}


    public Image getImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.image;
    
}


    public int32_t getDepth(){

                        if(this.image.isMutable())
                        
                                    {
                                    
    mutableImage: SwtMutableImage = this.image as SwtMutableImage;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return mutableImage!.getDepth();;
    

                                    }
                                
                        else {
                            
    immutableImage: SwtImmutableImage = this.image as SwtImmutableImage;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return immutableImage!.getDepth();;
    

                        }
                            
}


    public getPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height){

                        if(this.image.isMutable())
                        
                                    {
                                    
    mutableImage: SwtMutableImage = this.image as SwtMutableImage;;
    
mutableImage!.getRGB(pixels, offset, stride, x, y, width, height);
    

                                    }
                                
                        else {
                            
    immutableImage: SwtImmutableImage = this.image as SwtImmutableImage;;
    
immutableImage!.getRGB(pixels, offset, stride, x, y, width, height);
    

                        }
                            
}


    public setPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height){
this.image.setRGB2(pixels, offset, height, x, y, width, height);
    
}


    public int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.image.getWidth();;
    
}


    public int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.image.getHeight();;
    
}


    public recycle(){
DisposalUtil.getInstance()!.disposeImage(this.image);
    
}


};

            

