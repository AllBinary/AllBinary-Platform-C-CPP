
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
#include <javax/imageio/ImageIO.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MediaIOUtil
            : public Object
         {

    private: static MediaIOUtil instance() { return MediaIOUtil(); }

    public: static MediaIOUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaIOUtil::instance();
    
}


    public: std::vector<std::string> getReaderFormatNames(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO::getReaderFormatNames();;
    
}


    public: std::vector<std::string> getWriterFormatNames(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO::getWriterFormatNames();;
    
}


};

            

