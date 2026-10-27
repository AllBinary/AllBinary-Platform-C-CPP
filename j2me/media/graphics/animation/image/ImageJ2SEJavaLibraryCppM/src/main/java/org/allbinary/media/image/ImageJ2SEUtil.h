
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/Color.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageJ2SEUtil
            : public virtual Object
         {

    private: static ImageJ2SEUtil* instance_owner();
    private: static ImageJ2SEUtil* instance;

    public: static ImageJ2SEUtil* getInstance();


            
    public: ImageJ2SEUtil();
        
    public: Color* TRANSPARENT_COLOR;

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEUTIL_H_COMPLETE
        #if __has_include(<java/awt/Color.h>)
#include <java/awt/Color.h>
#endif

        #endif
    
