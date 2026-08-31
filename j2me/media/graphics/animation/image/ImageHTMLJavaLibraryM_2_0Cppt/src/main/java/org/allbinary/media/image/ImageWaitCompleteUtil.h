
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEWAITCOMPLETEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEWAITCOMPLETEUTIL_H

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

public constructor ();

                //@Throws(Exception.constructor)
            
    public waitForImage(Image image, string name);

                //@Throws(Exception.constructor)
            
    public handleTimeout(string name);

                //@Throws(Exception.constructor)
            
    waitForATime(Image image, string name, TimeDelayHelper timeDelayHelper);

                //@Throws(Exception.constructor)
            
    public waitForAll();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEWAITCOMPLETEUTIL_H
