
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AuthorizationType.h"

class AuthorizationTypeFactory
            : public Object
         {
        

    private: static const instance: AuthorizationTypeFactory = new AuthorizationTypeFactory();

    public static AuthorizationTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AuthorizationTypeFactory.instance;
    
}


    public const NONE: AuthorizationType = new AuthorizationType("None");

    public const VOICE: AuthorizationType = new AuthorizationType("Voice");

    public const RETINAL: AuthorizationType = new AuthorizationType("Retinal");

    public const IMAGE: AuthorizationType = new AuthorizationType("Image");

    public const DNA: AuthorizationType = new AuthorizationType("DNA");

    public const PRINT: AuthorizationType = new AuthorizationType("Print");

    public const CHIP: AuthorizationType = new AuthorizationType("Chip");

};

            

