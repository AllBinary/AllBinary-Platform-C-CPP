
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
        

    private: static const instance: ImageCompleteUtil = new ImageCompleteUtil();

    public static ImageCompleteUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCompleteUtil.instance;
    
}


    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(18000);

    private: const allTimeDelayHelper: TimeDelayHelper = new TimeDelayHelper(120000);

                //@Throws(Exception.constructor)
            
    public waitForImage(Image image, string name){
this.timeDelayHelper!.setStartTime();
    
this.waitForATime(image, name, this.timeDelayHelper);
    
}


                //@Throws(Exception.constructor)
            
    public bool isReady(Image image, string name, TimeDelayHelper timeDelayHelper){

    playnImage: PlaynImage = image as PlaynImage;;
    

                        if(!playnImage!.getImage()!.isReady() && playnImage!.getImage()!.width() +playnImage!.getImage()!.height() == 0)
                        
                                    {
                                    
                        if(timeDelayHelper!.isTime())
                        
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
            
    waitForATime(Image image, string name, TimeDelayHelper timeDelayHelper){

    playnImage: PlaynImage = image as PlaynImage;;
    

        while(!playnImage!.getImage()!.isReady() && playnImage!.getImage()!.width() +playnImage!.getImage()!.height() == 0)
        {

                        if(timeDelayHelper!.isTime())
                        
                                    {
                                    


                            throw new Exception("waitFor: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: " +name);
                    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public waitForAll(){
this.allTimeDelayHelper!.setStartTime();
    

    hashtable: Hashtable<any, any> = GameFeatureImageCacheFactory.getInstance()!.getHashtable()!;;
    

    objectArray: std::vector<any> = HashtableUtil.getInstance()!.getKeysAsArray(hashtable)!;;
    

    size: int32_t = objectArray!.length
                ;;
    
PreLogUtil.put("Total: " +size, this, "waitForAll");
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.waitForATime(hashtable.get(objectArray[index]!) as Image, objectArray[index]! as string, this.allTimeDelayHelper);
    
}

}


};

            

