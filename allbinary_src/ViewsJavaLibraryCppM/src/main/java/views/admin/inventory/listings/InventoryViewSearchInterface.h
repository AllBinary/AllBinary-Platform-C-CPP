
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventoryViewSearchInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual std::string searchSingleStaticPage() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string searchSingleDynamicPage() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::vector<std::string> search() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getProduct(std::string product) = 0;

};

            


        #endif //VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWSEARCHINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWSEARCHINTERFACE_H_COMPLETE)
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWSEARCHINTERFACE_H_COMPLETE
        
        #endif
    
