
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/io/LineReader.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlSelect: public HtmlTag {
        

    private: const END: string = ">";

    private: const STARTSELECT: string = "<SELECT ";

    private: const ENDSELECT: string = "</SELECT>";

    private: const SIZE: string = "SIZE=\"";

    private: const NAME: string = "NAME=\"";

    private: const STARTOPTION: string = "<OPTION";

    private: const SELETED: string = "SELECTED";

    private: const ENDOPTION: string = "</OPTION>";

    private: before: string;

    private: name: string;

    private: after: string;

    private: size: string;

    private: selected: string;

    private: options: Vector;

    private: multiple: string = "multiple";

    private: isMultipleSelect: bool = false;

public constructor (string before, string size, string name, string after){

            super();
        this.before= before;
    
this.size= size;
    
this.name= name;
    
this.after= after;
    
this.options= new Vector();
    
}


    public addOption(string key){
this.options.add(key);
    
}


    public addOptions(string fileName){

        try {
            
    lineReader: LineReader = new LineReader(fileName);;
    

        while(lineReader!.hasNext())
        {

    option: string = lineReader!.next()!;;
    
this.addOption(option);
    
}


                //: 
} catch(e) 
            {
this.addOption("Error");
    
}

}


    public setSelected(string selected){
this.selected= selected;
    
}


    public bool isMultiple(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isMultipleSelect;
    
}


    public setMultiple(bool value){
this.isMultipleSelect= value;
    
}


    string getOptions(){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    result: string = stringUtil!.EMPTY_STRING;;
    

    optionsArray: std::vector<any> = this.options.toArray()!;;
    

    optionsSize: int32_t = optionsArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < optionsSize; i++)
        {

    value: string = optionsArray[i]! as string;;
    

                        if(value != 
                                    null
                                 && value.compareTo(stringUtil!.EMPTY_STRING) != 0)
                        
                                    {
                                    result += this.STARTOPTION;
    
result += this.END;
    
result += value;
    
result += this.ENDOPTION;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public string toString(){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    result: string = stringUtil!.EMPTY_STRING;;
    

    attributeKeys: std::vector<any> = this.otherAttributes!.keySet()!.()!;;
    

    attributeSize: int32_t = attributeKeys!.length
                ;;
    
result= this.before;
    
result += this.STARTSELECT;
    
result += this.NAME;
    
result += this.name;
    
result += "\" ";
    
result += this.SIZE;
    
result += this.size;
    
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


                        if(this.isMultiple())
                        result += " " +this.multiple +" "
result += this.END;
    
result += this.getOptions();
    
result += this.ENDSELECT;
    
result += this.after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

