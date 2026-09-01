
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_MEDIA_UPLOADMEDIASINGLETON_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_MEDIA_UPLOADMEDIASINGLETON_H

            #include <vector>
        
            #include "../../../../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/media/MediaData.h>

      
#include <org/allbinary/logic/visual/media/MediaIOUtil.h>

      
#include <org/allbinary/logic/visual/media/MediaTypeData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UploadMediaSingleton
            : public Object
         {

    private: static UploadMediaSingleton uploadMedia;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static UploadMediaSingleton getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: HashMap<any, any> readerFileTypesHashMap;

    private: HashMap<any, any> writerFileTypesHashMap;

private: UploadMediaSingleton();

    public: bool isReaderSupported(std::string mediaFileType);

    public: bool isWriterSupported(std::string mediaFileType);

    public: bool isSupported(std::string mediaFileType);

    public: bool isMedia(std::string mediaFileType, std::string aMediaType);

    public: bool isReaderMedia(std::string mediaFileType, std::string aMediaType);

    public: bool isWriterMedia(std::string mediaFileType, std::string aMediaType);

    private: bool isMedia(std::string mediaFileType, std::string aMediaType, HashMap<any, any> hashMap);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_MEDIA_UPLOADMEDIASINGLETON_H
