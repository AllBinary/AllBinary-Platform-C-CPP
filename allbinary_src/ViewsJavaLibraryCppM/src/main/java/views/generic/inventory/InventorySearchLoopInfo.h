
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

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventorySearchLoopInfo
            : public Object
         {
        

    public lastPage: int32_t =  -1;

    public currentPage: int32_t =  -1;

    public numberOfResultsOnCurrentPage: int32_t = 0;

    public numberOfResults: int32_t = 0;

    private: const CURRENT: string = "current: ";

    private: const NUM: string = " num: ";

    private: const LAST: string = " last: ";

    public string toString();

};

            


        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHLOOPINFO_H
