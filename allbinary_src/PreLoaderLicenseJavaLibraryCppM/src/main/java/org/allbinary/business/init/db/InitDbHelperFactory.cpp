
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DatabaseConnectionInfoInterface.h"

class InitDbHelperFactory
            : public Object
         {

    private: static const std::string CLASSNAME = "org.allbinary.business.installer.InitDbCrypted";

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface abeClientInformation, DatabaseConnectionInfoInterface databaseConnectionInfoInterface){

    std::vector<Object*> params = new Array(1);;
    

    std::vector<Function> classes = new Array(1);;
    
classes[0]= 
                                    //Otherwise - expression - AssignExpr - value - ClassExpr
;
    
params[0]= databaseConnectionInfoInterface;
    

    Object* anyType = AbeFactory::getInstance().getInstance(abeClientInformation, CLASSNAME, classes, params);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    
}


                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface abeClientInformation){

    Object* anyType = AbeFactory::getInstance().getInstance(abeClientInformation, CLASSNAME, 
                            nullptr, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    
}


private: InitDbHelperFactory(){
}


};

            

