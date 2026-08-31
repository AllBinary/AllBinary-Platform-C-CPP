
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameGraphicsResourceUtil.h"

class BasicGameResources
            : public Object
         {
        

    static const stringBuffer: StringMaker = new StringMaker();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public RESOURCE: string = StringUtil.getInstance()!.EMPTY_STRING;

    public RESOURCE_DESTROY: string = StringUtil.getInstance()!.EMPTY_STRING;

protected constructor (){

            super();
        }


    public init(string ROOT, std::vector<string> SIZE){

        try {
            
    scale: int32_t = GameConfigurationCentral.getInstance()!.SCALE.getValue()!.intValue()!;;
    

                        if(scale > 1 && scale -1 < SIZE.length)
                        
                                    {
                                    this.append(ROOT, SIZE[scale -1]!);
    

                                    }
                                
                        else {
                            


                            throw new Exception(new StringMaker().append("Invalid Value: ")!.appendint(scale)!.toString());
                    

                        }
                            

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.INIT, e);
    
}

}


                //@Throws(Exception.constructor)
            
    append(string ROOT, string sizeString){

    DESTROY: string = "_destroy";;
    

    string: string = this.getString()!;;
    
BasicGameResources.stringBuffer!.delete(0, BasicGameResources.stringBuffer!.length());
    
BasicGameResources.stringBuffer!.append(ROOT);
    
BasicGameResources.stringBuffer!.append(string);
    
BasicGameResources.stringBuffer!.append(sizeString);
    
this.RESOURCE= BasicGameResources.stringBuffer!.toString();
    
BasicGameResources.stringBuffer!.delete(0, BasicGameResources.stringBuffer!.length());
    
BasicGameResources.stringBuffer!.append(ROOT);
    
BasicGameResources.stringBuffer!.append(DESTROY);
    
BasicGameResources.stringBuffer!.append(string);
    
BasicGameResources.stringBuffer!.append(sizeString);
    
this.RESOURCE_DESTROY= BasicGameResources.stringBuffer!.toString();
    
}


                //@Throws(Exception.constructor)
            
    string getString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameGraphicsResourceUtil.getInstance()!.getName();;
    
}


};

            

