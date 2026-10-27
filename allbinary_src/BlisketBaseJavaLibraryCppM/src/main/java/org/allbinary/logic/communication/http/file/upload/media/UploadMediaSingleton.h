
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class StdUtil;
class LogUtil;
class StringMaker;
class MediaData;
class MediaIOUtil;
class MediaTypeData;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UploadMediaSingleton
            : public virtual Object
         {

    private: static inline UploadMediaSingleton* uploadMedia;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static UploadMediaSingleton* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: HashMap<Object*, Object*>* readerFileTypesHashMap;

    private: HashMap<Object*, Object*>* writerFileTypesHashMap;

private: UploadMediaSingleton();

    public: bool isReaderSupported(std::string mediaFileType);

    public: bool isWriterSupported(std::string mediaFileType);

    public: bool isSupported(std::string mediaFileType);

    public: bool isMedia(std::string mediaFileType, std::string aMediaType);

    public: bool isReaderMedia(std::string mediaFileType, std::string aMediaType);

    public: bool isWriterMedia(std::string mediaFileType, std::string aMediaType);

    private: bool isMedia(std::string mediaFileType, std::string aMediaType, HashMap<Object*, Object*>* hashMap);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_MEDIA_UPLOADMEDIASINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_MEDIA_UPLOADMEDIASINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_MEDIA_UPLOADMEDIASINGLETON_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/media/MediaData.h>)
#include <org/allbinary/logic/visual/media/MediaData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/media/MediaIOUtil.h>)
#include <org/allbinary/logic/visual/media/MediaIOUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/media/MediaTypeData.h>)
#include <org/allbinary/logic/visual/media/MediaTypeData.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
