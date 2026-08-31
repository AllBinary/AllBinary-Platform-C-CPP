
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
        



            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoObjectConfigData
            : public Object
         {
        

    private: static const instance: TransformInfoObjectConfigData = new TransformInfoObjectConfigData();

    public static TransformInfoObjectConfigData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoObjectConfigData.instance;
    
}


private constructor (){

            super();
        }


    public const NAME: string = "OBJECTCONFIG_NAME";

    public const VARKEY: string = "$";

    public const UNCRYPTED_EXTENSION: string = CommonDataFileStrings.getInstance()!.UNCRYPTED_EXTENSION;

    public const ENCRYPTED_EXTENSION: string = CommonDataFileStrings.getInstance()!.ENCRYPTED_EXTENSION;

};

            

