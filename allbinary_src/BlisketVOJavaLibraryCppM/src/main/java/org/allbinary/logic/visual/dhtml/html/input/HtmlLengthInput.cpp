
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

    private: const std::string MAXLENGTH = "MAXLENGTH";

    private: const std::string SIZE = "SIZE";

    private: std::string length;

    private: std::string size;

public: HtmlLengthInput(std::string before, std::string type, std::string name, std::string value, std::string after){
            super(before, type, name, value, after);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void setMaxLength(Integer length){
this->length= length.toString();
    
addAttribute(this->MAXLENGTH, this->length);
    
}


    public: void setSize(Integer size){
this->size= size.toString();
    
addAttribute(this->MAXLENGTH, this->size);
    
}


};

            

