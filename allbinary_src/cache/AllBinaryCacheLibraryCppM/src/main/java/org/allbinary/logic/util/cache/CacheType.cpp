
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CacheType
            : public Object
         {
        

    private: const vendor: string;

    private: const type: string;

public constructor (string vendor, string type){

            super();
        this.vendor= vendor;
    
this.type= type;
    
}


    public string getVendor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.vendor;
    
}


    public string getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.type;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("CacheType: Vendor: ");
    
stringBuffer!.append(this.getVendor());
    
stringBuffer!.append(" Type: ");
    
stringBuffer!.append(this.getType());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

