
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

class ImageCompleteUtil
            : public Object
         {

    private: static ImageCompleteUtil* instance() { static std::unique_ptr<ImageCompleteUtil> value(new ImageCompleteUtil()); return value.get(); }

    public: static ImageCompleteUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCompleteUtil::instance();
    
}


    private: TimeDelayHelper* timeDelayHelper = new TimeDelayHelper(18000);

    private: TimeDelayHelper* allTimeDelayHelper = new TimeDelayHelper(120000);

                //@Throws(Exception.constructor)
            
    public: void waitForImage(Image* image, std::string name){
this->timeDelayHelper->setStartTime();
    
this->waitForATime(image, name, this->timeDelayHelper);
    
}


                //@Throws(Exception.constructor)
            
    public: bool isReady(Image* image, std::string name, TimeDelayHelper* timeDelayHelper){

    PlaynImage* playnImage = dynamic_cast<PlaynImage*>(image);;
    

                        if(!playnImage->getImage()->isReady() && playnImage->getImage()->width() +playnImage->getImage()->height() == 0)
                        
                                    {
                                    
                        if(timeDelayHelper->isTime())
                        
                                    {
                                    


                            throw new Exception("isReady: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: " +name);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    private: void waitForATime(Image* image, std::string name, TimeDelayHelper* timeDelayHelper){

    PlaynImage* playnImage = dynamic_cast<PlaynImage*>(image);;
    

        while(!playnImage->getImage()->isReady() && playnImage->getImage()->width() +playnImage->getImage()->height() == 0)
        {

                        if(timeDelayHelper->isTime())
                        
                                    {
                                    


                            throw new Exception("waitFor: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: " +name);
                    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: void waitForAll(){
this->allTimeDelayHelper->setStartTime();
    

    Hashtable<Object*, Object*>* hashtable = GameFeatureImageCacheFactory::getInstance()->getHashtable();;
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance()->getKeysAsArray(hashtable);;
    

    int32_t size = objectArray.size();;
    
PreLogUtil::put("Total: " +size, this, "waitForAll");
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->waitForATime(dynamic_cast<Image*>(hashtable->get(objectArray[index])), objectArray[index], this->allTimeDelayHelper);
    
}

}


};

            

