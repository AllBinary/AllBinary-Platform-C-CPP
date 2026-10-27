
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_PAGE_PAGEDATA_H
        #define ORG_ALLBINARY_BUSINESS_PAGE_PAGEDATA_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PageData
            : public Object
         {

    private: static PageData* instance() { static std::unique_ptr<PageData> value(new PageData()); return value.get(); }

    public: static PageData* getInstance();

private: PageData();

    public: const std::string NAME = "PAGE_NAME";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_PAGE_PAGEDATA_H
