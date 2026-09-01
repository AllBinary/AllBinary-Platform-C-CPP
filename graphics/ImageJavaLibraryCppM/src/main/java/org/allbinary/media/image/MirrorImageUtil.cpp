
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
        
#include <java/awt.h>

      
#include <java/awt/geom/AffineTransform.h>

      
#include <java/awt/image/AffineTransformOp.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "Graphics2D.h"

class MirrorImageUtil
            : public Object
         {

    private: static MirrorImageUtil instance() { return MirrorImageUtil(); }

    public: static MirrorImageUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MirrorImageUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const ImageUtil imageUtil = ImageUtil::getInstance();

private: MirrorImageUtil(){
}


    public: BufferedImage getImage(BufferedImage bufferedImage, bool verticle, bool horizontal){
this->logUtil.putF("Starting", this, "getImage");
    

    BufferedImage newBufferedImage = this->imageUtil.create(bufferedImage.getWidth(
                            nullptr), bufferedImage.getHeight(
                            nullptr));;
    

    Graphics2D g = newBufferedImage.createGraphics();;
    

                        if(verticle)
                        
                                    {
                                    
    AffineTransform tx = AffineTransform::getScaleInstance(1,  -1);;
    
tx.translate(0,  -bufferedImage.getHeight(
                            nullptr));
    

    AffineTransformOp op = AffineTransformOp(tx, AffineTransformOp::TYPE_NEAREST_NEIGHBOR);;
    
bufferedImage= op.filter(bufferedImage, 
                            nullptr);
    

                                    }
                                

                        if(horizontal)
                        
                                    {
                                    
    AffineTransform tx = AffineTransform::getScaleInstance( -1, 1);;
    
tx.translate( -bufferedImage.getWidth(
                            nullptr), 0);
    

    AffineTransformOp op = AffineTransformOp(tx, AffineTransformOp::TYPE_NEAREST_NEIGHBOR);;
    
bufferedImage= op.filter(bufferedImage, 
                            nullptr);
    

                                    }
                                
g.drawImage(bufferedImage, 0, 0, bufferedImage.getWidth(
                            nullptr), bufferedImage.getHeight(
                            nullptr), 
                            nullptr);
    
g.dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


    public: std::vector<BufferedImage> getImages(BufferedImage bufferedImage, bool verticle, bool horizontal){

    int32_t width = bufferedImage.getWidth();;
    

    int32_t height = bufferedImage.getHeight();;
    

    int32_t cellHeight = height;;
    

    int32_t cellWidth = height;;
    

    int32_t numberOfFramesPerOrientation = width /cellWidth;;
    

    int32_t numberOfFrames = numberOfFramesPerOrientation;;
    

                        if(verticle)
                        numberOfFrames *= 2;
                                

                        if(horizontal)
                        numberOfFrames *= 2;
                                
this->logUtil.putF("numberOfFramesPerOrientation: " +numberOfFramesPerOrientation +" numberOfFrames: " +numberOfFrames, this, "getImages");
    

    std::vector<BufferedImage> bufferedImageArray = new Array(numberOfFrames);;
    

    int32_t y = 0;;
    




                        for (
    int32_t index = 0;index < numberOfFramesPerOrientation; index++)
        {

    int32_t x = index *cellWidth;;
    
bufferedImageArray[index]= bufferedImage.getSubimage(x, y, cellWidth, cellHeight);
    
}





                        for (
    int32_t index = 0;index < numberOfFramesPerOrientation; index++)
        {
bufferedImageArray[index +numberOfFramesPerOrientation]= this->getImage(bufferedImageArray[index]!, verticle, horizontal);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}


};

            

