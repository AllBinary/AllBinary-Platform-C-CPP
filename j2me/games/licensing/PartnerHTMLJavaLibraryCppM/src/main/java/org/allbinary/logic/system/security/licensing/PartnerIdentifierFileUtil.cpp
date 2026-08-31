
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PartnerIdentifierFileUtil
            : public Object
         {
        

    private: static const instance: PartnerIdentifierFileUtil = new PartnerIdentifierFileUtil();

    public static PartnerIdentifierFileUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PartnerIdentifierFileUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const FILE_NAME: string = "partner.txt";

    public string get(){

        try {
            
    resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;;
    

    partnerString: string = StringUtil.getInstance()!.EMPTY_STRING;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return partnerString;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.GET, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.NULL_STRING;
    
}

}


};

            

