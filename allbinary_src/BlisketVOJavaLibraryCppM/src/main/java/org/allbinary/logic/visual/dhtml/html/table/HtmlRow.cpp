
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlCell.h"

class HtmlRow: public HtmlTag {
        

    private: const END: string = ">";

    private: const START: string = "<tr ";

    private: const ENDTAG: string = "</tr>";

    private: numberOfColumns: int32_t = 0;

    private: before: string;

    private: after: string;

    private: htmlCellsVector: Vector;

public constructor (string before, string after){

            super();
        this.before= before.toCharArray().slice(0, ).join('');
    
this.after= after.toCharArray().slice(0, ).join('');
    
this.htmlCellsVector= new Vector();
    
}


    public addCell(HtmlCell htmlCell){
this.htmlCellsVector!.add(htmlCell);
    
this.numberOfColumns++;
    
}


    public int32_t getNumberOfColumns(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.numberOfColumns;
    
}


    public string toString(){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    result: string = stringUtil!.EMPTY_STRING;;
    

    attributeKeys: std::vector<any> = this.otherAttributes!.keySet()!.()!;;
    

    attributeSize: int32_t = attributeKeys!.length
                ;;
    

    cellSize: int32_t = this.htmlCellsVector!.length!;;
    
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
    




                        for (
    i: int32_t = 0;i < cellSize; i++)
        {
result += this.htmlCellsVector!.get(i)!.toString();
    
result += " ";
    
}

result += this.ENDTAG;
    
result += this.after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

