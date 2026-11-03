
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
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/DisposalUtil.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/microemu/device/swt/SwtImmutableImage.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLBitmap::OpenGLBitmap(Object* bitmap){
this->image= dynamic_cast<Image*>(bitmap);
    
}


    auto OpenGLBitmap::getImage() -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->image;
    
}


    auto OpenGLBitmap::getDepth() -> int32_t{

                        if(this->image->isMutable())
                        
                                    {
                                    
    SwtMutableImage* mutableImage = dynamic_cast<SwtMutableImage*>(this->image);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return mutableImage->getDepth();;
    

                                    }
                                
                        else {
                            
    SwtImmutableImage* immutableImage = dynamic_cast<SwtImmutableImage*>(this->image);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return immutableImage->getDepth();;
    

                        }
                            
}


    auto OpenGLBitmap::getPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) -> void{

                        if(this->image->isMutable())
                        
                                    {
                                    
    SwtMutableImage* mutableImage = dynamic_cast<SwtMutableImage*>(this->image);;
    
mutableImage->getRGB(pixels, offset, stride, x, y, width, height);
    

                                    }
                                
                        else {
                            
    SwtImmutableImage* immutableImage = dynamic_cast<SwtImmutableImage*>(this->image);;
    
immutableImage->getRGB(pixels, offset, stride, x, y, width, height);
    

                        }
                            
}


    auto OpenGLBitmap::setPixels(std::vector<int32_t> pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) -> void{
this->image->setRGB2(pixels, offset, height, x, y, width, height);
    
}


    auto OpenGLBitmap::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->image->getWidth();;
    
}


    auto OpenGLBitmap::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->image->getHeight();;
    
}


    auto OpenGLBitmap::recycle() -> void{
DisposalUtil::getInstance()->disposeImage(this->image);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_CPP
