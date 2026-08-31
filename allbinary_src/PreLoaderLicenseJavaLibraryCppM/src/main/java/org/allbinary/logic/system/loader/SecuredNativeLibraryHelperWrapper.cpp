
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
        



#include <org/allbinary/logic/system/security/AbKeys.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NativeLibraryHelperWrapper.h"
#include "SecuredNativeLibraryInterface.h"

class SecuredNativeLibraryHelperWrapper: public NativeLibraryHelperWrapper {
        

    private: securedNativeLibraryInterface: SecuredNativeLibraryInterface;

public constructor (SecuredNativeLibraryInterface securedNativeLibraryInterface){
            super(securedNativeLibraryInterface!.getLibraryName());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.securedNativeLibraryInterface= securedNativeLibraryInterface;
    
}


                //@Throws(LicensingException.constructor)
            
    public bool unlock(AbeClientInformationInterface abeClientInformation){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.securedNativeLibraryInterface!.unlock(AbKeys.getInstance()!.getKey(abeClientInformation, this.securedNativeLibraryInterface!.getName()));;
    
}


};

            

