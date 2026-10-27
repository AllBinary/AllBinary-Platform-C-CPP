
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
        
            #include "java/lang/Float.h"
        
#include <android/graphics/Bitmap.h>

      
#include <android/graphics/Canvas.h>

      
#include <android/graphics/Matrix.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ImageScaleUtil::instance_owner() -> ImageScaleUtil* { static std::unique_ptr<ImageScaleUtil> value(new ImageScaleUtil()); return value.get(); }
ImageScaleUtil* ImageScaleUtil::instance = ImageScaleUtil::instance_owner();

    auto ImageScaleUtil::getInstance() -> ImageScaleUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageScaleUtil::instance;
    
}


ImageScaleUtil::ImageScaleUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), anchor(Anchor::TOP_LEFT), imageBasicArrayList(new BasicArrayListD()), scaledImageBasicArrayList(new BasicArrayListD()), scaleXBasicArrayList(new BasicArrayListD()), scaleYBasicArrayList(new BasicArrayListD()){
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

    AndroidImageInterface* originalAndroidImage = dynamic_cast<AndroidImageInterface*>(originalImage);;
    

    Bitmap* originalBitmap = originalAndroidImage->getBitmap();;
    

    int32_t width = static_cast<int32_t>((originalBitmap->getWidth() *scaleX));;
    

    int32_t height = static_cast<int32_t>((originalBitmap->getHeight() *scaleY));;
    

    int32_t index = this->imageBasicArrayList->indexOf(originalImage);;
    

    bool alreadyAvailable = false;;
    

                        if(index >= 0)
                        
                                    {
                                    
    float scaleX2Float = this->scaleXBasicArrayList->get(index);;
    

    float scaleX2 = scaleX2Float;;
    

    float scaleY2Float = this->scaleYBasicArrayList->get(index);;
    

    float scaleY2 = scaleY2Float;;
    

                        if(scaleX2 == scaleX && scaleY2 == scaleY)
                        
                                    {
                                    alreadyAvailable= true;
    

                                    }
                                

                                    }
                                

                        if(alreadyAvailable)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Image*>(this->scaledImageBasicArrayList->get(index));
    

                                    }
                                
                        else {
                            
    Image* scaledImage = this->getScaledImage(imageCache, originalImage, scaleX, scaleY, width, height, cached);;
    
this->imageBasicArrayList->add(originalImage);
    
this->scaledImageBasicArrayList->add(scaledImage);
    
this->scaleXBasicArrayList->add(scaleX);
    
this->scaleYBasicArrayList->add(scaleY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto ImageScaleUtil::getScaledImage(ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, int32_t width, int32_t height, bool cached) -> Image*{

    Image* image = NullImage::NULL_IMAGE;;
    

                        if(cached)
                        
                                    {
                                    image= imageCache->get(this->getClass()->getName(), width, height);
    

                                    }
                                
                        else {
                            image= imageCache->get(this->commonStrings->CREATE_IMAGE, width, height);
    

                        }
                            

                        if(image->isMutable())
                        
                                    {
                                    
    Matrix* matrix = new Matrix();;
    
this->scale(image, matrix, scaleX, scaleY);
    
image->getGraphics()->drawImage(originalImage, 0, 0, this->anchor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Mutable");
                    

                        }
                            
}


    auto ImageScaleUtil::scale(Image* image, Matrix* matrix, float scaleX, float scaleY) -> void{
matrix->setScale(scaleX, scaleY);
    

    Canvas* canvas = (image)).getCanvas();;
    
canvas->concat(matrix);
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_CPP
