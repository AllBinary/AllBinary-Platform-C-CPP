
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_INITDBHELPERFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_INITDBHELPERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/db/InitDbHelperFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"


InitDbHelperFactory::InitDbHelperFactory(){
}


                //@Throws(LicensingException.constructor)
            
    auto InitDbHelperFactory::getInstance(AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) -> Object*{

    std::vector<Object*> params = std::vector<Object*>(1);;
    

    std::vector<Class*> classes = std::vector<Class*>(1);;
    
classes[0]= 
                                    //Otherwise - expression - AssignExpr - value - ClassExpr
;
    
params[0]= databaseConnectionInfoInterface;
    

    Object* anyType = JavaBoxes::toObject(AbeFactory::getInstance()->getInstance(abeClientInformation, CLASSNAME, classes, params));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    
}


                //@Throws(LicensingException.constructor)
            
    auto InitDbHelperFactory::getInstance(AbeClientInformationInterface* abeClientInformation) -> Object*{

    Object* anyType = JavaBoxes::toObject(AbeFactory::getInstance()->getInstance(abeClientInformation, CLASSNAME, 
                            nullptr, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_INITDBHELPERFACTORY_CPP
