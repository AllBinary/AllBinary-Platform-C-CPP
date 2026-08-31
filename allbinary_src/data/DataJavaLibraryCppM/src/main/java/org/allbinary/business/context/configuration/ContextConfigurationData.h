
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDATA_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDATA_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ContextConfigurationData
            : public Object
         {
        

    private: static const instance: ContextConfigurationData = new ContextConfigurationData();

    public static ContextConfigurationData getInstance();

private constructor ();

    public const NAME: string = "CONTEXT_CONFIGURATION_NAME";

    public const UNCRYPTED_EXTENSION: string = CommonDataFileStrings.getInstance()!.UNCRYPTED_EXTENSION;

    public const ENCRYPTED_EXTENSION: string = CommonDataFileStrings.getInstance()!.ENCRYPTED_EXTENSION;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDATA_H
