
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

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontsData
            : public Object
         {

    private: static StoreFrontsData* instance() { static std::unique_ptr<StoreFrontsData> value(new StoreFrontsData()); return value.get(); }

    public: static StoreFrontsData* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreFrontsData::instance();
    
}


    public: const std::string TYPE = "STOREFRONTS_TYPE";

    public: const std::string RETAIL = "STOREFRONTS_RETAIL";

    public: const std::string SUBSCRIPTION = "STOREFRONTS_SUBSCRIPTION";

    public: const std::string AUCTION = "STOREFRONTS_AUCTION";

    public: const std::string NEWS = "STOREFRONTS_NEWS";

    public: const std::string BLOG = "STOREFRONTS_BLOG";

    public: const std::string FORUM = "STOREFRONTS_FORUM";

};

            

