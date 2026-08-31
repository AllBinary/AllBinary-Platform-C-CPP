
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
        



            #include "../../../../../../../java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlValueInput.h"

class HtmlLengthInput: public HtmlValueInput {
        

    private: const MAXLENGTH: string = "MAXLENGTH";

    private: const SIZE: string = "SIZE";

    private: length: string;

    private: size: string;

public constructor (string before, string type, string name, string value, string after){
            super(before, type, name, value, after);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public setMaxLength(Integer length){
this.length= length.toString();
    
addAttribute(this.MAXLENGTH, this.length);
    
}


    public setSize(Integer size){
this.size= size.toString();
    
addAttribute(this.MAXLENGTH, this.size);
    
}


};

            

