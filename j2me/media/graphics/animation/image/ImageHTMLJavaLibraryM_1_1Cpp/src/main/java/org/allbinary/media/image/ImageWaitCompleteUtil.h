
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

class ImageWaitCompleteUtil: public ImageCompleteUtil {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: TimeDelayHelper* timeDelayHelper = new TimeDelayHelper(18000);

    private: TimeDelayHelper* allTimeDelayHelper = new TimeDelayHelper(120000);

public: ImageWaitCompleteUtil();

                //@Throws(Exception.constructor)
            
    public: void waitForImage(Image* image, std::string name);

                //@Throws(Exception.constructor)
            
    public: void handleTimeout(std::string name);

                //@Throws(Exception.constructor)
            
    private: void waitForATime(Image* image, std::string name, TimeDelayHelper* timeDelayHelper);

                //@Throws(Exception.constructor)
            
    public: void waitForAll();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEWAITCOMPLETEUTIL_H
