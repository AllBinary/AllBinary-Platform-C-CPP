
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
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HttpData
            : public Object
         {
        

    private: static const instance: HttpData = new HttpData();

    public static HttpData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HttpData.instance;
    
}


    public const EQUALS: string;

    public const PARAM_SEP: string;

    public const URL_PARAM_SEP: string;

    public const URL_LABEL: string = "Url: ";

private constructor (){

            super();
        
    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    
this.EQUALS= commonSeps!.EQUALS;
    
this.PARAM_SEP= commonSeps!.AMPERSAND;
    
this.URL_PARAM_SEP= commonSeps!.QUESTION;
    
}


};

            

