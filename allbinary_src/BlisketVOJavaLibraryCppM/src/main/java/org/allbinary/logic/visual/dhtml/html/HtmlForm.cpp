
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
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/input/HtmlInput.h>

      
#include <org/allbinary/logic/visual/dhtml/html/table/HtmlTable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlForm
            : public Object
         {
        

    private: const FORMBEGIN: string = "<form ";

    private: const END: string = ">";

    private: const FORMEND: string = "</form>";

    private: const ACTION: string = "ACTION=\"";

    private: const GET: string = "GET\"";

    private: const POST: string = "POST\"";

    private: const METHODS: std::vector<string> = 
                                                        [
                                                            this.GET,this.POST
                                                        ];

    private: const METHOD: string = "METHOD=\"";

    private: method: string;

    private: action: string;

    inputs: Vector;

public constructor (string action){

            super();
        this.action= action;
    
this.inputs= new Vector();
    
}


    public setPost(){
this.method= this.POST;
    
}


    public setGet(){
this.method= this.GET;
    
}


    public addInput(HtmlInput htmlInput){
this.inputs.add(htmlInput);
    
}


    public addTable(HtmlTable htmlTable){
this.inputs.add(htmlTable);
    
}


    public string toString(){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    result: string = stringUtil!.EMPTY_STRING;;
    

    inputArray: std::vector<any> = this.inputs.toArray()!;;
    

    inputSize: int32_t = inputArray!.length
                ;;
    
result= this.FORMBEGIN;
    
result += this.METHOD;
    
result += this.method;
    
result += "\" ";
    
result += this.ACTION;
    
result += this.action;
    
result += "\" ";
    
result += this.END;
    




                        for (
    i: int32_t = 0;i < inputSize; i++)
        {
result += inputArray[i]!.toString();
    
result += " ";
    
}

result += this.FORMEND;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

