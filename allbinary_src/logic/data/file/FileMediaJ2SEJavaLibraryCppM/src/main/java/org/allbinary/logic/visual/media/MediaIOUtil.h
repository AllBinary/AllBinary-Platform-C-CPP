
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H

            #include "../../../../../java/lang/Object.h"
        
#include <javax/imageio/ImageIO.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MediaIOUtil
            : public Object
         {
        

    private: static const instance: MediaIOUtil = new MediaIOUtil();

    public static MediaIOUtil getInstance();

    public std::vector<string> getReaderFormatNames();

    public std::vector<string> getWriterFormatNames();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H
