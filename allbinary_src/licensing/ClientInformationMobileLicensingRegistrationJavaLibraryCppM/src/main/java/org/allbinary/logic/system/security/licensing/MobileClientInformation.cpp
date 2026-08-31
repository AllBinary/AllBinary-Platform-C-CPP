
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
        



            #include "../../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeClientInformation.h"
#include "PartnerIdentifierFileUtil.h"

class MobileClientInformation: public AbeClientInformation {
        

    static const DESC: string = "Mobile";

    static const ANDROID_DESC: string = "Android" +MobileClientInformation.DESC;

public constructor (string name, string version, string specialName, string shortName){
            super(name, version, new StringMaker().append(specialName)!.append(CommonSeps.getInstance()!.SPACE)!.append(PartnerIdentifierFileUtil.getInstance()!.get())!.toString(), shortName);
                    

                            //For kotlin this is before the body of the constructor.
                    

    string: string = this.getSpecialName()!;;
    

    number: string = string.substring(string.length -1)!;;
    

                        if(Integer.getInteger(number) == 
                                    null
                                )
                        
                                    {
                                    this.setHardSale(false);
    

                                    }
                                

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

                        if(this.isHardSale())
                        
                                    {
                                    this.logUtil!.putF("Use Hard Coded Selling", this, commonStrings!.CONSTRUCTOR);
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Don't Use Hard Coded Selling", this, commonStrings!.CONSTRUCTOR);
    

                        }
                            
}


    public Hashtable<any, any> toHashtable(){

    hashtable: Hashtable<any, any> = super.toHashtable()!;;
    

    registrationConfiguration: RegistrationConfiguration = RegistrationConfiguration.getInstance()!;;
    
hashtable.put(registrationConfiguration!.NAME, registrationConfiguration!.getRegistrationCode());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


};

            

