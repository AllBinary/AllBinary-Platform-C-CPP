
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/microemu/device/playn/PlaynImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageCompleteUtil
            : public Object
         {

    private: static ImageCompleteUtil instance() { return ImageCompleteUtil(); }

    public: static ImageCompleteUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCompleteUtil::instance();
    
}


    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(18000);

    private: const TimeDelayHelper allTimeDelayHelper = TimeDelayHelper(120000);

                //@Throws(Exception.constructor)
            
    public: void waitForImage(Image image, std::string name){
this->timeDelayHelper.setStartTime();
    
this->waitForATime(image, name, this->timeDelayHelper);
    
}


                //@Throws(Exception.constructor)
            
    public: bool isReady(Image image, std::string name, TimeDelayHelper timeDelayHelper){

    PlaynImage playnImage = image as PlaynImage;;
    

                        if(!playnImage.getImage().isReady() && playnImage.getImage().width() +playnImage.getImage().height() == 0)
                        
                                    {
                                    
                        if(timeDelayHelper.isTime())
                        
                                    {
                                    


                            throw Exception("isReady: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: " +name);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    private: void waitForATime(Image image, std::string name, TimeDelayHelper timeDelayHelper){

    PlaynImage playnImage = image as PlaynImage;;
    

        while(!playnImage.getImage().isReady() && playnImage.getImage().width() +playnImage.getImage().height() == 0)
        {

                        if(timeDelayHelper.isTime())
                        
                                    {
                                    


                            throw Exception("waitFor: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: " +name);
                    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: void waitForAll(){
this->allTimeDelayHelper.setStartTime();
    

    Hashtable<any, any> hashtable = GameFeatureImageCacheFactory::getInstance().getHashtable();;
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance().getKeysAsArray(hashtable);;
    

    int32_t size = objectArray.size();;
    
PreLogUtil::put("Total: " +size, this, "waitForAll");
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->waitForATime(hashtable.get(objectArray[index]!) as Image, objectArray[index]! as string, this->allTimeDelayHelper);
    
}

}


};

            

