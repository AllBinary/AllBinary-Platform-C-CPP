
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class GameFeatureImageCacheFactory;
class LogUtil;
class PreLogUtil;
class TimeDelayHelper;
#include <org/allbinary/util/ABHashtable.h>
class HashtableUtil;
class PlaynImage;
class CoreImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCompleteUtil.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageWaitCompleteUtil: public ImageCompleteUtil {

    /*protected*/ public: LogUtil* logUtil;

    private: TimeDelayHelper* timeDelayHelper;

    private: TimeDelayHelper* allTimeDelayHelper;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEWAITCOMPLETEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEWAITCOMPLETEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/image/GameFeatureImageCacheFactory.h>)
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/HashtableUtil.h>)
#include <org/allbinary/util/HashtableUtil.h>
#endif
#if __has_include(<org/microemu/device/playn/PlaynImage.h>)
#include <org/microemu/device/playn/PlaynImage.h>
#endif
#if __has_include(<playn/core/CoreImage.h>)
#include <playn/core/CoreImage.h>
#endif
#if __has_include("org/allbinary/media/image/ImageCompleteUtil.h")
#include "org/allbinary/media/image/ImageCompleteUtil.h"
#endif

        #endif
    
