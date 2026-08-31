
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmailServerConfigurationInterface.h"
#include "EmailServerConfigurationData.h"

class EmailServerConfigurationMapping
            : public Object
        : public TableMappingInterface {
        

    private: emailServerConfigurationInterface: EmailServerConfigurationInterface;

public constructor (EmailServerConfigurationInterface emailServerConfigurationInterface){

            super();
        this.emailServerConfigurationInterface= emailServerConfigurationInterface;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(EmailServerConfigurationData.SERVER, this.emailServerConfigurationInterface!.getSmtpServer());
    
hashMap!.put(EmailServerConfigurationData.ACCOUNT, this.emailServerConfigurationInterface!.getAccountName());
    
hashMap!.put(EmailServerConfigurationData.PASSWORD, this.emailServerConfigurationInterface!.getPassword());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EmailServerConfigurationData.NAME;
    
}


                //@Throws(Exception.constructor)
            
    public Vector toVector(){

    vector: Vector = new Vector();;
    
vector.add(this.emailServerConfigurationInterface!.getSmtpServer());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


};

            

