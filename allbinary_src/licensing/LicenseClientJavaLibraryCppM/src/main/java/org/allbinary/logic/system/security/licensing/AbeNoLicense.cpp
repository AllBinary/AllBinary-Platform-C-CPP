
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

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicenseTypeFactory.h"
#include "org/allbinary/logic/system/security/licensing/LicenseType.h"

class AbeNoLicense
            : public Object
        , public AbeLicenseInterface {

    private: static AbeNoLicense* abeNoLicense() { static std::unique_ptr<AbeNoLicense> value(new AbeNoLicense()); return value.get(); }

    public: static AbeNoLicense* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeNoLicense::abeNoLicense();
    
}


    public: BasicArrayList* serverVector = new BasicArrayListD();

private: AbeNoLicense(){
}


    public: bool hasKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string getKey(std::string keyName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    public: std::string getLicenseId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    public: std::string getSpecial(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    public: BasicArrayList* getServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverVector;
    
}


    public: bool isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: LicenseType* getLicenseType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseTypeFactory::getInstance()->UNKNOWN;
    
}


};

            

