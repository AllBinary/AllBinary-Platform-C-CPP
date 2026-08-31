
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
        



#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlInput: public HtmlTag {
        

    private: const END: string = ">";

    private: const STARTINPUT: string = "<INPUT ";

    private: const ENDINPUT: string = "</INPUT>";

    private: const TYPE: string = "TYPE=\"";

    private: const NAME: string = "NAME=\"";

    private: before: string;

    private: type: string;

    private: name: string;

    private: after: string;

public constructor (string before, string type, string name, string after){

            super();
        this.before= before;
    
this.type= type;
    
this.name= name;
    
this.after= after;
    
}


    public string toString(){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    result: string = stringUtil!.EMPTY_STRING;;
    

    attributeKeys: std::vector<any> = this.otherAttributes!.keySet()!.()!;;
    

    attributeSize: int32_t = attributeKeys!.length
                ;;
    
result= this.before;
    
result += this.STARTINPUT;
    
result += this.TYPE;
    
result += this.type;
    
result += "\" ";
    
result += this.NAME;
    
result += this.name;
    
result += "\" ";
    




                        for (
    i: int32_t = 0;i < attributeSize; i++)
        {

    key: string = attributeKeys[i]! as string;;
    

    value: string = otherAttributes!.get(key) as string;;
    

                        if(value != 
                                    null
                                 && value.compareTo(stringUtil!.EMPTY_STRING) != 0)
                        
                                    {
                                    result += key;
    
result += "=\"";
    
result += value;
    
result += "\" ";
    

                                    }
                                
}

result += this.END;
    
result += this.ENDINPUT;
    
result += this.after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

