
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageCompleteUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/microemu/device/playn/PlaynImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/Hashtable.h"


ImageCompleteUtil::ImageCompleteUtil() : timeDelayHelper(new TimeDelayHelper(18000)), allTimeDelayHelper(new TimeDelayHelper(120000)) {
        }
        auto ImageCompleteUtil::instance_owner() -> ImageCompleteUtil* { static std::unique_ptr<ImageCompleteUtil> value(new ImageCompleteUtil()); return value.get(); }
ImageCompleteUtil* ImageCompleteUtil::instance = ImageCompleteUtil::instance_owner();

    auto ImageCompleteUtil::getInstance() -> ImageCompleteUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCompleteUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCompleteUtil::waitForImage(Image* image, std::string name) -> void{
this->timeDelayHelper->setStartTime();
    
this->waitForATime(image, name, this->timeDelayHelper);
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCompleteUtil::isReady(Image* image, std::string name, TimeDelayHelper* timeDelayHelper) -> bool{

    PlaynImage* playnImage = dynamic_cast<PlaynImage*>(image);;
    

                        if(!playnImage->getImage()->isReady() && playnImage->getImage()->width() +playnImage->getImage()->height() == 0)
                        
                                    {
                                    
                        if(timeDelayHelper->isTime())
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("isReady: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: ") +JavaString::valueOf(name));
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCompleteUtil::waitForATime(Image* image, std::string name, TimeDelayHelper* timeDelayHelper) -> void{

    PlaynImage* playnImage = dynamic_cast<PlaynImage*>(image);;
    

        while(!playnImage->getImage()->isReady() && playnImage->getImage()->width() +playnImage->getImage()->height() == 0)
        {

                        if(timeDelayHelper->isTime())
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("waitFor: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: ") +JavaString::valueOf(name));
                    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto ImageCompleteUtil::waitForAll() -> void{
this->allTimeDelayHelper->setStartTime();
    

    Hashtable<Object*, Object*>* hashtable = GameFeatureImageCacheFactory::getInstance()->getHashtable();;
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance()->getKeysAsArray(hashtable);;
    

    int32_t size = objectArray.size();;
    
PreLogUtil::put(JavaString::valueOf("Total: ") +JavaString::valueOf(size), this, "waitForAll");
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->waitForATime(dynamic_cast<Image*>(hashtable->get(objectArray[index])), objectArray[index], this->allTimeDelayHelper);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_CPP
