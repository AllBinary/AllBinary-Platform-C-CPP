
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H
        #define ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageTypeUtil
            : public Object
         {
        

    private: static SINGLETON: ImageTypeUtil = new ImageTypeUtil();

    public static ImageTypeUtil getInstance();

    public const PNG: string = "png";

    public const JPG: string = "jpg";

    public const GIF: string = "gif";

    private: const list: BasicArrayList = new BasicArrayListD();

private constructor ();

    public bool isSupported(string mediaFileType);

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H
