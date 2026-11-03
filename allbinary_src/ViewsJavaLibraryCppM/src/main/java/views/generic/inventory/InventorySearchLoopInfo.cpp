
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHLOOPINFO_CPP
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHLOOPINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/inventory/InventorySearchLoopInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InventorySearchLoopInfo::InventorySearchLoopInfo() {
        }
        
    auto InventorySearchLoopInfo::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->CURRENT);
    
stringBuffer->appendint(this->currentPage);
    
stringBuffer->append(this->NUM);
    
stringBuffer->appendint(this->numberOfResults);
    
stringBuffer->append(this->LAST);
    
stringBuffer->appendint(this->lastPage);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHLOOPINFO_CPP
