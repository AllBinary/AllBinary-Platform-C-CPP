
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

        
#include <org/allbinary/logic/system/security/AbKeys.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/loader/NativeLibraryHelperWrapper.h"
#include "org/allbinary/logic/system/loader/SecuredNativeLibraryInterface.h"

class SecuredNativeLibraryHelperWrapper: public NativeLibraryHelperWrapper {

    private: SecuredNativeLibraryInterface* securedNativeLibraryInterface;

public: SecuredNativeLibraryHelperWrapper(SecuredNativeLibraryInterface* securedNativeLibraryInterface) : NativeLibraryHelperWrapper(securedNativeLibraryInterface->getLibraryName()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->securedNativeLibraryInterface= securedNativeLibraryInterface;
    
}


                //@Throws(LicensingException.constructor)
            
    public: bool unlock(AbeClientInformationInterface* abeClientInformation){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->securedNativeLibraryInterface->unlock(AbKeys::getInstance()->getKey(abeClientInformation, this->securedNativeLibraryInterface->getName()));;
    
}


};

            

