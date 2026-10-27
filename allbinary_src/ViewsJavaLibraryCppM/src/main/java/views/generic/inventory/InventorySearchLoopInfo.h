
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHLOOPINFO_H
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHLOOPINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventorySearchLoopInfo
            : public virtual Object
         {


            
    public: InventorySearchLoopInfo();
        
    public: int32_t lastPage =  -1;

    public: int32_t currentPage =  -1;

    public: int32_t numberOfResultsOnCurrentPage = 0;

    public: int32_t numberOfResults = 0;

    private: const std::string CURRENT = "current: ";

    private: const std::string NUM = " num: ";

    private: const std::string LAST = " last: ";

    public: std::string toString();

};

            


        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHLOOPINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHLOOPINFO_H_COMPLETE)
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHLOOPINFO_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
