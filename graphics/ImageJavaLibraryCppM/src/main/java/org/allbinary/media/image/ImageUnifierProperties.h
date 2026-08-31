
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUnifierCell.h"

class ImageUnifierProperties
            : public Object
         {
        

    private: rows: Integer;

    private: columns: Integer;

    private: imageUnifierCell: ImageUnifierCell;

public constructor ();

    public int32_t getWidth();

    public int32_t getHeight();

    public Integer getRows();

    public setRows(Integer rows);

    public Integer getColumns();

    public setColumns(Integer columns);

    public ImageUnifierCell getImageUnifierCell();

    public setImageUnifierCell(ImageUnifierCell imageUnifierCell);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERPROPERTIES_H
