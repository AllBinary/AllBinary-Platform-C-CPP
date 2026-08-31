
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONMAPPING_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONMAPPING_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailConfigurationInterface.h"
#include "UserEmailConfigurationData.h"

class UserEmailConfigurationMapping
            : public Object
        : public TableMappingInterface {
        

    private: userEmailConfigurationInterface: UserEmailConfigurationInterface;

public constructor (UserEmailConfigurationInterface userEmailConfigurationInterface);

    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public any getKey();

                //@Throws(Exception.constructor)
            
    public Vector toVector();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONMAPPING_H
