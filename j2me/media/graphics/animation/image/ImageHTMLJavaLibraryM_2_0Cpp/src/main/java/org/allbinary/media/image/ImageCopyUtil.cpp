
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCreationUtil.h"

class ImageCopyUtil
            : public Object
         {

    private: static ImageCopyUtil* instance() { static std::unique_ptr<ImageCopyUtil> value(new ImageCopyUtil()); return value.get(); }

    public: static ImageCopyUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCopyUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: ImageCreationUtil* imageCreationUtil = ImageCreationUtil::getInstance();

private: ImageCopyUtil(){
}


    private: int32_t anchor = Anchor::TOP_LEFT;

                //@Throws(Exception.constructor)
            
    public: Image* createImageForRotation(Image* originalImage){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createImage(originalImage);;
    
}


                //@Throws(Exception.constructor)
            
    public: Image* createImage(Image* originalImage){

    Image* image = this->imageCreationUtil->createImageWH(originalImage->getWidth(), originalImage->getHeight());;
    

                        if(image->isMutable())
                        
                                    {
                                    image->getGraphics()->drawImage(originalImage, 0, 0, this->anchor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Not Mutable");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: Image* createImageScale(Image* originalImage, float canvasScale, bool resize){

    int32_t newWidth = static_cast<int32_t>((originalImage->getWidth() *canvasScale));;
    

    int32_t newHeight = static_cast<int32_t>((originalImage->getHeight() *canvasScale));;
    

                        if(resize)
                        
                                    {
                                    
                        if(newWidth < newHeight)
                        
                                    {
                                    newWidth= newHeight;
    

                                    }
                                

                        if(newHeight < newWidth)
                        
                                    {
                                    newHeight= newWidth;
    

                                    }
                                

                                    }
                                

    Image* image = this->imageCreationUtil->createImageWH(newWidth, newHeight);;
    

                        if(image->isMutable())
                        
                                    {
                                    
    int32_t halfWidthDelta = (newWidth -originalImage->getWidth()) /2;;
    

    int32_t halfHeightDelta = (newHeight -originalImage->getHeight()) /2;;
    

    Graphics* graphics = image->getGraphics();;
    
graphics->drawImage(originalImage, halfWidthDelta, halfHeightDelta, this->anchor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Not Mutable");
                    

                        }
                            
}


};

            

