
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageUnifierCell;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageUnifierProperties
            : public virtual Object
         {

    private: int32_t rows;

    private: int32_t columns;

    private: ImageUnifierCell* imageUnifierCell;

public: ImageUnifierProperties();

    public: int32_t getWidth();

    public: int32_t getHeight();

    public: int32_t getRows();

    public: void setRows(int32_t rows);

    public: int32_t getColumns();

    public: void setColumns(int32_t columns);

    public: ImageUnifierCell* getImageUnifierCell();

    public: void setImageUnifierCell(ImageUnifierCell* imageUnifierCell);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_H_COMPLETE
        #if __has_include("org/allbinary/media/image/ImageUnifierCell.h")
#include "org/allbinary/media/image/ImageUnifierCell.h"
#endif

        #endif
    
