
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITDB_CPP
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITDB_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/installer/InitDb.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Warning you must have sql root access

InitDb::InitDb(){
}


InitDb::InitDb(DbConnectionInfo* dbConnectionInfo){
}


    auto InitDb::setHelper(Object* anyType) -> void{
this->anyType= anyType;
    
}


    auto InitDb::getHelper() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->anyType;
    
}


    auto InitDb::getHostName() -> std::string{

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method* method = dynamicClass->getMethod(this->METHOD_CALL_GET_HOST_NAME, 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    auto InitDb::addUsers() -> bool{

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method* method = dynamicClass->getMethod(this->METHOD_CALL_ADD_USERS, 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(this->anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto InitDb::addDatabases() -> bool{

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method* method = dynamicClass->getMethod(this->METHOD_CALL_ADD_DATABASES, 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(this->anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto InitDb::addTables() -> bool{

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method* method = dynamicClass->getMethod(this->METHOD_CALL_ADD_TABLES, 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(this->anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto InitDb::useTemporaryMainPath() -> bool{

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method* method = dynamicClass->getMethod(this->METHOD_CALL_TEMP_MAIN_PATH, 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(this->anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto InitDb::useNormalMainPath() -> bool{

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method* method = dynamicClass->getMethod(this->METHOD_CALL_MAIN_PATH, 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(this->anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITDB_CPP
