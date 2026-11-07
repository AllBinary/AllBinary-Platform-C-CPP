
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/ComparisonImageInputOutput.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/cache/BufferedImageCacheable.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/ImageComparisonResultCacheSingleton.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultFrameCacheable.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#include "org/allbinary/media/image/comparison/ChangedPixelsUtil.h"


ComparisonImageInputOutput::ComparisonImageInputOutput() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ComparisonImageInputOutput::save(int64_t frame) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(frame > 0)
                        
                                    {
                                    
    ImageComparisonResultFrameCacheable* imageComparisonResultFrameCacheable = dynamic_cast<ImageComparisonResultFrameCacheable*>((getInstance)).get(frame));;
    

                        if(imageComparisonResultFrameCacheable != 
                                    nullptr
                                )
                        
                                    {
                                    
    ImageComparisonResult* imageComparisonResult = imageComparisonResultFrameCacheable->getImageComparisonResult();;
    
this->save(imageComparisonResult, imageComparisonResultFrameCacheable->getFrame());
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf("Comparison Results Not Available for Output: ") +JavaString::valueOf(frame), this, commonStrings->SAVE);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf("No Comparison Results: for first frame: ") +JavaString::valueOf(frame), this, commonStrings->SAVE);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto ComparisonImageInputOutput::save(ImageComparisonResult* imageComparisonResult, int64_t frame) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    StringMaker* filePathStringBuffer = new StringMaker();;
    
filePathStringBuffer->append(ImageOutputData::SAVE_PATH);
    
filePathStringBuffer->append(LongUtil::fillIn(JavaString::valueOf(frame)));
    
filePathStringBuffer->append(ComparisonImageInputOutput::ROOT_NAME);
    

    StringMaker* filePathStringBuffer1 = new StringMaker();;
    
filePathStringBuffer1->append(JavaString::valueOf(filePathStringBuffer));
    
filePathStringBuffer1->append("_1");
    
filePathStringBuffer1->append(MediaDataFactory::getInstance()->JPG->getExtension());
    

    std::string filePath1 = JavaString::valueOf(filePathStringBuffer1);;
    

    StringMaker* filePathStringBuffer2 = new StringMaker();;
    
filePathStringBuffer2->append(JavaString::valueOf(filePathStringBuffer));
    
filePathStringBuffer2->append("_2");
    
filePathStringBuffer2->append(MediaDataFactory::getInstance()->JPG->getExtension());
    

    std::string filePath2 = JavaString::valueOf(filePathStringBuffer2);;
    

    std::vector<BufferedImageCacheable*> bufferedImageCacheables = ChangedPixelsUtil::generateBufferedImageChacheables(imageComparisonResult);;
    
this->logUtil->putF(JavaString::valueOf("Comparison Image File Path 1: ") +JavaString::valueOf(filePath1), this, commonStrings->SAVE);
    
this->logUtil->putF(JavaString::valueOf("Comparison Image File Path 2: ") +JavaString::valueOf(filePath2), this, commonStrings->SAVE);
    

    std::vector<BufferedImage*> bufferedImageArray = std::vector<BufferedImage*>(2);;
    
bufferedImageArray[0]= bufferedImageCacheables[0]->getBufferedImage();
    
bufferedImageArray[1]= bufferedImageCacheables[1]->getBufferedImage();
    

    ImagePersistanceUtil* imagePersistanceUtil = ImagePersistanceUtil::getInstance();;
    
imagePersistanceUtil->saveWithImageIO(filePath1, bufferedImageArray[0]);
    
imagePersistanceUtil->saveWithImageIO(filePath2, bufferedImageArray[1]);
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_CPP
