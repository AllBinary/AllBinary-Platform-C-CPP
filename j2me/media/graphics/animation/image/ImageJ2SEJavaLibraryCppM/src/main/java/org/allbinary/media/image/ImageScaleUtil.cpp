
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
        



            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/awt/Graphics2D.h>

      
#include <java/awt/geom/AffineTransform.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/ImageCache.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "ImageJ2SEUtil.h"
#include "ImageCreationUtil.h"

class ImageScaleUtil
            : public Object
         {

    private: static ImageScaleUtil instance() { return ImageScaleUtil(); }

    public: static ImageScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageScaleUtil::instance();
    
}


    private: const ImageUtil imageUtil = ImageUtil::getInstance();

    private: const ImageJ2SEUtil imageJ2SEUtil = ImageJ2SEUtil::getInstance();

    private: const ImageCreationUtil imageCreationUtil = ImageCreationUtil::getInstance();

private: ImageScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    public: Image createImage2(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage3(imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);;
    
}


                //@Throws(Exception.constructor)
            
    public: Image createImage3(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable){

    int32_t width = originalImage.getWidth();;
    

    int32_t height = originalImage.getHeight();;
    

    float scaleX = scaleNominatorX /scaleDenominatorX;;
    

    float scaleY = scaleNominatorY /scaleDenominatorY;;
    

    Image image;;
    

                        if(cached)
                        
                                    {
                                    image= imageCache.get(this->constructor.name.toString()!, static_cast<int32_t>((width *scaleX)), static_cast<int32_t>((height *scaleY)));
    

                                    }
                                
                        else {
                            image= imageCache.get("createImage", static_cast<int32_t>((width *scaleX)), static_cast<int32_t>((height *scaleY)));
    

                        }
                            
this->scale(originalImage, image, scaleX, scaleY, true);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public: void scale2(Image originalImage, std::vector<Image> originalImageArray, std::vector<Image> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY){

                        if(maxScaleX *originalImage.getWidth() > originalImageArray[0]!.getWidth() || maxScaleY *originalImage.getHeight() > originalImageArray[0]!.getHeight())
                        
                                    {
                                    originalImageArray[0]= this->imageCreationUtil.createImage(originalImage.getWidth(), originalImage.getHeight(), maxScaleX, maxScaleY);
    

                                    }
                                
this->scale(originalImage, originalImageArray[0]!, scaleX, scaleY, false);
    
}


    public: void scale(Image originalImage, Image newMaxSizeImage, float scaleX, float scaleY, bool clear){

    BufferedImage bufferedImage = this->imageUtil.getBufferedImage(originalImage);;
    

    BufferedImage newBufferedImage = this->imageUtil.getBufferedImage(newMaxSizeImage);;
    

    AffineTransform at = AffineTransform::getScaleInstance(scaleX, scaleY);;
    

    Graphics2D g = newBufferedImage.createGraphics();;
    

                        if(clear)
                        
                                    {
                                    g.setBackground(this->imageJ2SEUtil.TRANSPARENT_COLOR);
    
g.clearRect(0, 0, newBufferedImage.getWidth(), newBufferedImage.getHeight());
    

                                    }
                                
g.drawRenderedImage(bufferedImage, at);
    
g.dispose();
    
}


};

            

