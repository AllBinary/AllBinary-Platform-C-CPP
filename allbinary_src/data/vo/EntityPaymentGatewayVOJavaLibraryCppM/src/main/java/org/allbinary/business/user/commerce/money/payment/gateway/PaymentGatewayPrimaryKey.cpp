
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Serializable.h"
#include "PaymentGateway.h"

class PaymentGatewayPrimaryKey
            : public Object
        : public java.io.Serializable {
        

    private: storeName: string;

    private: name: string;

public constructor (string storeName, string gatewayName){

            super();
        this.setStoreName(storeName);
    
this.setName(gatewayName);
    
}


    public string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeName;
    
}


    public setStoreName(string storeName){
this.storeName= storeName;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setName(string name){
this.name= name;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(PaymentGatewayPrimaryKey.constructor.toString()!);
    
stringBuffer!.append(StoreFront.constructor.toString()!);
    
stringBuffer!.append(" =");
    
stringBuffer!.append(this.getStoreName());
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(PaymentGateway.constructor.toString()!);
    
stringBuffer!.append("=");
    
stringBuffer!.append(this.getName());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

