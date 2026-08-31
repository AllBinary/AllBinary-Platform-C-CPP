
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
        

    private: static const instance: MirrorImageUtil = new MirrorImageUtil();

    public static MirrorImageUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MirrorImageUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

private constructor (){

            super();
        }


    public BufferedImage getImage(BufferedImage bufferedImage, bool verticle, bool horizontal){
this.logUtil!.putF("Starting", this, "getImage");
    

    newBufferedImage: BufferedImage = this.imageUtil!.create(bufferedImage!.getWidth(
                            nullptr), bufferedImage!.getHeight(
                            nullptr))!;;
    

    g: Graphics2D = newBufferedImage!.createGraphics()!;;
    

                        if(verticle)
                        
                                    {
                                    
    tx: AffineTransform = AffineTransform.getScaleInstance(1,  -1)!;;
    
tx.translate(0,  -bufferedImage!.getHeight(
                            nullptr));
    

    op: AffineTransformOp = new AffineTransformOp(tx, AffineTransformOp.TYPE_NEAREST_NEIGHBOR);;
    
bufferedImage= op.filter(bufferedImage, 
                            nullptr);
    

                                    }
                                

                        if(horizontal)
                        
                                    {
                                    
    tx: AffineTransform = AffineTransform.getScaleInstance( -1, 1)!;;
    
tx.translate( -bufferedImage!.getWidth(
                            nullptr), 0);
    

    op: AffineTransformOp = new AffineTransformOp(tx, AffineTransformOp.TYPE_NEAREST_NEIGHBOR);;
    
bufferedImage= op.filter(bufferedImage, 
                            nullptr);
    

                                    }
                                
g.drawImage(bufferedImage, 0, 0, bufferedImage!.getWidth(
                            nullptr), bufferedImage!.getHeight(
                            nullptr), 
                            nullptr);
    
g.dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


    public std::vector<BufferedImage> getImages(BufferedImage bufferedImage, bool verticle, bool horizontal){

    width: int32_t = bufferedImage!.getWidth()!;;
    

    height: int32_t = bufferedImage!.getHeight()!;;
    

    cellHeight: int32_t = height;;
    

    cellWidth: int32_t = height;;
    

    numberOfFramesPerOrientation: int32_t = width /cellWidth;;
    

    numberOfFrames: int32_t = numberOfFramesPerOrientation;;
    

                        if(verticle)
                        numberOfFrames *= 2

                        if(horizontal)
                        numberOfFrames *= 2
this.logUtil!.putF("numberOfFramesPerOrientation: " +numberOfFramesPerOrientation +" numberOfFrames: " +numberOfFrames, this, "getImages");
    

    bufferedImageArray: std::vector<BufferedImage> = new Array(numberOfFrames);;
    

    y: int32_t = 0;;
    




                        for (
    index: int32_t = 0;index < numberOfFramesPerOrientation; index++)
        {

    x: int32_t = index *cellWidth;;
    
bufferedImageArray[index]= bufferedImage!.getSubimage(x, y, cellWidth, cellHeight);
    
}





                        for (
    index: int32_t = 0;index < numberOfFramesPerOrientation; index++)
        {
bufferedImageArray[index +numberOfFramesPerOrientation]= this.getImage(bufferedImageArray[index]!, verticle, horizontal);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}


};

            

