
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
        



#include <java/util/Vector.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlRow.h"

class HtmlTable: public HtmlTag {
        

    private: const END: string = ">";

    private: const START: string = "<table ";

    private: const ENDTAG: string = "</table>";

    private: const CLASS: string = "class";

    private: const DIRECTION: string = "dir";

    private: const ID: string = "id";

    private: const LANG: string = "lang";

    private: const UNITS: string = "units";

    private: const BORDER: string = "border";

    private: const CELLPADDING: string = "cellpadding";

    private: const CELLSPACING: string = "cellspacing";

    private: const COLS: string = "cols";

    private: const FLOAT: string = "float";

    private: const FRAME: string = "frame";

    private: const RULES: string = "rules";

    private: const WIDTH: string = "width";

    private: const STYLE: string = "style";

    public const BORDERCOLLAPSE: string = "border-collapse: collapse";

    private: numberOfColumns: int32_t = 0;

    private: before: string;

    private: border: string;

    private: cellpadding: string;

    private: cellspacing: string;

    private: style: string;

    private: name: string;

    private: after: string;

    private: htmlRowsVector: Vector;

public constructor (string before, string cellpadding, string cellspacing, string after){

            super();
        this.before= before;
    
this.cellpadding= cellpadding;
    
this.cellspacing= cellspacing;
    
this.after= after;
    
this.htmlRowsVector= new Vector();
    
addAttribute(this.BORDER, CommonPhoneStrings.getInstance()!.ZERO);
    
addAttribute(this.CELLPADDING, this.cellpadding);
    
addAttribute(this.CELLSPACING, this.cellspacing);
    
addAttribute(this.STYLE, this.BORDERCOLLAPSE);
    
}


    public addRow(HtmlRow htmlRow){

                        if(this.numberOfColumns < htmlRow!.getNumberOfColumns())
                        this.numberOfColumns= htmlRow!.getNumberOfColumns()
this.htmlRowsVector!.add(htmlRow);
    
}


    public string toString(){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    result: string = stringUtil!.EMPTY_STRING;;
    

    attributeKeys: std::vector<any> = this.otherAttributes!.keySet()!.()!;;
    
result= this.before;
    
result += this.START;
    
result += " ";
    




                        for (
    i: int32_t = 0;i < attributeKeys!.length; i++)
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
    

    size: int32_t = this.htmlRowsVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {
result += this.htmlRowsVector!.get(i)!.toString();
    
result += " ";
    
}

result += this.ENDTAG;
    
result += this.after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

