
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageIOUtil.h"
#include "MediaData.h"
//import com.sun.imageio.plugins.common.ImageUtil;
class MediaUtil
            : public Object
         {
        

    private: static const instance: MediaUtil = new MediaUtil();

    public static MediaUtil getInstance();

    static HashMap<any, any> getImageBufferPropertyHashMap(BufferedImage bufferedImage);

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            
    public saveImageFile(AbFile originalImageFile, string newImageFileName, string category, MediaData mediaData, int32_t newWidth, int32_t newHeight);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_H
