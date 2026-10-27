
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicArrayListD;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageTypeUtil
            : public virtual Object
         {

    private: static ImageTypeUtil* SINGLETON_owner();
    private: static ImageTypeUtil* SINGLETON;

    public: static ImageTypeUtil* getInstance();

    public: const std::string PNG = "png";

    public: const std::string JPG = "jpg";

    public: const std::string GIF = "gif";

    private: BasicArrayList* list;

private: ImageTypeUtil();

    public: bool isSupported(std::string mediaFileType);

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/image/BasicArrayListD.h")
#include "org/allbinary/image/BasicArrayListD.h"
#endif

        #endif
    
