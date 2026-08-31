
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColor.h"
#include "BasicColorFactory.h"

class SmallBasicColorCacheFactory
            : public Object
         {
        

    private: static const instance: SmallBasicColorCacheFactory = new SmallBasicColorCacheFactory();

    public static SmallBasicColorCacheFactory getInstance();

    private: const SIZE: int32_t = 255;

    private: const INDEX_TO_COLOR: std::vector<int32_t> = new Array(this.SIZE);

    private: const BASIC_COLOR_ARRAY: std::vector<BasicColor> = new Array(this.SIZE);

    private: colorIndex: int32_t = 0;

private constructor ();

    public add(BasicColor basicDefaultColor);

    public BasicColor getAndOrCreate(int32_t colorAsInt);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H
