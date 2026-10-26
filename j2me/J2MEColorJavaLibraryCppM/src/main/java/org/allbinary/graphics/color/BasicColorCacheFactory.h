
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColor.h"
#include "BasicColorFactory.h"

class BasicColorCacheFactory
            : public Object
         {

    private: static BasicColorCacheFactory instance() { return BasicColorCacheFactory(); }

    public: static BasicColorCacheFactory getInstance();

    private: const ABHashtable<Object*, Object*> hashtable = StdUtil::getInstance().createHashtable();

private: BasicColorCacheFactory();

    public: void add(BasicColor basicDefaultColor);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: BasicColor getAndOrCreate(Integer integer);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H
