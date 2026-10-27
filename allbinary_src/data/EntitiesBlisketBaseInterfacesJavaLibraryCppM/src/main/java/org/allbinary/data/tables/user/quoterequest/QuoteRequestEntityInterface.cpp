
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

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class QuoteRequestEntityInterface: public BasicDataTableInterface {

                //@Throws(Exception.constructor)
            
    public: virtual QuoteRequest* get(std::string userName, int32_t id) = 0;

    public: virtual BasicArrayList* getIds(std::string userName) = 0;

    public: virtual void deleteWhere(std::string key, std::string value) = 0;

    public: virtual void insert(BasicArrayList* values) = 0;

    public: virtual void update(std::string userName, HashMap<Object*, Object*>* updatedValues) = 0;

};

            

