
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

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageTypeUtil
            : public Object
         {

    private: static ImageTypeUtil SINGLETON = ImageTypeUtil();

    public: static ImageTypeUtil getInstance();

    public: const std::string PNG = "png";

    public: const std::string JPG = "jpg";

    public: const std::string GIF = "gif";

    private: const BasicArrayList list = BasicArrayListD();

private: ImageTypeUtil();

    public: bool isSupported(std::string mediaFileType);

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H
