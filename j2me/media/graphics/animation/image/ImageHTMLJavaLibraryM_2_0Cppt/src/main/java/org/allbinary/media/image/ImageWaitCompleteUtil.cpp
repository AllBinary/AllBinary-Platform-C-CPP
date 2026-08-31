
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/microemu/device/playn/PlaynImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCompleteUtil.h"

class ImageWaitCompleteUtil: public ImageCompleteUtil {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const METHOD_NAME: string = "waitForLoad";

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(18000);

    private: const allTimeDelayHelper: TimeDelayHelper = new TimeDelayHelper(120000);

public constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public waitForImage(Image image, string name){
this.timeDelayHelper!.setStartTimeTNT();
    
this.waitForATime(image, name, this.timeDelayHelper);
    
}


                //@Throws(Exception.constructor)
            
    public handleTimeout(string name){

                        if(this.timeDelayHelper!.isTimeTNT())
                        
                                    {
                                    


                            throw new Exception("isReady: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: " +name);
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    waitForATime(Image image, string name, TimeDelayHelper timeDelayHelper){

    playnImage: PlaynImage = image as PlaynImage;;
    

    playnCoreImage: playn.core.Image = playnImage!.getImage() as playn.core.Image;;
    

        while(!playnCoreImage!.isReady() || playnCoreImage!.width() +playnCoreImage!.height() <= 0)
        {

                        if(timeDelayHelper!.isTimeTNT())
                        
                                    {
                                    


                            throw new Exception("waitFor: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: " +name);
                    

                                    }
                                
}


                        if(!image.isReady())
                        
                                    {
                                    image.init(image.getImage());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public waitForAll(){
this.allTimeDelayHelper!.setStartTimeTNT();
    

    hashtable: Hashtable<any, any> = GameFeatureImageCacheFactory.getInstance()!.getHashtableP()!;;
    

    objectArray: std::vector<any> = HashtableUtil.getInstance()!.getKeysAsArray(hashtable)!;;
    

    size: int32_t = objectArray!.length
                ;;
    
PreLogUtil.put("Image Total: " +size, this, "waitForAll");
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.waitForATime(hashtable.get(objectArray[index]!) as Image, objectArray[index]! as string, this.allTimeDelayHelper);
    
}

}


};

            

