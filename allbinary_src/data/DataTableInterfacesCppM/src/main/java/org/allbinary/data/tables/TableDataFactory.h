
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TableDataFactory
            : public Object
         {

    private: static TableDataFactory instance() { return TableDataFactory(); }

    public: static TableDataFactory getInstance();

    public: const std::string INTEGER_MAX_VALUE_STRING = Integer::toString(Integer::MAX_VALUE);

    public: const std::string ZERO_STRING = CommonPhoneStrings::getInstance().ZERO;

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_TABLEDATAFACTORY_H
