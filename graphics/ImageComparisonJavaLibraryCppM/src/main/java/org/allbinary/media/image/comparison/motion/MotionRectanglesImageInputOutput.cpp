
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/util/cache/PoolInterface.h>

      
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/cache/BufferedImageCacheable.h>

      
#include <org/allbinary/media/image/cache/BufferedImageInfo.h>

      
#include <org/allbinary/media/image/cache/BufferedImageInfoFactory.h>

      
#include <org/allbinary/media/image/cache/BufferedImagePoolSingleton.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllMotionRectanglesResultsCacheSingleton.h"
#include "MotionRectanglesResultsFrameCacheable.h"
#include "MotionRectangles.h"
#include "ConsolidatedMotionRectanglesResultsCacheSingleton.h"
#include "ConstrainedMotionRectanglesResultsCacheSingleton.h"
#include "Graphics.h"
#include "MotionRectangle.h"
#include "Rectangle.h"
#include "Color.h"

class MotionRectanglesImageInputOutput
            : public Object
        : public ImageIOInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const NUMBER_OF_IMAGES: int32_t = 1;

public constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public save(Long frame){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    motionRectanglesResultsFrameCacheable: MotionRectanglesResultsFrameCacheable = (getInstance as AutomaticCacheInterface).get(frame) as MotionRectanglesResultsFrameCacheable;;
    

                        if(motionRectanglesResultsFrameCacheable != 
                                    null
                                )
                        
                                    {
                                    
    motionRectangles: MotionRectangles = motionRectanglesResultsFrameCacheable!.getMotionRectangles()!;;
    
this.save(motionRectangles, frame);
    
motionRectanglesResultsFrameCacheable= (getInstance as AutomaticCacheInterface).get(frame) as MotionRectanglesResultsFrameCacheable;
    
motionRectangles= motionRectanglesResultsFrameCacheable!.getMotionRectangles();
    
this.save(motionRectangles, frame);
    
motionRectanglesResultsFrameCacheable= (getInstance as AutomaticCacheInterface).get(frame) as MotionRectanglesResultsFrameCacheable;
    
motionRectangles= motionRectanglesResultsFrameCacheable!.getMotionRectangles();
    
this.save(motionRectangles, frame);
    

                                    }
                                
                        else {
                            this.logUtil!.putF("No Motion Rectangle Results for Frame: " +frame, this, commonStrings!.SAVE);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public save(MotionRectangles motionRectangles, Long frame){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    filePathStringBuffer: StringMaker = new StringMaker();;
    
filePathStringBuffer!.append(ImageOutputData.SAVE_PATH);
    
filePathStringBuffer!.append(LongUtil.fillIn(frame.toString()));
    
filePathStringBuffer!.append("_");
    
filePathStringBuffer!.append(motionRectangles!.getName());
    

    filePathStringBuffer1: StringMaker = new StringMaker();;
    
filePathStringBuffer1!.append(filePathStringBuffer!.toString());
    
filePathStringBuffer1!.append("_1");
    
filePathStringBuffer1!.append(MediaDataFactory.getInstance()!.JPG.getExtension());
    

    filePathStringBuffer2: StringMaker = new StringMaker();;
    
filePathStringBuffer2!.append(filePathStringBuffer!.toString());
    
filePathStringBuffer2!.append("_2");
    
filePathStringBuffer2!.append(MediaDataFactory.getInstance()!.JPG.getExtension());
    

    filePathStringBuffer3: StringMaker = new StringMaker();;
    
filePathStringBuffer3!.append(filePathStringBuffer!.toString());
    
filePathStringBuffer3!.append(MediaDataFactory.getInstance()!.JPG.getExtension());
    
this.logUtil!.putF("Motion Image File Path 1: " +filePathStringBuffer1!.toString(), this, commonStrings!.SAVE);
    
this.logUtil!.putF("Motion Image File Path 2: " +filePathStringBuffer2!.toString(), this, commonStrings!.SAVE);
    
this.logUtil!.putF("Motion Image File Path 2: " +filePathStringBuffer3!.toString(), this, commonStrings!.SAVE);
    

    bufferedImageCacheables: std::vector<BufferedImageCacheable> = new Array(this.NUMBER_OF_IMAGES);;
    

    imageComparisonInfo: ImageComparisonResult = motionRectangles!.getImageComparisonResult()!;;
    

    originalBufferedImage: BufferedImage = imageComparisonInfo!.getBufferedImages()[0]!;;
    

    bufferedImageInfo: BufferedImageInfo = BufferedImageInfoFactory.getInstance(imageComparisonInfo!.imageWidth, imageComparisonInfo!.imageHeight, originalBufferedImage!.getType())!;;
    

    poolInterface: PoolInterface = BufferedImagePoolSingleton.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < this.NUMBER_OF_IMAGES; index++)
        {
bufferedImageCacheables[index]= poolInterface!.remove(bufferedImageInfo) as BufferedImageCacheable;
    
}

bufferedImageCacheables[0]!.getBufferedImage()!.setData(imageComparisonInfo!.getBufferedImages()[1]!.getData());
    

                        if(this.NUMBER_OF_IMAGES > 1)
                        
                                    {
                                    bufferedImageCacheables[1]!.getBufferedImage()!.setData(imageComparisonInfo!.getBufferedImages()[1]!.getData());
    

                                    }
                                

    bufferedImageGraphicsArray: std::vector<Graphics>;;
    
bufferedImageGraphicsArray= new Array(this.NUMBER_OF_IMAGES);
    




                        for (
    index: int32_t = 0;index < this.NUMBER_OF_IMAGES; index++)
        {
bufferedImageGraphicsArray[index]= bufferedImageCacheables[index]!.getBufferedImage()!.getGraphics();
    
}


    rectangelList: Vector = motionRectangles!.getVector()!;;
    

    size: int32_t = rectangelList!.length!;;
    




                        for (
    index2: int32_t = 0;index2 < size; index2++)
        {

    motionRectangle: MotionRectangle = rectangelList!.get(index2) as MotionRectangle;;
    

    rectangle: Rectangle = motionRectangle!.getRectangle()!;;
    




                        for (
    index: int32_t = 0;index < this.NUMBER_OF_IMAGES; index++)
        {
bufferedImageGraphicsArray[index]!.setColor(Color.ORANGE);
    
bufferedImageGraphicsArray[index]!.drawRect(rectangle.x, rectangle.y, rectangle.width, rectangle.height);
    
}

}


    imagePersistanceUtil: ImagePersistanceUtil = ImagePersistanceUtil.getInstance()!;;
    

                        if(this.NUMBER_OF_IMAGES > 1)
                        
                                    {
                                    imagePersistanceUtil!.saveWithImageIO(filePathStringBuffer1!.toString(), bufferedImageCacheables[1]!.getBufferedImage());
    

                                    }
                                
imagePersistanceUtil!.saveWithImageIO(filePathStringBuffer2!.toString(), bufferedImageCacheables[0]!.getBufferedImage());
    

                        if(this.NUMBER_OF_IMAGES > 2)
                        
                                    {
                                    imagePersistanceUtil!.saveWithImageIO(filePathStringBuffer3!.toString(), bufferedImageCacheables[2]!.getBufferedImage());
    

                                    }
                                
}


};

            

