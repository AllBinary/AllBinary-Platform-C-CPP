
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STDUTIL_H
        #define ORG_ALLBINARY_LOGIC_STDUTIL_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/util/ABHashMap.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/ABStack.h>

      
#include <org/allbinary/util/ABVector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //NoPlatform
// class StdUtil
            : public Object
         {

    private: static StdUtil instance() { return StdUtil(); }

    /*actual*/ public: static StdUtil getInstance();

    /*actual*/ public: const ABVector<Object*> EMPTY_VECTOR

    /*actual*/ public: const ABHashtable<Object*, Object*> NULL_TABLE

    /*actual*/ public: const ABHashMap<Object*, Object*> NULL_MAP

    public: ABStack<Object*> createStack();

    public: ABVector<Object*> createVector();

    public: ABHashtable<Object*, Object*> createHashtable();

    public: ABHashMap<Object*, Object*> createHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_STDUTIL_H
