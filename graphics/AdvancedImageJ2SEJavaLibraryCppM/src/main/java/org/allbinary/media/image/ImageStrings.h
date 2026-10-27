
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESTRINGS_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageStrings
            : public virtual Object
         {

    private: static ImageStrings* instance_owner();
    private: static ImageStrings* instance;

    public: static ImageStrings* getInstance();


            
    public: ImageStrings();
        
    public: const std::string PNG = "PNG";

    public: const std::string PNG_EXTENSION = ".png";

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGESTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESTRINGS_H_COMPLETE
        
        #endif
    
