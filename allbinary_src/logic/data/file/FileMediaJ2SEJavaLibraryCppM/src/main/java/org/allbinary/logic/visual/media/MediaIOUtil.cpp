
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/media/MediaIOUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/imageio/ImageIO.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MediaIOUtil::MediaIOUtil() {
        }
        auto MediaIOUtil::instance_owner() -> MediaIOUtil* { static std::unique_ptr<MediaIOUtil> value(new MediaIOUtil()); return value.get(); }
MediaIOUtil* MediaIOUtil::instance = MediaIOUtil::instance_owner();

    auto MediaIOUtil::getInstance() -> MediaIOUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaIOUtil::instance;
    
}


    auto MediaIOUtil::getReaderFormatNames() -> std::vector<std::string>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO::getReaderFormatNames();;
    
}


    auto MediaIOUtil::getWriterFormatNames() -> std::vector<std::string>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO::getWriterFormatNames();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_CPP
