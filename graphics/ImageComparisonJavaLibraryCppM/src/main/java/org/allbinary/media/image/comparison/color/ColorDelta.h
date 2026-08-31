
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ColorDelta
            : public Object
        : public CacheableInterface {
        

    public static any getKey(int32_t rgb1, int32_t rgb2);

    private: rgb1: int32_t= 0;

    private: rgb2: int32_t= 0;

    private: key: any;

public constructor (int32_t rgb1, int32_t rgb2);

    public any getKey();

    public int32_t getRgb1();

    setRgb1(int32_t rgb1);

    public int32_t getRgb2();

    setRgb2(int32_t rgb2);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_H
