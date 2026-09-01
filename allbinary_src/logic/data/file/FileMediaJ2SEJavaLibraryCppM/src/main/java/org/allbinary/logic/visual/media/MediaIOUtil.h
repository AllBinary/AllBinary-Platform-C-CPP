
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
#include <javax/imageio/ImageIO.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MediaIOUtil
            : public Object
         {

    private: static MediaIOUtil instance() { return MediaIOUtil(); }

    public: static MediaIOUtil getInstance();

    public: std::vector<std::string> getReaderFormatNames();

    public: std::vector<std::string> getWriterFormatNames();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H
