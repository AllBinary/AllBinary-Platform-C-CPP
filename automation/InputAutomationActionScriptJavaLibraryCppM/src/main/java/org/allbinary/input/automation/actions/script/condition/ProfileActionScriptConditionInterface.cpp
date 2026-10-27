
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
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/CustomTreeNodeInterface.h"

class ProfileActionScriptConditionInterface: public ProfileActionScriptNodeInterface, public CustomTreeNodeInterface, public ProfileActionScriptItemInterface {

    public: virtual void addProcessor(ProfileActionScriptProcessorInterface* profileActionProcessorInterface) = 0;

    public: virtual void removeProcessor(ProfileActionScriptProcessorInterface* profileActionProcessorInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool shouldProcess(int64_t frame) = 0;

};

            

