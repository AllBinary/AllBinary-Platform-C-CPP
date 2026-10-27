
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
        



        #ifndef ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_H
        #define ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StdUtil;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class KeyValueFactory
            : public virtual Object
         {

    private: static KeyValueFactory* instance_owner();
    private: static KeyValueFactory* instance;

    public: static KeyValueFactory* getInstance();


            
    public: KeyValueFactory();
        
    public: ABHashtable<Object*, Object*>* MAP;

    public: std::string get(std::string key);

};

            


        #endif //ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
