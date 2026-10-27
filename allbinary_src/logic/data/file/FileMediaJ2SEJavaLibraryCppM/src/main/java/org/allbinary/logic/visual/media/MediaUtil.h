
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H

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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/media/ImageIOUtil.h"
#include "org/allbinary/logic/visual/media/MediaData.h"
//import com.sun.imageio.plugins.common.ImageUtil;
class MediaUtil
            : public Object
         {

    private: static MediaUtil* instance() { static std::unique_ptr<MediaUtil> value(new MediaUtil()); return value.get(); }

    public: static MediaUtil* getInstance();

    private: static HashMap<Object*, Object*>* getImageBufferPropertyHashMap(BufferedImage* bufferedImage);

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: MediaUtil();

                //@Throws(Exception.constructor)
            
    public: void saveImageFile(AbFile* originalImageFile, std::string newImageFileName, std::string category, MediaData* mediaData, int32_t newWidth, int32_t newHeight);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H
