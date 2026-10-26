
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/microemu/device/playn/PlaynImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageCompleteUtil
            : public Object
         {

    private: static ImageCompleteUtil instance() { return ImageCompleteUtil(); }

    public: static ImageCompleteUtil getInstance();

    protected: const std::string ISREADY = "isReady";

                //@Throws(Exception.constructor)
            
    public: void waitForImage(Image image, std::string name);

    private: const std::string COMPLETE = "Image loading complete for: ";

                //@Throws(Exception.constructor)
            
    public: bool isReady(Image image, std::string name, TimeDelayHelper timeDelayHelper);

                //@Throws(Exception.constructor)
            
    public: void handleTimeout(std::string name);

                //@Throws(Exception.constructor)
            
    public: void waitForAll();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H
