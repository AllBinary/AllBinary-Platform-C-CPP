
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Math.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/Canvas.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/core/PlayN.h>

      
#include <playn/html/HtmlGraphics.h>

      
#include <playn/html/HtmlImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCreationUtil.h"

class ImageRotationUtil
            : public Object
         {

    private: static ImageRotationUtil instance() { return ImageRotationUtil(); }

    public: static ImageRotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageRotationUtil::instance();
    
}


private: ImageRotationUtil(){
}


    public: Image rotateImage(Image originalImage, Image image, int32_t totalAngle){

                        if(image.isMutable())
                        
                                    {
                                    
    PlaynMutableImage htmlImage = image as PlaynMutableImage;;
    

    ImageImpl canvasImage = htmlImage.getImage() as ImageImpl;;
    

    PlayN playN = PlayN::getInstance();;
    

    Canvas canvas = (graphics as HtmlGraphics).get(canvasImage as HtmlImage);;
    
canvas.save();
    
canvas.clear();
    
canvas.translate(originalImage.getWidth() /2, originalImage.getHeight() /2);
    

    Image image2 = this->rotateImageCanvasSurface(originalImage, image, canvas, totalAngle);;
    
this->drawImage(originalImage, image, canvas);
    
canvas.restore();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image2;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public: Image rotateImageCanvasSurfaceClear(Image originalImage, Image image, Canvas canvasSurface, int32_t totalAngle){

                        if(image.isMutable())
                        
                                    {
                                    canvasSurface.translate( -originalImage.getWidth() /2,  -originalImage.getHeight() /2);
    
canvasSurface.clear();
    
canvasSurface.translate(originalImage.getWidth() /2, originalImage.getHeight() /2);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rotateImageCanvasSurface(originalImage, image, canvasSurface, totalAngle);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public: Image rotateImageCanvasSurface(Image originalImage, Image image, Canvas canvasSurface, int32_t totalAngle){

                        if(image.isMutable())
                        
                                    {
                                    canvasSurface.rotate(Math::toRadians(totalAngle));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public: void drawImage(Image originalImage, Image image, Canvas canvasSurface){

    playn::core::Image originalPlayNImage = 
                null
            ;;
    

                        if(originalImage.isMutable())
                        
                                    {
                                    
    PlaynMutableImage originalHTMLImage = originalImage as PlaynMutableImage;;
    
originalPlayNImage= originalHTMLImage.getImage() as playn::core::Image;
    

                                    }
                                
                        else {
                            
    PlaynImmutableImage originalHTMLImage = originalImage as PlaynImmutableImage;;
    
originalPlayNImage= originalHTMLImage.getImage() as playn::core::Image;
    

                        }
                            
canvasSurface.draw(originalPlayNImage,  -originalImage.getWidth() /2,  -originalImage.getHeight() /2);
    
}


                //@Throws(Exception.constructor)
            
    public: Image createRotatedImage(Image originalImage, int32_t rotationInDegrees){

    Image image = ImageCreationUtil::getInstance().createImageWH(originalImage.getWidth(), originalImage.getHeight());;
    

    Image rotatedImage = this->rotateImage(originalImage, image, rotationInDegrees);;
    

                        if(rotatedImage == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Not Mutable");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rotatedImage;
    
}


};

            

