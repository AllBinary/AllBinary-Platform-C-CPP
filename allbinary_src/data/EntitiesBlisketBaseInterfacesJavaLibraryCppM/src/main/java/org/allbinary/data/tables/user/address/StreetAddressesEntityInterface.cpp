
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StreetAddressesEntityInterface: public BasicDataTableInterface {

    public: virtual void remove(int32_t index) = 0;

    public: virtual void add(StreetAddress* address) = 0;

    public: virtual void update(StreetAddress* address) = 0;

    public: virtual std::string getLastId() = 0;

    public: virtual StreetAddress* getDefault() = 0;

    public: virtual void setDefault(std::string value) = 0;

};

            

