
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUnifierCell.h"

class ImageUnifierProperties
            : public Object
         {

    private: Integer rows;

    private: Integer columns;

    private: ImageUnifierCell imageUnifierCell;

public: ImageUnifierProperties();

    public: int32_t getWidth();

    public: int32_t getHeight();

    public: Integer getRows();

    public: void setRows(Integer rows);

    public: Integer getColumns();

    public: void setColumns(Integer columns);

    public: ImageUnifierCell getImageUnifierCell();

    public: void setImageUnifierCell(ImageUnifierCell imageUnifierCell);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_H
