
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Class.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Warning you must have sql root access
class InitDb
            : public Object
         {
        

    private: anyType: any;

    private: const METHOD_CALL_GET_HOST_NAME: string = "getHostName";

    private: const METHOD_CALL_ADD_USERS: string = "addUsers";

    private: const METHOD_CALL_ADD_DATABASES: string = "addDatabases";

    private: const METHOD_CALL_ADD_TABLES: string = "addTables";

    private: const METHOD_CALL_TEMP_MAIN_PATH: string = "useTemporaryMainPath";

    private: const METHOD_CALL_MAIN_PATH: string = "useNormalMainPath";

public constructor (){

            super();
        }


public constructor (DbConnectionInfo dbConnectionInfo){

            super();
        }


    setHelper(any = {} anyType){
this.anyType= anyType;
    
}


    any getHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.anyType;
    
}


    string getHostName(){

        try {
            
    dynamicClass: Function = this.anyType!.constructor!;;
    

    method: Method = dynamicClass!.getMethod(this.METHOD_CALL_GET_HOST_NAME, 
                            nullptr)!;;
    

    result: string = method.invoke(this.anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public bool addUsers(){

        try {
            
    dynamicClass: Function = this.anyType!.constructor!;;
    

    method: Method = dynamicClass!.getMethod(this.METHOD_CALL_ADD_USERS, 
                            nullptr)!;;
    

    result: Boolean = method.invoke(this.anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool addDatabases(){

        try {
            
    dynamicClass: Function = this.anyType!.constructor!;;
    

    method: Method = dynamicClass!.getMethod(this.METHOD_CALL_ADD_DATABASES, 
                            nullptr)!;;
    

    result: Boolean = method.invoke(this.anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool addTables(){

        try {
            
    dynamicClass: Function = this.anyType!.constructor!;;
    

    method: Method = dynamicClass!.getMethod(this.METHOD_CALL_ADD_TABLES, 
                            nullptr)!;;
    

    result: Boolean = method.invoke(this.anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool useTemporaryMainPath(){

        try {
            
    dynamicClass: Function = this.anyType!.constructor!;;
    

    method: Method = dynamicClass!.getMethod(this.METHOD_CALL_TEMP_MAIN_PATH, 
                            nullptr)!;;
    

    result: Boolean = method.invoke(this.anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool useNormalMainPath(){

        try {
            
    dynamicClass: Function = this.anyType!.constructor!;;
    

    method: Method = dynamicClass!.getMethod(this.METHOD_CALL_MAIN_PATH, 
                            nullptr)!;;
    

    result: Boolean = method.invoke(this.anyType, 
                            nullptr) as Boolean;;
    



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

            

