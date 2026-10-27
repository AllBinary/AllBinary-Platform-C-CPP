
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H
        #define ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/BasicArrayListD.h"

class ImageTypeUtil
            : public Object
         {

    private: static ImageTypeUtil* SINGLETON() { static std::unique_ptr<ImageTypeUtil> value(new ImageTypeUtil()); return value.get(); }

    public: static ImageTypeUtil* getInstance();

    public: const std::string PNG = "png";

    public: const std::string JPG = "jpg";

    public: const std::string GIF = "gif";

    private: BasicArrayList* list = new BasicArrayListD();

private: ImageTypeUtil();

    public: bool isSupported(std::string mediaFileType);

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H
