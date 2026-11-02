
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/motion/MotionRectanglesImageInputOutput.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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
        #include "org/allbinary/media/image/comparison/motion/AllMotionRectanglesResultsCacheSingleton.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsFrameCacheable.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/ConsolidatedMotionRectanglesResultsCacheSingleton.h"
#include "org/allbinary/media/image/comparison/motion/ConstrainedMotionRectanglesResultsCacheSingleton.h"
#include "org/allbinary/media/image/comparison/motion/Graphics.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangle.h"
#include "org/allbinary/media/image/comparison/motion/Rectangle.h"
#include "org/allbinary/media/image/comparison/motion/Color.h"


MotionRectanglesImageInputOutput::MotionRectanglesImageInputOutput() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto MotionRectanglesImageInputOutput::save(int64_t frame) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    MotionRectanglesResultsFrameCacheable* motionRectanglesResultsFrameCacheable = dynamic_cast<MotionRectanglesResultsFrameCacheable*>((getInstance)).get(frame));;
    

                        if(motionRectanglesResultsFrameCacheable != 
                                    nullptr
                                )
                        
                                    {
                                    
    MotionRectangles* motionRectangles = motionRectanglesResultsFrameCacheable->getMotionRectangles();;
    
this->save(motionRectangles, frame);
    
motionRectanglesResultsFrameCacheable= dynamic_cast<MotionRectanglesResultsFrameCacheable*>((getInstance)).get(frame));
    
motionRectangles= motionRectanglesResultsFrameCacheable->getMotionRectangles();
    
this->save(motionRectangles, frame);
    
motionRectanglesResultsFrameCacheable= dynamic_cast<MotionRectanglesResultsFrameCacheable*>((getInstance)).get(frame));
    
motionRectangles= motionRectanglesResultsFrameCacheable->getMotionRectangles();
    
this->save(motionRectangles, frame);
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf("No Motion Rectangle Results for Frame: ") +JavaString::valueOf(frame), this, commonStrings->SAVE);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto MotionRectanglesImageInputOutput::save(MotionRectangles* motionRectangles, int64_t frame) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    StringMaker* filePathStringBuffer = new StringMaker();;
    
filePathStringBuffer->append(ImageOutputData::SAVE_PATH);
    
filePathStringBuffer->append(LongUtil::fillIn(JavaString::valueOf(frame)));
    
filePathStringBuffer->append("_");
    
filePathStringBuffer->append(motionRectangles->getName());
    

    StringMaker* filePathStringBuffer1 = new StringMaker();;
    
filePathStringBuffer1->append(filePathStringBuffer->toString());
    
filePathStringBuffer1->append("_1");
    
filePathStringBuffer1->append(MediaDataFactory::getInstance()->JPG->getExtension());
    

    StringMaker* filePathStringBuffer2 = new StringMaker();;
    
filePathStringBuffer2->append(filePathStringBuffer->toString());
    
filePathStringBuffer2->append("_2");
    
filePathStringBuffer2->append(MediaDataFactory::getInstance()->JPG->getExtension());
    

    StringMaker* filePathStringBuffer3 = new StringMaker();;
    
filePathStringBuffer3->append(filePathStringBuffer->toString());
    
filePathStringBuffer3->append(MediaDataFactory::getInstance()->JPG->getExtension());
    
this->logUtil->putF(JavaString::valueOf("Motion Image File Path 1: ") +JavaString::valueOf(filePathStringBuffer1->toString()), this, commonStrings->SAVE);
    
this->logUtil->putF(JavaString::valueOf("Motion Image File Path 2: ") +JavaString::valueOf(filePathStringBuffer2->toString()), this, commonStrings->SAVE);
    
this->logUtil->putF(JavaString::valueOf("Motion Image File Path 2: ") +JavaString::valueOf(filePathStringBuffer3->toString()), this, commonStrings->SAVE);
    

    std::vector<BufferedImageCacheable*> bufferedImageCacheables = std::vector<BufferedImageCacheable*>(this->NUMBER_OF_IMAGES);;
    

    ImageComparisonResult* imageComparisonInfo = motionRectangles->getImageComparisonResult();;
    

    BufferedImage* originalBufferedImage = imageComparisonInfo->getBufferedImages()[0];;
    

    BufferedImageInfo* bufferedImageInfo = BufferedImageInfoFactory::getInstance(imageComparisonInfo->imageWidth, imageComparisonInfo->imageHeight, originalBufferedImage->getType());;
    

    PoolInterface* poolInterface = BufferedImagePoolSingleton::getInstance();;
    




                        for (
    int32_t index = 0;index < this->NUMBER_OF_IMAGES; index++)
        {
bufferedImageCacheables[index]= dynamic_cast<BufferedImageCacheable*>(poolInterface->remove(bufferedImageInfo));
    
}

bufferedImageCacheables[0]->getBufferedImage()->setData(imageComparisonInfo->getBufferedImages()[1].getData());
    

                        if(this->NUMBER_OF_IMAGES > 1)
                        
                                    {
                                    bufferedImageCacheables[1]->getBufferedImage()->setData(imageComparisonInfo->getBufferedImages()[1].getData());
    

                                    }
                                

    std::vector<Graphics*> bufferedImageGraphicsArray;;
    
bufferedImageGraphicsArray= std::vector<Graphics*>(this->NUMBER_OF_IMAGES);
    




                        for (
    int32_t index = 0;index < this->NUMBER_OF_IMAGES; index++)
        {
bufferedImageGraphicsArray[index]= bufferedImageCacheables[index]->getBufferedImage()->getGraphics();
    
}


    BasicArrayList* rectangelList = motionRectangles->getVector();;
    

    int32_t size = rectangelList->size();;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {

    MotionRectangle* motionRectangle = dynamic_cast<MotionRectangle*>(rectangelList->get(index2));;
    

    Rectangle* rectangle = motionRectangle->getRectangle();;
    




                        for (
    int32_t index = 0;index < this->NUMBER_OF_IMAGES; index++)
        {
bufferedImageGraphicsArray[index]->setColor(Color::ORANGE);
    
bufferedImageGraphicsArray[index]->drawRect(rectangle->x, rectangle->y, rectangle->width, rectangle->height);
    
}

}


    ImagePersistanceUtil* imagePersistanceUtil = ImagePersistanceUtil::getInstance();;
    

                        if(this->NUMBER_OF_IMAGES > 1)
                        
                                    {
                                    imagePersistanceUtil->saveWithImageIO(filePathStringBuffer1->toString(), bufferedImageCacheables[1]->getBufferedImage());
    

                                    }
                                
imagePersistanceUtil->saveWithImageIO(filePathStringBuffer2->toString(), bufferedImageCacheables[0]->getBufferedImage());
    

                        if(this->NUMBER_OF_IMAGES > 2)
                        
                                    {
                                    imagePersistanceUtil->saveWithImageIO(filePathStringBuffer3->toString(), bufferedImageCacheables[2]->getBufferedImage());
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_CPP
