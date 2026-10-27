
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/util/HashMap.h>
class StdUtil;
class LogUtil;
class LogConfigTypeFactory;
class LogConfigTypes;
class AbFile;
class StringMaker;
class ImageUtil;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageIOUtil;
class MediaData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //import com.sun.imageio.plugins.common.ImageUtil;
class MediaUtil
            : public virtual Object
         {

    private: static MediaUtil* instance_owner();
    private: static MediaUtil* instance;

    public: static MediaUtil* getInstance();

    private: static HashMap<Object*, Object*>* getImageBufferPropertyHashMap(BufferedImage* bufferedImage);

    /*protected*/ public: LogUtil* logUtil;

private: MediaUtil();

                //@Throws(Exception.constructor)
            
    public: void saveImageFile(AbFile* originalImageFile, std::string newImageFileName, std::string category, MediaData* mediaData, int32_t newWidth, int32_t newHeight);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/awt/image/RenderedImage.h>)
#include <java/awt/image/RenderedImage.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageUtil.h>)
#include <org/allbinary/media/image/ImageUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include("org/allbinary/logic/visual/media/ImageIOUtil.h")
#include "org/allbinary/logic/visual/media/ImageIOUtil.h"
#endif
#if __has_include("org/allbinary/logic/visual/media/MediaData.h")
#include "org/allbinary/logic/visual/media/MediaData.h"
#endif

        #endif
    
