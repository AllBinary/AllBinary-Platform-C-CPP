
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <org/allbinary/util/ABHashMap.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/ABStack.h>

      
#include <org/allbinary/util/ABVector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class StdUtil
            : public Object
         {

    private: static StdUtil* instance() { static std::unique_ptr<StdUtil> value(new StdUtil()); return value.get(); }

    /*actual*/ public: static StdUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::instance();
    
}


    /*actual*/ public: ABVector<Object*>* EMPTY_VECTOR = this->createVector();

    /*actual*/ public: ABHashtable<Object*, Object*>* NULL_TABLE = this->createHashtable();

    /*actual*/ public: ABHashMap<Object*, Object*>* NULL_MAP = this->createHashMap();

    public: ABStack<Object*>* createStack(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ABStack<Object*>();
    
}


    public: ABVector<Object*>* createVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ABVector<Object*>();
    
}


    public: ABHashtable<Object*, Object*>* createHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ABHashtable<Object*, Object*>();
    
}


    public: ABHashMap<Object*, Object*>* createHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ABHashMap<Object*, Object*>();
    
}


};

            

