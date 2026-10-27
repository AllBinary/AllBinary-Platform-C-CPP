
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class PreLogUtil;
class CommonStrings;
class TimeDelayHelper;
class PlaynImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageCompleteUtil
            : public virtual Object
         {

    private: static ImageCompleteUtil* instance_owner();
    private: static ImageCompleteUtil* instance;

    public: static ImageCompleteUtil* getInstance();


            
    public: ImageCompleteUtil();
        
    /*protected*/ public: const std::string ISREADY = "isReady";

                //@Throws(Exception.constructor)
            
    public: void waitForImage(Image* image, std::string name);

    private: const std::string COMPLETE = "Image loading complete for: ";

                //@Throws(Exception.constructor)
            
    public: bool isReady(Image* image, std::string name, TimeDelayHelper* timeDelayHelper);

                //@Throws(Exception.constructor)
            
    public: void handleTimeout(std::string name);

                //@Throws(Exception.constructor)
            
    public: void waitForAll();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/microemu/device/playn/PlaynImage.h>)
#include <org/microemu/device/playn/PlaynImage.h>
#endif

        #endif
    
