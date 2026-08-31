
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
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Random.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Password
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: password: string;

public constructor (string password){

            super();
        this.password= password;
    
}


    public set(string value){
this.password= value;
    
}


    public string get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.password;
    
}


    public Boolean isValid(){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
    valid: Boolean = Boolean.TRUE;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VALIDATION))
                        
                                    {
                                    this.logUtil!.putF("Password: " +this.password, this, commonStrings!.IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil.getInstance()!.isValidRequired(this.password, 6, UserData.MAXLEN))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VALIDATION))
                        
                                    {
                                    this.logUtil!.putF("Password is invalid", this, commonStrings!.IS_VALID);
    

                                    }
                                
valid= Boolean.FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VALIDATIONERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to validate form", "Password", commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public string getValidationInfo(){

                        if(!StringValidationUtil.getInstance()!.isValidRequired(this.password, 6, UserData.MAXLEN))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Please enter a Password with more than 6 characters.<br />";
    

                                    }
                                

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringUtil!.EMPTY_STRING;
    
}


    public Vector toVector(string secret){
this.password= StringUtil.getInstance()!.getNonNull(this.password);
    

    random: int32_t = new Random().nextInt(SuperCrypt.KEYMAX)!;;
    

    vector: Vector = new Vector();;
    
vector.add(new Integer(random).toString());
    
vector.add(secret);
    
vector.add(new SuperCrypt(random).encrypt(this.password));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public HashMap<any, any> toHashMap(string secret){
this.password= StringUtil.getInstance()!.getNonNull(this.password);
    

    values: HashMap<any, any> = new HashMap<any, any>();;
    

    random: int32_t = new Random().nextInt(SuperCrypt.KEYMAX)!;;
    
values.put(EntryData.getInstance()!.ENCRYPTION, new Integer(random).toString());
    
values.put(UserData.SECRET, secret);
    
values.put(UserData.PASSWORD, new SuperCrypt(random).encrypt(this.password));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


};

            

