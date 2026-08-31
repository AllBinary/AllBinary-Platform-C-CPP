
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
        
class HtmlCell: public HtmlTag {
        

    private: const END: string = ">";

    private: const START: string = "<td ";

    private: const ENDTAG: string = "</td>";

    private: const HEIGHT: string = "height";

    private: const WIDTH: string = "width";

    private: height: string;

    private: width: string;

    private: before: string;

    private: body: string;

    private: after: string;

public constructor (string before, string width, string height, string after){

            super();
        this.before= before.toCharArray().slice(0, ).join('');
    
this.after= after.toCharArray().slice(0, ).join('');
    
this.height= height.toCharArray().slice(0, ).join('');
    
this.width= width.toCharArray().slice(0, ).join('');
    
addAttribute(this.HEIGHT, this.height);
    
addAttribute(this.WIDTH, this.width);
    
}


    public addText(string body){
this.body= body;
    
}


    public string toString(){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    result: string = stringUtil!.EMPTY_STRING;;
    

    attributeKeys: std::vector<any> = this.otherAttributes!.keySet()!.()!;;
    

    attributeSize: int32_t = attributeKeys!.length
                ;;
    
result= this.before;
    
result += this.START;
    
result += " ";
    




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
    
result += this.body;
    
result += this.ENDTAG;
    
result += this.after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

