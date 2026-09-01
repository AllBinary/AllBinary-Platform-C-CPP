
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Color.h"

class ColorCacheable
            : public Object
        : public CacheableInterface {

    private: Object* key;

    private: Color color;

public: ColorCacheable(Object* key);

    public: Object* getKey();

    public: Color getColor();

    public: void setColor(Color color);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_H
