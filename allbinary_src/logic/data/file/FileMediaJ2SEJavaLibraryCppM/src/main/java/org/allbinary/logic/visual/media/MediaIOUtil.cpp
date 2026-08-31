
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <javax/imageio/ImageIO.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MediaIOUtil
            : public Object
         {
        

    private: static const instance: MediaIOUtil = new MediaIOUtil();

    public static MediaIOUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaIOUtil.instance;
    
}


    public std::vector<string> getReaderFormatNames(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO.getReaderFormatNames();;
    
}


    public std::vector<string> getWriterFormatNames(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO.getWriterFormatNames();;
    
}


};

            

