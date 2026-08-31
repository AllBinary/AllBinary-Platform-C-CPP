
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
        

    private: static const CLASSNAME: string = "org.allbinary.business.installer.InitDbCrypted";

                //@Throws(LicensingException.constructor)
            
    public static any getInstance(AbeClientInformationInterface abeClientInformation, DatabaseConnectionInfoInterface databaseConnectionInfoInterface){

    params: std::vector<any> = new Array(1);;
    

    classes: std::vector<Function> = new Array(1);;
    
classes[0]= 
                                    //Otherwise - expression - AssignExpr - value - ClassExpr
;
    
params[0]= databaseConnectionInfoInterface;
    

    anyType: any = AbeFactory.getInstance()!.getInstance(abeClientInformation, CLASSNAME, classes, params)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    
}


                //@Throws(LicensingException.constructor)
            
    public static any getInstance(AbeClientInformationInterface abeClientInformation){

    anyType: any = AbeFactory.getInstance()!.getInstance(abeClientInformation, CLASSNAME, 
                            nullptr, 
                            nullptr)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    
}


private constructor (){

            super();
        }


};

            

