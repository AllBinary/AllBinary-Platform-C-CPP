
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
        



            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontsData
            : public Object
         {
        

    private: static const instance: StoreFrontsData = new StoreFrontsData();

    public static StoreFrontsData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreFrontsData.instance;
    
}


    public const TYPE: string = "STOREFRONTS_TYPE";

    public const RETAIL: string = "STOREFRONTS_RETAIL";

    public const SUBSCRIPTION: string = "STOREFRONTS_SUBSCRIPTION";

    public const AUCTION: string = "STOREFRONTS_AUCTION";

    public const NEWS: string = "STOREFRONTS_NEWS";

    public const BLOG: string = "STOREFRONTS_BLOG";

    public const FORUM: string = "STOREFRONTS_FORUM";

};

            

