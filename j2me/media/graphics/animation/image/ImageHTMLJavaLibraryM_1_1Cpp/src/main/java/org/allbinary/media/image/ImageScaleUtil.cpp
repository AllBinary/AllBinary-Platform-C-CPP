
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageScaleUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/CanvasImage.h>

      
#include <playn/core/CanvasSurface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCreationUtil.h"

auto ImageScaleUtil::instance_owner() -> ImageScaleUtil* { static std::unique_ptr<ImageScaleUtil> value(new ImageScaleUtil()); return value.get(); }
ImageScaleUtil* ImageScaleUtil::instance = ImageScaleUtil::instance_owner();

    auto ImageScaleUtil::getInstance() -> ImageScaleUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageScaleUtil::instance;
    
}


ImageScaleUtil::ImageScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    auto ImageScaleUtil::createImage2(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->createImage3(imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageScaleUtil::createImage3(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable_) -> Image*{

    float scaleX = scaleNominatorX /scaleDenominatorX;;
    

    float scaleY = scaleNominatorY /scaleDenominatorY;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->createImage(imageCache, originalImage, scaleX, scaleY, cached);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageScaleUtil::createImage(ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, bool cached) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->createImageInternal(originalImage, scaleX, scaleY);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageScaleUtil::createImageInternal(Image* originalImage, float scaleX, float scaleY) -> Image*{

    Image* image = ImageCreationUtil::getInstance()->createImageWH(static_cast<int32_t>((originalImage->getWidth() *scaleX)), static_cast<int32_t>((originalImage->getHeight() *scaleY)));;
    

                        if(image->isMutable())
                        
                                    {
                                    
    playn::core::Image* originalPlayNImage = 
                null
            ;;
    

                        if(originalImage->isMutable())
                        
                                    {
                                    
    PlaynMutableImage* originalHTMLImage = dynamic_cast<PlaynMutableImage*>(originalImage);;
    
originalPlayNImage= dynamic_cast<playn::core::Image*>(originalHTMLImage->getImage());
    

                                    }
                                
                        else {
                            
    PlaynImmutableImage* originalHTMLImage = dynamic_cast<PlaynImmutableImage*>(originalImage);;
    
originalPlayNImage= dynamic_cast<playn::core::Image*>(originalHTMLImage->getImage());
    

                        }
                            

    PlaynMutableImage* htmlImage = dynamic_cast<PlaynMutableImage*>(image);;
    

    CanvasImage* canvasImage = dynamic_cast<CanvasImage*>(htmlImage->getImage());;
    

    CanvasSurface* canvasSurface = htmlImage->getCanvasSurface(canvasImage);;
    
canvasSurface->drawImage(originalPlayNImage, 0, 0, image->getWidth(), image->getHeight(), 0, 0, originalImage->getWidth(), originalImage->getHeight());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Mutable");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_CPP
