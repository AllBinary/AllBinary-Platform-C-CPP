
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H

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

    public static ImageCompleteUtil getInstance();

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(18000);

    private: const allTimeDelayHelper: TimeDelayHelper = new TimeDelayHelper(120000);

                //@Throws(Exception.constructor)
            
    public waitForImage(Image image, string name);

                //@Throws(Exception.constructor)
            
    public bool isReady(Image image, string name, TimeDelayHelper timeDelayHelper);

                //@Throws(Exception.constructor)
            
    waitForATime(Image image, string name, TimeDelayHelper timeDelayHelper);

                //@Throws(Exception.constructor)
            
    public waitForAll();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H
