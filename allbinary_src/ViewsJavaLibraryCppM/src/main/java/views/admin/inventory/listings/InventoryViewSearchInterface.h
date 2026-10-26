
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWSEARCHINTERFACE_H
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWSEARCHINTERFACE_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventoryViewSearchInterface {

                //@Throws(Exception.constructor)
            
    std::string searchSingleStaticPage();

                //@Throws(Exception.constructor)
            
    std::string searchSingleDynamicPage();

                //@Throws(Exception.constructor)
            
    std::vector<std::string> search();

                //@Throws(Exception.constructor)
            
    std::string getProduct(std::string product);

};

            


        #endif //VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWSEARCHINTERFACE_H
