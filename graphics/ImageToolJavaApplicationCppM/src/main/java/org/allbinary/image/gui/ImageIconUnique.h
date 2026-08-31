
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGEICONUNIQUE_H
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGEICONUNIQUE_H

#include <java/awt/image/BufferedImage.h>

      
#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageIcon.h"

class ImageIconUnique: public ImageIcon {
        

    private: id: int32_t= 0;

public constructor (BufferedImage bufferedImage, int32_t index);

    public int32_t getId();

    public setId(int32_t id);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEICONUNIQUE_H
