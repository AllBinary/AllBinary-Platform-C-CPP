
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageUnifierProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUnifierCell.h"


ImageUnifierProperties::ImageUnifierProperties(){
}


    auto ImageUnifierProperties::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getColumns() *JavaBoxes::value<int32_t>(this->getImageUnifierCell()->getWidth());
    
}


    auto ImageUnifierProperties::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getRows() *JavaBoxes::value<int32_t>(this->getImageUnifierCell()->getHeight());
    
}


    auto ImageUnifierProperties::getRows() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rows;
    
}


    auto ImageUnifierProperties::setRows(int32_t rows) -> void{
this->rows= rows;
    
}


    auto ImageUnifierProperties::getColumns() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->columns;
    
}


    auto ImageUnifierProperties::setColumns(int32_t columns) -> void{
this->columns= columns;
    
}


    auto ImageUnifierProperties::getImageUnifierCell() -> ImageUnifierCell*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageUnifierCell;
    
}


    auto ImageUnifierProperties::setImageUnifierCell(ImageUnifierCell* imageUnifierCell) -> void{
this->imageUnifierCell= imageUnifierCell;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_CPP
