
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTINGINTERFACE_H
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTINGINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ProductListingInterface {

                //@Throws(Exception.constructor)
            
    public: virtual std::string generateAll() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string generateAll(std::string storeName) = 0;

};

            


        #endif //VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTINGINTERFACE_H
