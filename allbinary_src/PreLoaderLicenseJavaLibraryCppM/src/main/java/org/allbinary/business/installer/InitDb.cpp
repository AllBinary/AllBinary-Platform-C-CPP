
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Warning you must have sql root access
class InitDb
            : public Object
         {

    private: Object* anyType;

    private: const std::string METHOD_CALL_GET_HOST_NAME = "getHostName";

    private: const std::string METHOD_CALL_ADD_USERS = "addUsers";

    private: const std::string METHOD_CALL_ADD_DATABASES = "addDatabases";

    private: const std::string METHOD_CALL_ADD_TABLES = "addTables";

    private: const std::string METHOD_CALL_TEMP_MAIN_PATH = "useTemporaryMainPath";

    private: const std::string METHOD_CALL_MAIN_PATH = "useNormalMainPath";

public: InitDb(){
}


public: InitDb(DbConnectionInfo dbConnectionInfo){
}


    protected: void setHelper(Object* anyType){
this->anyType= anyType;
    
}


    protected: Object* getHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->anyType;
    
}


    private: std::string getHostName(){

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method method = dynamicClass.getMethod(this->METHOD_CALL_GET_HOST_NAME, 
                            nullptr);;
    

    std::string result = method.invoke(this->anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: bool addUsers(){

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method method = dynamicClass.getMethod(this->METHOD_CALL_ADD_USERS, 
                            nullptr);;
    

    Boolean result = method.invoke(this->anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public: bool addDatabases(){

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method method = dynamicClass.getMethod(this->METHOD_CALL_ADD_DATABASES, 
                            nullptr);;
    

    Boolean result = method.invoke(this->anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public: bool addTables(){

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method method = dynamicClass.getMethod(this->METHOD_CALL_ADD_TABLES, 
                            nullptr);;
    

    Boolean result = method.invoke(this->anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public: bool useTemporaryMainPath(){

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method method = dynamicClass.getMethod(this->METHOD_CALL_TEMP_MAIN_PATH, 
                            nullptr);;
    

    Boolean result = method.invoke(this->anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public: bool useNormalMainPath(){

        try {
            
    Class* dynamicClass = this->anyType->getClass();;
    

    Method method = dynamicClass.getMethod(this->METHOD_CALL_MAIN_PATH, 
                            nullptr);;
    

    Boolean result = method.invoke(this->anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

