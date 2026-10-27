
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_MIRRORIMAGEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_MIRRORIMAGEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/MirrorImageUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
#include <java/awt/geom/AffineTransform.h>

      
#include <java/awt/image/AffineTransformOp.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/Graphics2D.h"

auto MirrorImageUtil::instance_owner() -> MirrorImageUtil* { static std::unique_ptr<MirrorImageUtil> value(new MirrorImageUtil()); return value.get(); }
MirrorImageUtil* MirrorImageUtil::instance = MirrorImageUtil::instance_owner();

    auto MirrorImageUtil::getInstance() -> MirrorImageUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MirrorImageUtil::instance;
    
}


MirrorImageUtil::MirrorImageUtil() : logUtil(LogUtil::getInstance()), imageUtil(ImageUtil::getInstance()){
}


    auto MirrorImageUtil::getImage(BufferedImage* bufferedImage, bool verticle, bool horizontal) -> BufferedImage*{
this->logUtil->putF("Starting", this, "getImage");
    

    BufferedImage* newBufferedImage = this->imageUtil->create(bufferedImage->getWidth(
                            nullptr), bufferedImage->getHeight(
                            nullptr));;
    

    Graphics2D* g = newBufferedImage->createGraphics();;
    

                        if(verticle)
                        
                                    {
                                    
    AffineTransform* tx = AffineTransform::getScaleInstance(1,  -1);;
    
tx->translate(0,  -bufferedImage->getHeight(
                            nullptr));
    

    AffineTransformOp* op = new AffineTransformOp(tx, AffineTransformOp::TYPE_NEAREST_NEIGHBOR);;
    
bufferedImage= op->filter(bufferedImage, 
                            nullptr);
    

                                    }
                                

                        if(horizontal)
                        
                                    {
                                    
    AffineTransform* tx = AffineTransform::getScaleInstance( -1, 1);;
    
tx->translate( -bufferedImage->getWidth(
                            nullptr), 0);
    

    AffineTransformOp* op = new AffineTransformOp(tx, AffineTransformOp::TYPE_NEAREST_NEIGHBOR);;
    
bufferedImage= op->filter(bufferedImage, 
                            nullptr);
    

                                    }
                                
g->drawImage(bufferedImage, 0, 0, bufferedImage->getWidth(
                            nullptr), bufferedImage->getHeight(
                            nullptr), 
                            nullptr);
    
g->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


    auto MirrorImageUtil::getImages(BufferedImage* bufferedImage, bool verticle, bool horizontal) -> std::vector<BufferedImage*>{

    int32_t width = bufferedImage->getWidth();;
    

    int32_t height = bufferedImage->getHeight();;
    

    int32_t cellHeight = height;;
    

    int32_t cellWidth = height;;
    

    int32_t numberOfFramesPerOrientation = width /cellWidth;;
    

    int32_t numberOfFrames = numberOfFramesPerOrientation;;
    

                        if(verticle)
                        numberOfFrames *= 2;
                                

                        if(horizontal)
                        numberOfFrames *= 2;
                                
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("numberOfFramesPerOrientation: ") +JavaString::valueOf(numberOfFramesPerOrientation)) +JavaString::valueOf(" numberOfFrames: ")) +JavaString::valueOf(numberOfFrames), this, "getImages");
    

    std::vector<BufferedImage*> bufferedImageArray = std::vector<BufferedImage*>(numberOfFrames);;
    

    int32_t y = 0;;
    




                        for (
    int32_t index = 0;index < numberOfFramesPerOrientation; index++)
        {

    int32_t x = index *cellWidth;;
    
bufferedImageArray[index]= bufferedImage->getSubimage(x, y, cellWidth, cellHeight);
    
}





                        for (
    int32_t index = 0;index < numberOfFramesPerOrientation; index++)
        {
bufferedImageArray[index +numberOfFramesPerOrientation]= this->getImage(bufferedImageArray[index], verticle, horizontal);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_MIRRORIMAGEUTIL_CPP
