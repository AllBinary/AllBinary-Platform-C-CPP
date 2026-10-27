
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/ABStack.h>

      
#include <org/allbinary/util/ABVector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class StdUtil
            : public Object
         {

    private: static StdUtil* instance() { static std::unique_ptr<StdUtil> value(new StdUtil()); return value.get(); }

    /*actual*/ public: static StdUtil* getInstance();

    /*actual*/ public: ABVector<Object*>* EMPTY_VECTOR = this->createVector();

    /*actual*/ public: ABHashtable<Object*, Object*>* NULL_TABLE = this->createHashtable();

    public: ABStack<Object*>* createStack();

    public: ABVector<Object*>* createVector();

    public: ABHashtable<Object*, Object*>* createHashtable();

};

            


        #endif //ORG_ALLBINARY_LOGIC_STDUTIL_H
