
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageRotationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/CanvasImage.h>

      
#include <playn/core/CanvasSurface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCreationUtil.h"

auto ImageRotationUtil::instance_owner() -> ImageRotationUtil* { static std::unique_ptr<ImageRotationUtil> value(new ImageRotationUtil()); return value.get(); }
ImageRotationUtil* ImageRotationUtil::instance = ImageRotationUtil::instance_owner();

    auto ImageRotationUtil::getInstance() -> ImageRotationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageRotationUtil::instance;
    
}


ImageRotationUtil::ImageRotationUtil(){
}


    auto ImageRotationUtil::rotateImage(Image* originalImage, Image* image, int32_t totalAngle) -> Image*{

                        if(image->isMutable())
                        
                                    {
                                    
    PlaynMutableImage* htmlImage = dynamic_cast<PlaynMutableImage*>(image);;
    

    CanvasImage* canvasImage = dynamic_cast<CanvasImage*>(htmlImage->getImage());;
    

    CanvasSurface* canvasSurface = htmlImage->getCanvasSurface(canvasImage);;
    
canvasSurface->translate(originalImage->getWidth() /2, originalImage->getHeight() /2);
    

    Image* image2 = this->rotateImageCanvasSurface(originalImage, image, canvasSurface, totalAngle);;
    
this->drawImage(originalImage, image, canvasSurface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image2;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    auto ImageRotationUtil::rotateImageCanvasSurfaceClear(Image* originalImage, Image* image, CanvasSurface* canvasSurface, int32_t totalAngle) -> Image*{

                        if(image->isMutable())
                        
                                    {
                                    canvasSurface->translate( -originalImage->getWidth() /2,  -originalImage->getHeight() /2);
    
canvasSurface->clear();
    
canvasSurface->translate(originalImage->getWidth() /2, originalImage->getHeight() /2);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rotateImageCanvasSurface(originalImage, image, canvasSurface, totalAngle);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    auto ImageRotationUtil::rotateImageCanvasSurface(Image* originalImage, Image* image, CanvasSurface* canvasSurface, int32_t totalAngle) -> Image*{

                        if(image->isMutable())
                        
                                    {
                                    canvasSurface->rotate(Math::toRadians(totalAngle));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    auto ImageRotationUtil::drawImage(Image* originalImage, Image* image, CanvasSurface* canvasSurface) -> void{

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
                            
canvasSurface->drawImage(originalPlayNImage,  -originalImage->getWidth() /2,  -originalImage->getHeight() /2);
    
}


                //@Throws(Exception.constructor)
            
    auto ImageRotationUtil::createRotatedImage(Image* originalImage, int32_t rotationInDegrees) -> Image*{

    Image* image = ImageCreationUtil::getInstance()->createImageWH(originalImage->getWidth(), originalImage->getHeight());;
    

    Image* rotatedImage = this->rotateImage(originalImage, image, rotationInDegrees);;
    

                        if(rotatedImage == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Not Mutable");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rotatedImage;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_CPP
