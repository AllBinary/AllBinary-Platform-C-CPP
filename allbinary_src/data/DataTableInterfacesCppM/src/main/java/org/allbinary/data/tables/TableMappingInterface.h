
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TABLEMAPPINGINTERFACE_H
        #define ORG_ALLBINARY_DATA_TABLES_TABLEMAPPINGINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TableMappingInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual Object* getKey() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* toVector() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual HashMap<Object*, Object*>* toHashMap() = 0;

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_TABLEMAPPINGINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_TABLEMAPPINGINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_TABLEMAPPINGINTERFACE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
