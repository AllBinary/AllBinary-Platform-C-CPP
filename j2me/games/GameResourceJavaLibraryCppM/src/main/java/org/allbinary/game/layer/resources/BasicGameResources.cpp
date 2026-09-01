
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
        



            #include <vector>
        
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

    protected: static const StringMaker stringBuffer = StringMaker();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: std::string RESOURCE = StringUtil::getInstance().EMPTY_STRING;

    public: std::string RESOURCE_DESTROY = StringUtil::getInstance().EMPTY_STRING;

protected: BasicGameResources(){
}


    public: void init(std::string ROOT, std::vector<std::string> SIZE){

        try {
            
    int32_t scale = GameConfigurationCentral::getInstance().SCALE.getValue().intValue();;
    

                        if(scale > 1 && scale -1 < SIZE::size())
                        
                                    {
                                    this->append(ROOT, SIZE[scale -1]!);
    

                                    }
                                
                        else {
                            


                            throw Exception(StringMaker().append("Invalid Value: ").appendint(scale).toString());
                    

                        }
                            

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.INIT, e);
    
}

}


                //@Throws(Exception.constructor)
            
    protected: void append(std::string ROOT, std::string sizeString){

    std::string DESTROY = "_destroy";;
    

    std::string string = this->getString();;
    
BasicGameResources::stringBuffer.delete(0, BasicGameResources::stringBuffer.length());
    
BasicGameResources::stringBuffer.append(ROOT);
    
BasicGameResources::stringBuffer.append(string);
    
BasicGameResources::stringBuffer.append(sizeString);
    
this->RESOURCE= BasicGameResources::stringBuffer.toString();
    
BasicGameResources::stringBuffer.delete(0, BasicGameResources::stringBuffer.length());
    
BasicGameResources::stringBuffer.append(ROOT);
    
BasicGameResources::stringBuffer.append(DESTROY);
    
BasicGameResources::stringBuffer.append(string);
    
BasicGameResources::stringBuffer.append(sizeString);
    
this->RESOURCE_DESTROY= BasicGameResources::stringBuffer.toString();
    
}


                //@Throws(Exception.constructor)
            
    protected: std::string getString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameGraphicsResourceUtil::getInstance().getName();;
    
}


};

            

