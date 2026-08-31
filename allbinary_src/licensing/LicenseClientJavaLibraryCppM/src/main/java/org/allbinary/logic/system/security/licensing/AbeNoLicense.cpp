
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeLicenseInterface.h"
#include "LicenseTypeFactory.h"
#include "LicenseType.h"

class AbeNoLicense
            : public Object
        : public AbeLicenseInterface {
        

    private: static abeNoLicense: AbeNoLicense = new AbeNoLicense();

    public static AbeNoLicense getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeNoLicense.abeNoLicense;
    
}


    public serverVector: BasicArrayList = new BasicArrayListD();

private constructor (){

            super();
        }


    public bool hasKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string getKey(string keyName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


    public string getLicenseId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


    public string getSpecial(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


    public BasicArrayList getServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.serverVector;
    
}


    public bool isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public LicenseType getLicenseType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseTypeFactory.getInstance()!.UNKNOWN;
    
}


};

            

