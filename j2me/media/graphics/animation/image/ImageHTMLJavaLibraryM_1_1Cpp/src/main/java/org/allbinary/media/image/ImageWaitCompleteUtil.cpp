
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEWAITCOMPLETEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEWAITCOMPLETEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageWaitCompleteUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/microemu/device/playn/PlaynImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCompleteUtil.h"


ImageWaitCompleteUtil::ImageWaitCompleteUtil() : logUtil(LogUtil::getInstance()), timeDelayHelper(new TimeDelayHelper(18000)), allTimeDelayHelper(new TimeDelayHelper(120000)){
}


                //@Throws(Exception.constructor)
            
    auto ImageWaitCompleteUtil::waitForImage(Image* image, std::string name) -> void{
this->timeDelayHelper->setStartTimeTNT();
    
this->waitForATime(image, name, this->timeDelayHelper);
    
}


                //@Throws(Exception.constructor)
            
    auto ImageWaitCompleteUtil::handleTimeout(std::string name) -> void{

                        if(this->timeDelayHelper->isTimeTNT())
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("isReady: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: ") +JavaString::valueOf(name));
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto ImageWaitCompleteUtil::waitForATime(Image* image, std::string name, TimeDelayHelper* timeDelayHelper) -> void{

    PlaynImage* playnImage = dynamic_cast<PlaynImage*>(image);;
    

    playn::core::Image* playnCoreImage = dynamic_cast<playn::core::Image*>(playnImage->getImage());;
    

        while(!playnCoreImage->isReady() || playnCoreImage->width() +playnCoreImage->height() <= 0)
        {

                        if(timeDelayHelper->isTimeTNT())
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("waitFor: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: ") +JavaString::valueOf(name));
                    

                                    }
                                
}


                        if(!image->isReady())
                        
                                    {
                                    image->init(image->getImage());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto ImageWaitCompleteUtil::waitForAll() -> void{
this->allTimeDelayHelper->setStartTimeTNT();
    

    ABHashtable<Object*, Object*>* hashtable = GameFeatureImageCacheFactory::getInstance()->getHashtableP();;
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance()->getKeysAsArray(hashtable);;
    

    int32_t size = objectArray.size();;
    
PreLogUtil::put(JavaString::valueOf("Image Total: ") +JavaString::valueOf(size), this, "waitForAll");
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->waitForATime(dynamic_cast<Image*>(hashtable->get(objectArray[index])), objectArray[index], this->allTimeDelayHelper);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEWAITCOMPLETEUTIL_CPP
