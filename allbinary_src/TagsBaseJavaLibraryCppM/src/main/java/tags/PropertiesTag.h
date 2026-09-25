
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
        



        #ifndef TAGS_PROPERTIESTAG_H
        #define TAGS_PROPERTIESTAG_H

#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommandTag.h"

class PropertiesTag: public CommandTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HashMap<any, any> propertiesHashMap;

public: PropertiesTag();

    protected: HashMap<any, any> getPropertiesHashMap();

    public: int32_t doEndTag();

};

            


        #endif //TAGS_PROPERTIESTAG_H
