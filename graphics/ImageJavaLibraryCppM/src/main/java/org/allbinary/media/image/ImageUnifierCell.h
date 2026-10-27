
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERCELL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERCELL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageUnifierCell
            : public virtual Object
         {

    private: int32_t width;

    private: int32_t height;

public: ImageUnifierCell(int32_t width, int32_t height);

    public: int32_t getWidth();

    public: void setWidth(int32_t width);

    public: int32_t getHeight();

    public: void setHeight(int32_t height);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERCELL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERCELL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERCELL_H_COMPLETE
        
        #endif
    
