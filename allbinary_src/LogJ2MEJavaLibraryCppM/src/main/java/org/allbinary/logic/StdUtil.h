
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
template<typename T1, typename T2> class ABHashtable;
template<typename T1> class ABStack;
template<typename T1> class ABVector;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class StdUtil
            : public virtual Object
         {

    private: static StdUtil* instance_owner();
    private: static StdUtil* instance;

    /*actual*/ public: static StdUtil* getInstance();


            
    public: StdUtil();
        
    /*actual*/ public: ABVector<Object*>* EMPTY_VECTOR;

    /*actual*/ public: ABHashtable<Object*, Object*>* NULL_TABLE;

    public: ABStack<Object*>* createStack();

    public: ABVector<Object*>* createVector();

    public: ABHashtable<Object*, Object*>* createHashtable();

};

            


        #endif //ORG_ALLBINARY_LOGIC_STDUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_STDUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_STDUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/ABStack.h>)
#include <org/allbinary/util/ABStack.h>
#endif
#if __has_include(<org/allbinary/util/ABVector.h>)
#include <org/allbinary/util/ABVector.h>
#endif

        #endif
    
