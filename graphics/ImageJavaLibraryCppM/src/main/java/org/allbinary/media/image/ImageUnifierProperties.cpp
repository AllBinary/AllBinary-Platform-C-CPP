
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUnifierCell.h"

class ImageUnifierProperties
            : public Object
         {

    private: int32_t rows;

    private: int32_t columns;

    private: ImageUnifierCell* imageUnifierCell;

public: ImageUnifierProperties(){
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getColumns().intValue() *this->getImageUnifierCell()->getWidth().intValue();
    
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRows().intValue() *this->getImageUnifierCell()->getHeight().intValue();
    
}


    public: int32_t getRows(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rows;
    
}


    public: void setRows(int32_t rows){
this->rows= rows;
    
}


    public: int32_t getColumns(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columns;
    
}


    public: void setColumns(int32_t columns){
this->columns= columns;
    
}


    public: ImageUnifierCell* getImageUnifierCell(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageUnifierCell;
    
}


    public: void setImageUnifierCell(ImageUnifierCell* imageUnifierCell){
this->imageUnifierCell= imageUnifierCell;
    
}


};

            

