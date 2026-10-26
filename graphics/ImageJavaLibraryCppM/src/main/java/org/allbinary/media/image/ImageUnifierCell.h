
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageUnifierCell
            : public Object
         {

    private: Integer width;

    private: Integer height;

public: ImageUnifierCell(Integer width, Integer height);

    public: Integer getWidth();

    public: void setWidth(Integer width);

    public: Integer getHeight();

    public: void setHeight(Integer height);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERCELL_H
